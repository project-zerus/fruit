/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef SERVER_H
#define SERVER_H

#include "path_handler.h"

#include <fruit/fruit.h>
#include <string>

class Server {
public:
  virtual void run(fruit::Component<fruit::Required<Request, ServerContext>>&& requestHandlersComponent) = 0;
};

fruit::Component<Server> getServerComponent();

#endif // SERVER_H
