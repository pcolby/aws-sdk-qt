/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getuserdefinedfunctionrequest.h"
#include "getuserdefinedfunctionrequest_p.h"
#include "getuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetUserDefinedFunctionRequest
 *
 * @brief  Implements Glue GetUserDefinedFunction requests.
 *
 * @see    GlueClient::getUserDefinedFunction
 */

/**
 * @brief  Constructs a new GetUserDefinedFunctionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUserDefinedFunctionRequest::GetUserDefinedFunctionRequest(const GetUserDefinedFunctionRequest &other)
    : GlueRequest(new GetUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUserDefinedFunctionRequest object.
 */
GetUserDefinedFunctionRequest::GetUserDefinedFunctionRequest()
    : GlueRequest(new GetUserDefinedFunctionRequestPrivate(GlueRequest::GetUserDefinedFunctionAction, this))
{

}

bool GetUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUserDefinedFunctionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUserDefinedFunctionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new GetUserDefinedFunctionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUserDefinedFunctionRequestPrivate
 *
 * @brief  Private implementation for GetUserDefinedFunctionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserDefinedFunctionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetUserDefinedFunctionRequest instance.
 */
GetUserDefinedFunctionRequestPrivate::GetUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, GetUserDefinedFunctionRequest * const q)
    : GetUserDefinedFunctionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUserDefinedFunctionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUserDefinedFunctionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUserDefinedFunctionRequest instance.
 */
GetUserDefinedFunctionRequestPrivate::GetUserDefinedFunctionRequestPrivate(
    const GetUserDefinedFunctionRequestPrivate &other, GetUserDefinedFunctionRequest * const q)
    : GetUserDefinedFunctionPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
