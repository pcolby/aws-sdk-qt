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

#include "getdiscoverysummaryrequest.h"
#include "getdiscoverysummaryrequest_p.h"
#include "getdiscoverysummaryresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  GetDiscoverySummaryRequest
 *
 * @brief  Implements ApplicationDiscoveryService GetDiscoverySummary requests.
 *
 * @see    ApplicationDiscoveryServiceClient::getDiscoverySummary
 */

/**
 * @brief  Constructs a new GetDiscoverySummaryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDiscoverySummaryRequest::GetDiscoverySummaryRequest(const GetDiscoverySummaryRequest &other)
    : ApplicationDiscoveryServiceRequest(new GetDiscoverySummaryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDiscoverySummaryRequest object.
 */
GetDiscoverySummaryRequest::GetDiscoverySummaryRequest()
    : ApplicationDiscoveryServiceRequest(new GetDiscoverySummaryRequestPrivate(ApplicationDiscoveryServiceRequest::GetDiscoverySummaryAction, this))
{

}

bool GetDiscoverySummaryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDiscoverySummaryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDiscoverySummaryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
AwsAbstractResponse * GetDiscoverySummaryRequest::response(QNetworkReply * const reply) const
{
    return new GetDiscoverySummaryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDiscoverySummaryRequestPrivate
 *
 * @brief  Private implementation for GetDiscoverySummaryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDiscoverySummaryRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public GetDiscoverySummaryRequest instance.
 */
GetDiscoverySummaryRequestPrivate::GetDiscoverySummaryRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, GetDiscoverySummaryRequest * const q)
    : GetDiscoverySummaryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDiscoverySummaryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDiscoverySummaryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDiscoverySummaryRequest instance.
 */
GetDiscoverySummaryRequestPrivate::GetDiscoverySummaryRequestPrivate(
    const GetDiscoverySummaryRequestPrivate &other, GetDiscoverySummaryRequest * const q)
    : GetDiscoverySummaryPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
