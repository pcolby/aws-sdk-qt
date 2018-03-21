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

#include "startdatacollectionbyagentidsrequest.h"
#include "startdatacollectionbyagentidsrequest_p.h"
#include "startdatacollectionbyagentidsresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  StartDataCollectionByAgentIdsRequest
 *
 * @brief  Implements ApplicationDiscoveryService StartDataCollectionByAgentIds requests.
 *
 * @see    ApplicationDiscoveryServiceClient::startDataCollectionByAgentIds
 */

/**
 * @brief  Constructs a new StartDataCollectionByAgentIdsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartDataCollectionByAgentIdsRequest::StartDataCollectionByAgentIdsRequest(const StartDataCollectionByAgentIdsRequest &other)
    : ApplicationDiscoveryServiceRequest(new StartDataCollectionByAgentIdsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartDataCollectionByAgentIdsRequest object.
 */
StartDataCollectionByAgentIdsRequest::StartDataCollectionByAgentIdsRequest()
    : ApplicationDiscoveryServiceRequest(new StartDataCollectionByAgentIdsRequestPrivate(ApplicationDiscoveryServiceRequest::StartDataCollectionByAgentIdsAction, this))
{

}

bool StartDataCollectionByAgentIdsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartDataCollectionByAgentIdsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartDataCollectionByAgentIdsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
AwsAbstractResponse * StartDataCollectionByAgentIdsRequest::response(QNetworkReply * const reply) const
{
    return new StartDataCollectionByAgentIdsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartDataCollectionByAgentIdsRequestPrivate
 *
 * @brief  Private implementation for StartDataCollectionByAgentIdsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartDataCollectionByAgentIdsRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public StartDataCollectionByAgentIdsRequest instance.
 */
StartDataCollectionByAgentIdsRequestPrivate::StartDataCollectionByAgentIdsRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, StartDataCollectionByAgentIdsRequest * const q)
    : StartDataCollectionByAgentIdsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartDataCollectionByAgentIdsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartDataCollectionByAgentIdsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartDataCollectionByAgentIdsRequest instance.
 */
StartDataCollectionByAgentIdsRequestPrivate::StartDataCollectionByAgentIdsRequestPrivate(
    const StartDataCollectionByAgentIdsRequestPrivate &other, StartDataCollectionByAgentIdsRequest * const q)
    : StartDataCollectionByAgentIdsPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace AWS
