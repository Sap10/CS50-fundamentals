from openai import OpenAI 

client = OpenAI()

user_prompt = input("prompt : ")

system_prompt = "Limit your answer to one sentence"

response = client.response.create(
    input = prompt,
    instructions = system_prompt,
    model = "gpt-5"
)

print(response.output_text)