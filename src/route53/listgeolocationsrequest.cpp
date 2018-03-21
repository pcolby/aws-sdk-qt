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

#include "listgeolocationsrequest.h"
#include "listgeolocationsrequest_p.h"
#include "listgeolocationsresponse.h"
#include "route53request_p.h"

namespace AWS {
namespace Route53 {

/**
 * @class  ListGeoLocationsRequest
 *
 * @brief  Implements Route53 ListGeoLocations requests.
 *
 * @see    Route53Client::listGeoLocations
 */

/**
 * @brief  Constructs a new ListGeoLocationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGeoLocationsResponse::ListGeoLocationsResponse(

/**
 * @brief  Constructs a new ListGeoLocationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGeoLocationsRequest::ListGeoLocationsRequest(const ListGeoLocationsRequest &other)
    : Route53Request(new ListGeoLocationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGeoLocationsRequest object.
 */
ListGeoLocationsRequest::ListGeoLocationsRequest()
    : Route53Request(new ListGeoLocationsRequestPrivate(Route53Request::ListGeoLocationsAction, this))
{

}

bool ListGeoLocationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGeoLocationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGeoLocationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * ListGeoLocationsRequest::response(QNetworkReply * const reply) const
{
    return new ListGeoLocationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGeoLocationsRequestPrivate
 *
 * @brief  Private implementation for ListGeoLocationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGeoLocationsRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListGeoLocationsRequest instance.
 */
ListGeoLocationsRequestPrivate::ListGeoLocationsRequestPrivate(
    const Route53Request::Action action, ListGeoLocationsRequest * const q)
    : ListGeoLocationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGeoLocationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGeoLocationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGeoLocationsRequest instance.
 */
ListGeoLocationsRequestPrivate::ListGeoLocationsRequestPrivate(
    const ListGeoLocationsRequestPrivate &other, ListGeoLocationsRequest * const q)
    : ListGeoLocationsPrivate(other, q)
{

}
