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

#include "listconfigurationsrequest.h"
#include "listconfigurationsrequest_p.h"
#include "listconfigurationsresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  ListConfigurationsRequest
 *
 * @brief  Implements ApplicationDiscoveryService ListConfigurations requests.
 *
 * @see    ApplicationDiscoveryServiceClient::listConfigurations
 */

/**
 * @brief  Constructs a new ListConfigurationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListConfigurationsResponse::ListConfigurationsResponse(

/**
 * @brief  Constructs a new ListConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListConfigurationsRequest::ListConfigurationsRequest(const ListConfigurationsRequest &other)
    : ApplicationDiscoveryServiceRequest(new ListConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListConfigurationsRequest object.
 */
ListConfigurationsRequest::ListConfigurationsRequest()
    : ApplicationDiscoveryServiceRequest(new ListConfigurationsRequestPrivate(ApplicationDiscoveryServiceRequest::ListConfigurationsAction, this))
{

}

bool ListConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
AwsAbstractResponse * ListConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListConfigurationsRequestPrivate
 *
 * @brief  Private implementation for ListConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationsRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public ListConfigurationsRequest instance.
 */
ListConfigurationsRequestPrivate::ListConfigurationsRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, ListConfigurationsRequest * const q)
    : ListConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListConfigurationsRequest instance.
 */
ListConfigurationsRequestPrivate::ListConfigurationsRequestPrivate(
    const ListConfigurationsRequestPrivate &other, ListConfigurationsRequest * const q)
    : ListConfigurationsPrivate(other, q)
{

}
