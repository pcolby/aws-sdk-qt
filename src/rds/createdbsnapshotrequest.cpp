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

#include "createdbsnapshotrequest.h"
#include "createdbsnapshotrequest_p.h"
#include "createdbsnapshotresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  CreateDBSnapshotRequest
 *
 * @brief  Implements RDS CreateDBSnapshot requests.
 *
 * @see    RDSClient::createDBSnapshot
 */

/**
 * @brief  Constructs a new CreateDBSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDBSnapshotRequest::CreateDBSnapshotRequest(const CreateDBSnapshotRequest &other)
    : RDSRequest(new CreateDBSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDBSnapshotRequest object.
 */
CreateDBSnapshotRequest::CreateDBSnapshotRequest()
    : RDSRequest(new CreateDBSnapshotRequestPrivate(RDSRequest::CreateDBSnapshotAction, this))
{

}

bool CreateDBSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDBSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDBSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDBSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new CreateDBSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDBSnapshotRequestPrivate
 *
 * @brief  Private implementation for CreateDBSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBSnapshotRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public CreateDBSnapshotRequest instance.
 */
CreateDBSnapshotRequestPrivate::CreateDBSnapshotRequestPrivate(
    const RDSRequest::Action action, CreateDBSnapshotRequest * const q)
    : CreateDBSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDBSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDBSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDBSnapshotRequest instance.
 */
CreateDBSnapshotRequestPrivate::CreateDBSnapshotRequestPrivate(
    const CreateDBSnapshotRequestPrivate &other, CreateDBSnapshotRequest * const q)
    : CreateDBSnapshotPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
