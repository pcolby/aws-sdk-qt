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

#include "getuserdefinedfunctionsrequest.h"
#include "getuserdefinedfunctionsrequest_p.h"
#include "getuserdefinedfunctionsresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  GetUserDefinedFunctionsRequest
 *
 * @brief  Implements Glue GetUserDefinedFunctions requests.
 *
 * @see    GlueClient::getUserDefinedFunctions
 */

/**
 * @brief  Constructs a new GetUserDefinedFunctionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUserDefinedFunctionsRequest::GetUserDefinedFunctionsRequest(const GetUserDefinedFunctionsRequest &other)
    : GlueRequest(new GetUserDefinedFunctionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUserDefinedFunctionsRequest object.
 */
GetUserDefinedFunctionsRequest::GetUserDefinedFunctionsRequest()
    : GlueRequest(new GetUserDefinedFunctionsRequestPrivate(GlueRequest::GetUserDefinedFunctionsAction, this))
{

}

bool GetUserDefinedFunctionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUserDefinedFunctionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUserDefinedFunctionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * GetUserDefinedFunctionsRequest::response(QNetworkReply * const reply) const
{
    return new GetUserDefinedFunctionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUserDefinedFunctionsRequestPrivate
 *
 * @brief  Private implementation for GetUserDefinedFunctionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUserDefinedFunctionsRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetUserDefinedFunctionsRequest instance.
 */
GetUserDefinedFunctionsRequestPrivate::GetUserDefinedFunctionsRequestPrivate(
    const GlueRequest::Action action, GetUserDefinedFunctionsRequest * const q)
    : GetUserDefinedFunctionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUserDefinedFunctionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUserDefinedFunctionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUserDefinedFunctionsRequest instance.
 */
GetUserDefinedFunctionsRequestPrivate::GetUserDefinedFunctionsRequestPrivate(
    const GetUserDefinedFunctionsRequestPrivate &other, GetUserDefinedFunctionsRequest * const q)
    : GetUserDefinedFunctionsPrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
