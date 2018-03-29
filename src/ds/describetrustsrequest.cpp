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

#include "describetrustsrequest.h"
#include "describetrustsrequest_p.h"
#include "describetrustsresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DescribeTrustsRequest
 *
 * @brief  Implements DirectoryService DescribeTrusts requests.
 *
 * @see    DirectoryServiceClient::describeTrusts
 */

/**
 * @brief  Constructs a new DescribeTrustsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTrustsRequest::DescribeTrustsRequest(const DescribeTrustsRequest &other)
    : DirectoryServiceRequest(new DescribeTrustsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTrustsRequest object.
 */
DescribeTrustsRequest::DescribeTrustsRequest()
    : DirectoryServiceRequest(new DescribeTrustsRequestPrivate(DirectoryServiceRequest::DescribeTrustsAction, this))
{

}

bool DescribeTrustsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTrustsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTrustsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTrustsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrustsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTrustsRequestPrivate
 *
 * @brief  Private implementation for DescribeTrustsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustsRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DescribeTrustsRequest instance.
 */
DescribeTrustsRequestPrivate::DescribeTrustsRequestPrivate(
    const DirectoryServiceRequest::Action action, DescribeTrustsRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrustsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTrustsRequest instance.
 */
DescribeTrustsRequestPrivate::DescribeTrustsRequestPrivate(
    const DescribeTrustsRequestPrivate &other, DescribeTrustsRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
