importScripts("xterm-pty-worker-tools-0.9.6.min.js");

onmessage = msg => {
  importScripts("cartesi-term.js")

  const { emscriptenHack, TtyClient } = self
  emscriptenHack(new TtyClient(msg.data))
}
