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

#include "listtrafficpolicyinstancesbyhostedzonerequest.h"
#include "listtrafficpolicyinstancesbyhostedzonerequest_p.h"
#include "listtrafficpolicyinstancesbyhostedzoneresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  ListTrafficPolicyInstancesByHostedZoneRequest
 *
 * @brief  Implements Route53 ListTrafficPolicyInstancesByHostedZone requests.
 *
 * @see    Route53Client::listTrafficPolicyInstancesByHostedZone
 */

/**
 * @brief  Constructs a new ListTrafficPolicyInstancesByHostedZoneRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTrafficPolicyInstancesByHostedZoneRequest::ListTrafficPolicyInstancesByHostedZoneRequest(const ListTrafficPolicyInstancesByHostedZoneRequest &other)
    : Route53Request(new ListTrafficPolicyInstancesByHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListTrafficPolicyInstancesByHostedZoneRequest object.
 */
ListTrafficPolicyInstancesByHostedZoneRequest::ListTrafficPolicyInstancesByHostedZoneRequest()
    : Route53Request(new ListTrafficPolicyInstancesByHostedZoneRequestPrivate(Route53Request::ListTrafficPolicyInstancesByHostedZoneAction, this))
{

}

bool ListTrafficPolicyInstancesByHostedZoneRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListTrafficPolicyInstancesByHostedZoneResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTrafficPolicyInstancesByHostedZoneResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * ListTrafficPolicyInstancesByHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new ListTrafficPolicyInstancesByHostedZoneResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListTrafficPolicyInstancesByHostedZoneRequestPrivate
 *
 * @brief  Private implementation for ListTrafficPolicyInstancesByHostedZoneRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesByHostedZoneRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListTrafficPolicyInstancesByHostedZoneRequest instance.
 */
ListTrafficPolicyInstancesByHostedZoneRequestPrivate::ListTrafficPolicyInstancesByHostedZoneRequestPrivate(
    const Route53Request::Action action, ListTrafficPolicyInstancesByHostedZoneRequest * const q)
    : ListTrafficPolicyInstancesByHostedZonePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListTrafficPolicyInstancesByHostedZoneRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTrafficPolicyInstancesByHostedZoneRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTrafficPolicyInstancesByHostedZoneRequest instance.
 */
ListTrafficPolicyInstancesByHostedZoneRequestPrivate::ListTrafficPolicyInstancesByHostedZoneRequestPrivate(
    const ListTrafficPolicyInstancesByHostedZoneRequestPrivate &other, ListTrafficPolicyInstancesByHostedZoneRequest * const q)
    : ListTrafficPolicyInstancesByHostedZonePrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
