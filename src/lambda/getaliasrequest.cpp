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

#include "getaliasrequest.h"
#include "getaliasrequest_p.h"
#include "getaliasresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  GetAliasRequest
 *
 * @brief  Implements Lambda GetAlias requests.
 *
 * @see    LambdaClient::getAlias
 */

/**
 * @brief  Constructs a new GetAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAliasResponse::GetAliasResponse(

/**
 * @brief  Constructs a new GetAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAliasRequest::GetAliasRequest(const GetAliasRequest &other)
    : LambdaRequest(new GetAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAliasRequest object.
 */
GetAliasRequest::GetAliasRequest()
    : LambdaRequest(new GetAliasRequestPrivate(LambdaRequest::GetAliasAction, this))
{

}

bool GetAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAliasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * GetAliasRequest::response(QNetworkReply * const reply) const
{
    return new GetAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAliasRequestPrivate
 *
 * @brief  Private implementation for GetAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAliasRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public GetAliasRequest instance.
 */
GetAliasRequestPrivate::GetAliasRequestPrivate(
    const LambdaRequest::Action action, GetAliasRequest * const q)
    : GetAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAliasRequest instance.
 */
GetAliasRequestPrivate::GetAliasRequestPrivate(
    const GetAliasRequestPrivate &other, GetAliasRequest * const q)
    : GetAliasPrivate(other, q)
{

}
