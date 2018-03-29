/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteattributesrequest.h"
#include "deleteattributesrequest_p.h"
#include "deleteattributesresponse.h"
#include "simpledbrequest_p.h"

namespace AWS {
namespace SimpleDB {

/**
 * @class  DeleteAttributesRequest
 *
 * @brief  Implements SimpleDB DeleteAttributes requests.
 *
 * @see    SimpleDBClient::deleteAttributes
 */

/**
 * @brief  Constructs a new DeleteAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAttributesRequest::DeleteAttributesRequest(const DeleteAttributesRequest &other)
    : SimpleDBRequest(new DeleteAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAttributesRequest object.
 */
DeleteAttributesRequest::DeleteAttributesRequest()
    : SimpleDBRequest(new DeleteAttributesRequestPrivate(SimpleDBRequest::DeleteAttributesAction, this))
{

}

bool DeleteAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SimpleDBClient::send
 */
AwsAbstractResponse * DeleteAttributesRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAttributesRequestPrivate
 *
 * @brief  Private implementation for DeleteAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAttributesRequestPrivate object.
 *
 * @param  action  SimpleDB action being performed.
 * @param  q       Pointer to this object's public DeleteAttributesRequest instance.
 */
DeleteAttributesRequestPrivate::DeleteAttributesRequestPrivate(
    const SimpleDBRequest::Action action, DeleteAttributesRequest * const q)
    : DeleteAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAttributesRequest instance.
 */
DeleteAttributesRequestPrivate::DeleteAttributesRequestPrivate(
    const DeleteAttributesRequestPrivate &other, DeleteAttributesRequest * const q)
    : DeleteAttributesPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace AWS
