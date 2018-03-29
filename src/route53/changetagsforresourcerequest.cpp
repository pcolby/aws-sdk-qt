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

#include "changetagsforresourcerequest.h"
#include "changetagsforresourcerequest_p.h"
#include "changetagsforresourceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  ChangeTagsForResourceRequest
 *
 * @brief  Implements Route53 ChangeTagsForResource requests.
 *
 * @see    Route53Client::changeTagsForResource
 */

/**
 * @brief  Constructs a new ChangeTagsForResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ChangeTagsForResourceRequest::ChangeTagsForResourceRequest(const ChangeTagsForResourceRequest &other)
    : Route53Request(new ChangeTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ChangeTagsForResourceRequest object.
 */
ChangeTagsForResourceRequest::ChangeTagsForResourceRequest()
    : Route53Request(new ChangeTagsForResourceRequestPrivate(Route53Request::ChangeTagsForResourceAction, this))
{

}

bool ChangeTagsForResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ChangeTagsForResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ChangeTagsForResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ChangeTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new ChangeTagsForResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ChangeTagsForResourceRequestPrivate
 *
 * @brief  Private implementation for ChangeTagsForResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ChangeTagsForResourceRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ChangeTagsForResourceRequest instance.
 */
ChangeTagsForResourceRequestPrivate::ChangeTagsForResourceRequestPrivate(
    const Route53Request::Action action, ChangeTagsForResourceRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ChangeTagsForResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ChangeTagsForResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ChangeTagsForResourceRequest instance.
 */
ChangeTagsForResourceRequestPrivate::ChangeTagsForResourceRequestPrivate(
    const ChangeTagsForResourceRequestPrivate &other, ChangeTagsForResourceRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
