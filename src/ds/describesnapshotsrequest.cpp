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

#include "describesnapshotsrequest.h"
#include "describesnapshotsrequest_p.h"
#include "describesnapshotsresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DescribeSnapshotsRequest
 *
 * @brief  Implements DirectoryService DescribeSnapshots requests.
 *
 * @see    DirectoryServiceClient::describeSnapshots
 */

/**
 * @brief  Constructs a new DescribeSnapshotsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSnapshotsRequest::DescribeSnapshotsRequest(const DescribeSnapshotsRequest &other)
    : DirectoryServiceRequest(new DescribeSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSnapshotsRequest object.
 */
DescribeSnapshotsRequest::DescribeSnapshotsRequest()
    : DirectoryServiceRequest(new DescribeSnapshotsRequestPrivate(DirectoryServiceRequest::DescribeSnapshotsAction, this))
{

}

bool DescribeSnapshotsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSnapshotsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSnapshotsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * DescribeSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSnapshotsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSnapshotsRequestPrivate
 *
 * @brief  Private implementation for DescribeSnapshotsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotsRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public DescribeSnapshotsRequest instance.
 */
DescribeSnapshotsRequestPrivate::DescribeSnapshotsRequestPrivate(
    const DirectoryServiceRequest::Action action, DescribeSnapshotsRequest * const q)
    : DescribeSnapshotsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSnapshotsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSnapshotsRequest instance.
 */
DescribeSnapshotsRequestPrivate::DescribeSnapshotsRequestPrivate(
    const DescribeSnapshotsRequestPrivate &other, DescribeSnapshotsRequest * const q)
    : DescribeSnapshotsPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
