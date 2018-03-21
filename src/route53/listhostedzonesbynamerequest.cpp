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

#include "listhostedzonesbynamerequest.h"
#include "listhostedzonesbynamerequest_p.h"
#include "listhostedzonesbynameresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  ListHostedZonesByNameRequest
 *
 * @brief  Implements Route53 ListHostedZonesByName requests.
 *
 * @see    Route53Client::listHostedZonesByName
 */

/**
 * @brief  Constructs a new ListHostedZonesByNameResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHostedZonesByNameResponse::ListHostedZonesByNameResponse(

/**
 * @brief  Constructs a new ListHostedZonesByNameRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHostedZonesByNameRequest::ListHostedZonesByNameRequest(const ListHostedZonesByNameRequest &other)
    : Route53Request(new ListHostedZonesByNameRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListHostedZonesByNameRequest object.
 */
ListHostedZonesByNameRequest::ListHostedZonesByNameRequest()
    : Route53Request(new ListHostedZonesByNameRequestPrivate(Route53Request::ListHostedZonesByNameAction, this))
{

}

bool ListHostedZonesByNameRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListHostedZonesByNameResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHostedZonesByNameResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * ListHostedZonesByNameRequest::response(QNetworkReply * const reply) const
{
    return new ListHostedZonesByNameResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListHostedZonesByNameRequestPrivate
 *
 * @brief  Private implementation for ListHostedZonesByNameRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHostedZonesByNameRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListHostedZonesByNameRequest instance.
 */
ListHostedZonesByNameRequestPrivate::ListHostedZonesByNameRequestPrivate(
    const Route53Request::Action action, ListHostedZonesByNameRequest * const q)
    : ListHostedZonesByNamePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListHostedZonesByNameRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHostedZonesByNameRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHostedZonesByNameRequest instance.
 */
ListHostedZonesByNameRequestPrivate::ListHostedZonesByNameRequestPrivate(
    const ListHostedZonesByNameRequestPrivate &other, ListHostedZonesByNameRequest * const q)
    : ListHostedZonesByNamePrivate(other, q)
{

}

} // namespace Route53
} // namespace AWS
