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

#include "describedomaincontrollersrequest.h"
#include "describedomaincontrollersrequest_p.h"
#include "describedomaincontrollersresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  DescribeDomainControllersRequest
 *
 * @brief  Implements DirectoryService DescribeDomainControllers requests.
 *
 * @see    DirectoryServiceClient::describeDomainControllers
 */

/**
 * @brief  Constructs a new DescribeDomainControllersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDomainControllersRequest::DescribeDomainControllersRequest(const DescribeDomainControllersRequest &other)
    : DirectoryServiceRequest(new DescribeDomainControllersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDomainControllersRequest object.
 */
DescribeDomainControllersRequest::DescribeDomainControllersRequest()
    : DirectoryServiceRequest(new DescribeDomainControllersRequestPrivate(DirectoryServiceRequest::DescribeDomainControllersAction, this))
{

}

bool DescribeDomainControllersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDomainControllersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDomainControllersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * DescribeDomainControllersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDomainControllersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDomainControllersRequestPrivate
 *
 * @brief  Private implementation for DescribeDomainControllersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDomainControllersRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DescribeDomainControllersRequest instance.
 */
DescribeDomainControllersRequestPrivate::DescribeDomainControllersRequestPrivate(
    const DirectoryServiceRequest::Action action, DescribeDomainControllersRequest * const q)
    : DescribeDomainControllersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDomainControllersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDomainControllersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDomainControllersRequest instance.
 */
DescribeDomainControllersRequestPrivate::DescribeDomainControllersRequestPrivate(
    const DescribeDomainControllersRequestPrivate &other, DescribeDomainControllersRequest * const q)
    : DescribeDomainControllersPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace AWS
