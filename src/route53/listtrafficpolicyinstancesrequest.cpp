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

#include "listtrafficpolicyinstancesrequest.h"
#include "listtrafficpolicyinstancesrequest_p.h"
#include "listtrafficpolicyinstancesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  ListTrafficPolicyInstancesRequest
 *
 * @brief  Implements Route53 ListTrafficPolicyInstances requests.
 *
 * @see    Route53Client::listTrafficPolicyInstances
 */

/**
 * @brief  Constructs a new ListTrafficPolicyInstancesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTrafficPolicyInstancesRequest::ListTrafficPolicyInstancesRequest(const ListTrafficPolicyInstancesRequest &other)
    : Route53Request(new ListTrafficPolicyInstancesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTrafficPolicyInstancesRequest object.
 */
ListTrafficPolicyInstancesRequest::ListTrafficPolicyInstancesRequest()
    : Route53Request(new ListTrafficPolicyInstancesRequestPrivate(Route53Request::ListTrafficPolicyInstancesAction, this))
{

}

bool ListTrafficPolicyInstancesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTrafficPolicyInstancesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTrafficPolicyInstancesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListTrafficPolicyInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyInstancesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTrafficPolicyInstancesRequestPrivate
 *
 * @brief  Private implementation for ListTrafficPolicyInstancesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListTrafficPolicyInstancesRequest instance.
 */
ListTrafficPolicyInstancesRequestPrivate::ListTrafficPolicyInstancesRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyInstancesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyInstancesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTrafficPolicyInstancesRequest instance.
 */
ListTrafficPolicyInstancesRequestPrivate::ListTrafficPolicyInstancesRequestPrivate(
    const ListTrafficPolicyInstancesRequestPrivate &other, ListTrafficPolicyInstancesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
