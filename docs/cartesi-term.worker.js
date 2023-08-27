importScripts("xterm-pty-worker-tools-0.9.6.min.js");

onmessage = msg => {
  importScripts("cartesi-term.js");

  const module = self.Module

  module.setStatus = message => {
    self.postMessage({ type: "status", message });
  }

  const { emscriptenHack, TtyClient } = self;
  emscriptenHack(new TtyClient(msg.data));
}
