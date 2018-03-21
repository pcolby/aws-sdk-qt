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

#include "getattributesrequest.h"
#include "getattributesrequest_p.h"
#include "getattributesresponse.h"
#include "simpledbrequest_p.h"

namespace AWS {
namespace SimpleDB {

/**
 * @class  GetAttributesRequest
 *
 * @brief  Implements SimpleDB GetAttributes requests.
 *
 * @see    SimpleDBClient::getAttributes
 */

/**
 * @brief  Constructs a new GetAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAttributesResponse::GetAttributesResponse(

/**
 * @brief  Constructs a new GetAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAttributesRequest::GetAttributesRequest(const GetAttributesRequest &other)
    : SimpleDBRequest(new GetAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAttributesRequest object.
 */
GetAttributesRequest::GetAttributesRequest()
    : SimpleDBRequest(new GetAttributesRequestPrivate(SimpleDBRequest::GetAttributesAction, this))
{

}

bool GetAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SimpleDBClient::send
 */
AwsAbstractResponse * GetAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAttributesRequestPrivate
 *
 * @brief  Private implementation for GetAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAttributesRequestPrivate object.
 *
 * @param  action  SimpleDB action being performed.
 * @param  q       Pointer to this object's public GetAttributesRequest instance.
 */
GetAttributesRequestPrivate::GetAttributesRequestPrivate(
    const SimpleDBRequest::Action action, GetAttributesRequest * const q)
    : GetAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAttributesRequest instance.
 */
GetAttributesRequestPrivate::GetAttributesRequestPrivate(
    const GetAttributesRequestPrivate &other, GetAttributesRequest * const q)
    : GetAttributesPrivate(other, q)
{

}
