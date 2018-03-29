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

#include "revokesnapshotaccessrequest.h"
#include "revokesnapshotaccessrequest_p.h"
#include "revokesnapshotaccessresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  RevokeSnapshotAccessRequest
 *
 * @brief  Implements Redshift RevokeSnapshotAccess requests.
 *
 * @see    RedshiftClient::revokeSnapshotAccess
 */

/**
 * @brief  Constructs a new RevokeSnapshotAccessRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RevokeSnapshotAccessRequest::RevokeSnapshotAccessRequest(const RevokeSnapshotAccessRequest &other)
    : RedshiftRequest(new RevokeSnapshotAccessRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RevokeSnapshotAccessRequest object.
 */
RevokeSnapshotAccessRequest::RevokeSnapshotAccessRequest()
    : RedshiftRequest(new RevokeSnapshotAccessRequestPrivate(RedshiftRequest::RevokeSnapshotAccessAction, this))
{

}

bool RevokeSnapshotAccessRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RevokeSnapshotAccessResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RevokeSnapshotAccessResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeSnapshotAccessRequest::response(QNetworkReply * const reply) const
{
    return new RevokeSnapshotAccessResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RevokeSnapshotAccessRequestPrivate
 *
 * @brief  Private implementation for RevokeSnapshotAccessRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeSnapshotAccessRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public RevokeSnapshotAccessRequest instance.
 */
RevokeSnapshotAccessRequestPrivate::RevokeSnapshotAccessRequestPrivate(
    const RedshiftRequest::Action action, RevokeSnapshotAccessRequest * const q)
    : RedshiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RevokeSnapshotAccessRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RevokeSnapshotAccessRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RevokeSnapshotAccessRequest instance.
 */
RevokeSnapshotAccessRequestPrivate::RevokeSnapshotAccessRequestPrivate(
    const RevokeSnapshotAccessRequestPrivate &other, RevokeSnapshotAccessRequest * const q)
    : RedshiftRequestPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
