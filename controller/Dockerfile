FROM gcc:latest as builder

WORKDIR /app
COPY . .
RUN make build

# FROM alpine

# WORKDIR /app
# COPY --from=builder /app/bin /app/bin

CMD ["bin/index"]