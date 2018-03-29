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

#include "listtrafficpolicyversionsrequest.h"
#include "listtrafficpolicyversionsrequest_p.h"
#include "listtrafficpolicyversionsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  ListTrafficPolicyVersionsRequest
 *
 * @brief  Implements Route53 ListTrafficPolicyVersions requests.
 *
 * @see    Route53Client::listTrafficPolicyVersions
 */

/**
 * @brief  Constructs a new ListTrafficPolicyVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTrafficPolicyVersionsRequest::ListTrafficPolicyVersionsRequest(const ListTrafficPolicyVersionsRequest &other)
    : Route53Request(new ListTrafficPolicyVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTrafficPolicyVersionsRequest object.
 */
ListTrafficPolicyVersionsRequest::ListTrafficPolicyVersionsRequest()
    : Route53Request(new ListTrafficPolicyVersionsRequestPrivate(Route53Request::ListTrafficPolicyVersionsAction, this))
{

}

bool ListTrafficPolicyVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTrafficPolicyVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTrafficPolicyVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPolicyVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTrafficPolicyVersionsRequestPrivate
 *
 * @brief  Private implementation for ListTrafficPolicyVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyVersionsRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListTrafficPolicyVersionsRequest instance.
 */
ListTrafficPolicyVersionsRequestPrivate::ListTrafficPolicyVersionsRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyVersionsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTrafficPolicyVersionsRequest instance.
 */
ListTrafficPolicyVersionsRequestPrivate::ListTrafficPolicyVersionsRequestPrivate(
    const ListTrafficPolicyVersionsRequestPrivate &other, ListTrafficPolicyVersionsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
