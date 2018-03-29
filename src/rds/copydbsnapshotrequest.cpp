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

#include "copydbsnapshotrequest.h"
#include "copydbsnapshotrequest_p.h"
#include "copydbsnapshotresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  CopyDBSnapshotRequest
 *
 * @brief  Implements RDS CopyDBSnapshot requests.
 *
 * @see    RDSClient::copyDBSnapshot
 */

/**
 * @brief  Constructs a new CopyDBSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyDBSnapshotRequest::CopyDBSnapshotRequest(const CopyDBSnapshotRequest &other)
    : RDSRequest(new CopyDBSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyDBSnapshotRequest object.
 */
CopyDBSnapshotRequest::CopyDBSnapshotRequest()
    : RDSRequest(new CopyDBSnapshotRequestPrivate(RDSRequest::CopyDBSnapshotAction, this))
{

}

bool CopyDBSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyDBSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyDBSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyDBSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CopyDBSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyDBSnapshotRequestPrivate
 *
 * @brief  Private implementation for CopyDBSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CopyDBSnapshotRequest instance.
 */
CopyDBSnapshotRequestPrivate::CopyDBSnapshotRequestPrivate(
    const RDSRequest::Action action, CopyDBSnapshotRequest * const q)
    : CopyDBSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyDBSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyDBSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyDBSnapshotRequest instance.
 */
CopyDBSnapshotRequestPrivate::CopyDBSnapshotRequestPrivate(
    const CopyDBSnapshotRequestPrivate &other, CopyDBSnapshotRequest * const q)
    : CopyDBSnapshotPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
