
//
// Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
// more contributor license agreements. See the NOTICE file distributed
// with this work for additional information regarding copyright ownership.
// Green Energy Corp licenses this file to you under the Apache License,
// Version 2.0 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// This file was forked on 01/01/2013 by Automatak, LLC and modifications
// have been made to this file. Automatak, LLC licenses these modifications to
// you under the terms of the License.
//

#include "TLS_Base.h"

#include "TransportLayer.h"

#include <opendnp3/Exception.h>
#include <opendnp3/Location.h>

namespace opendnp3
{

void TLS_Base::Send(const uint8_t*, size_t, TransportLayer*)
{
	MACRO_THROW_EXCEPTION(InvalidStateException, this->Name() );
}

void TLS_Base::HandleReceive(const uint8_t*, size_t, TransportLayer*)
{
	MACRO_THROW_EXCEPTION(InvalidStateException, this->Name() );
}

void TLS_Base::HandleSendSuccess(TransportLayer*)
{
	MACRO_THROW_EXCEPTION(InvalidStateException, this->Name() );
}

void TLS_Base::HandleSendFailure(TransportLayer*)
{
	MACRO_THROW_EXCEPTION(InvalidStateException, this->Name() );
}

void TLS_Base::LowerLayerUp(TransportLayer*)
{
	MACRO_THROW_EXCEPTION(InvalidStateException, this->Name() );
}

void TLS_Base::LowerLayerDown(TransportLayer*)
{
	MACRO_THROW_EXCEPTION(InvalidStateException, this->Name() );
}

}

