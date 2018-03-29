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

#include "deleteapplicationsrequest.h"
#include "deleteapplicationsrequest_p.h"
#include "deleteapplicationsresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  DeleteApplicationsRequest
 *
 * @brief  Implements ApplicationDiscoveryService DeleteApplications requests.
 *
 * @see    ApplicationDiscoveryServiceClient::deleteApplications
 */

/**
 * @brief  Constructs a new DeleteApplicationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApplicationsRequest::DeleteApplicationsRequest(const DeleteApplicationsRequest &other)
    : ApplicationDiscoveryServiceRequest(new DeleteApplicationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteApplicationsRequest object.
 */
DeleteApplicationsRequest::DeleteApplicationsRequest()
    : ApplicationDiscoveryServiceRequest(new DeleteApplicationsRequestPrivate(ApplicationDiscoveryServiceRequest::DeleteApplicationsAction, this))
{

}

bool DeleteApplicationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteApplicationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApplicationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
AwsAbstractResponse * DeleteApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteApplicationsRequestPrivate
 *
 * @brief  Private implementation for DeleteApplicationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationsRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public DeleteApplicationsRequest instance.
 */
DeleteApplicationsRequestPrivate::DeleteApplicationsRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, DeleteApplicationsRequest * const q)
    : DeleteApplicationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApplicationsRequest instance.
 */
DeleteApplicationsRequestPrivate::DeleteApplicationsRequestPrivate(
    const DeleteApplicationsRequestPrivate &other, DeleteApplicationsRequest * const q)
    : DeleteApplicationsPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace AWS
