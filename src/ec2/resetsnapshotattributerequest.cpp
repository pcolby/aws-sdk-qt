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

#include "resetsnapshotattributerequest.h"
#include "resetsnapshotattributerequest_p.h"
#include "resetsnapshotattributeresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  ResetSnapshotAttributeRequest
 *
 * @brief  Implements EC2 ResetSnapshotAttribute requests.
 *
 * @see    EC2Client::resetSnapshotAttribute
 */

/**
 * @brief  Constructs a new ResetSnapshotAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetSnapshotAttributeResponse::ResetSnapshotAttributeResponse(

/**
 * @brief  Constructs a new ResetSnapshotAttributeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResetSnapshotAttributeRequest::ResetSnapshotAttributeRequest(const ResetSnapshotAttributeRequest &other)
    : EC2Request(new ResetSnapshotAttributeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResetSnapshotAttributeRequest object.
 */
ResetSnapshotAttributeRequest::ResetSnapshotAttributeRequest()
    : EC2Request(new ResetSnapshotAttributeRequestPrivate(EC2Request::ResetSnapshotAttributeAction, this))
{

}

bool ResetSnapshotAttributeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResetSnapshotAttributeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResetSnapshotAttributeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * ResetSnapshotAttributeRequest::response(QNetworkReply * const reply) const
{
    return new ResetSnapshotAttributeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResetSnapshotAttributeRequestPrivate
 *
 * @brief  Private implementation for ResetSnapshotAttributeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetSnapshotAttributeRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public ResetSnapshotAttributeRequest instance.
 */
ResetSnapshotAttributeRequestPrivate::ResetSnapshotAttributeRequestPrivate(
    const EC2Request::Action action, ResetSnapshotAttributeRequest * const q)
    : ResetSnapshotAttributePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResetSnapshotAttributeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResetSnapshotAttributeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResetSnapshotAttributeRequest instance.
 */
ResetSnapshotAttributeRequestPrivate::ResetSnapshotAttributeRequestPrivate(
    const ResetSnapshotAttributeRequestPrivate &other, ResetSnapshotAttributeRequest * const q)
    : ResetSnapshotAttributePrivate(other, q)
{

}
