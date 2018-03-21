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

#include "listinvalidationsrequest.h"
#include "listinvalidationsrequest_p.h"
#include "listinvalidationsresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  ListInvalidationsRequest
 *
 * @brief  Implements CloudFront ListInvalidations requests.
 *
 * @see    CloudFrontClient::listInvalidations
 */

/**
 * @brief  Constructs a new ListInvalidationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInvalidationsRequest::ListInvalidationsRequest(const ListInvalidationsRequest &other)
    : CloudFrontRequest(new ListInvalidationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListInvalidationsRequest object.
 */
ListInvalidationsRequest::ListInvalidationsRequest()
    : CloudFrontRequest(new ListInvalidationsRequestPrivate(CloudFrontRequest::ListInvalidationsAction, this))
{

}

bool ListInvalidationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListInvalidationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInvalidationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * ListInvalidationsRequest::response(QNetworkReply * const reply) const
{
    return new ListInvalidationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListInvalidationsRequestPrivate
 *
 * @brief  Private implementation for ListInvalidationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInvalidationsRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public ListInvalidationsRequest instance.
 */
ListInvalidationsRequestPrivate::ListInvalidationsRequestPrivate(
    const CloudFrontRequest::Action action, ListInvalidationsRequest * const q)
    : ListInvalidationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListInvalidationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInvalidationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInvalidationsRequest instance.
 */
ListInvalidationsRequestPrivate::ListInvalidationsRequestPrivate(
    const ListInvalidationsRequestPrivate &other, ListInvalidationsRequest * const q)
    : ListInvalidationsPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace AWS
