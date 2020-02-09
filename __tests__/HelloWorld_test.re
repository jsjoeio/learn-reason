open Jest;

describe ("HelloWorld", () => {
  open Expect;
  open HelloWorld;

  test("sayHelloWorld", () => {
    let result = sayHelloWorld()
    result |> expect |> toBe("Hello world!")
  })
})
