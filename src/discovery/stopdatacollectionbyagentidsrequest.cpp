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

#include "stopdatacollectionbyagentidsrequest.h"
#include "stopdatacollectionbyagentidsrequest_p.h"
#include "stopdatacollectionbyagentidsresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  StopDataCollectionByAgentIdsRequest
 *
 * @brief  Implements ApplicationDiscoveryService StopDataCollectionByAgentIds requests.
 *
 * @see    ApplicationDiscoveryServiceClient::stopDataCollectionByAgentIds
 */

/**
 * @brief  Constructs a new StopDataCollectionByAgentIdsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopDataCollectionByAgentIdsRequest::StopDataCollectionByAgentIdsRequest(const StopDataCollectionByAgentIdsRequest &other)
    : ApplicationDiscoveryServiceRequest(new StopDataCollectionByAgentIdsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopDataCollectionByAgentIdsRequest object.
 */
StopDataCollectionByAgentIdsRequest::StopDataCollectionByAgentIdsRequest()
    : ApplicationDiscoveryServiceRequest(new StopDataCollectionByAgentIdsRequestPrivate(ApplicationDiscoveryServiceRequest::StopDataCollectionByAgentIdsAction, this))
{

}

bool StopDataCollectionByAgentIdsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopDataCollectionByAgentIdsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopDataCollectionByAgentIdsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
AwsAbstractResponse * StopDataCollectionByAgentIdsRequest::response(QNetworkReply * const reply) const
{
    return new StopDataCollectionByAgentIdsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopDataCollectionByAgentIdsRequestPrivate
 *
 * @brief  Private implementation for StopDataCollectionByAgentIdsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopDataCollectionByAgentIdsRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public StopDataCollectionByAgentIdsRequest instance.
 */
StopDataCollectionByAgentIdsRequestPrivate::StopDataCollectionByAgentIdsRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, StopDataCollectionByAgentIdsRequest * const q)
    : StopDataCollectionByAgentIdsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopDataCollectionByAgentIdsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopDataCollectionByAgentIdsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopDataCollectionByAgentIdsRequest instance.
 */
StopDataCollectionByAgentIdsRequestPrivate::StopDataCollectionByAgentIdsRequestPrivate(
    const StopDataCollectionByAgentIdsRequestPrivate &other, StopDataCollectionByAgentIdsRequest * const q)
    : StopDataCollectionByAgentIdsPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
