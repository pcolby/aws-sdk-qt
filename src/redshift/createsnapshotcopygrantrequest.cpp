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

#include "createsnapshotcopygrantrequest.h"
#include "createsnapshotcopygrantrequest_p.h"
#include "createsnapshotcopygrantresponse.h"
#include "redshiftrequest_p.h"

namespace AWS {
namespace Redshift {

/**
 * @class  CreateSnapshotCopyGrantRequest
 *
 * @brief  Implements Redshift CreateSnapshotCopyGrant requests.
 *
 * @see    RedshiftClient::createSnapshotCopyGrant
 */

/**
 * @brief  Constructs a new CreateSnapshotCopyGrantResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSnapshotCopyGrantResponse::CreateSnapshotCopyGrantResponse(

/**
 * @brief  Constructs a new CreateSnapshotCopyGrantRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSnapshotCopyGrantRequest::CreateSnapshotCopyGrantRequest(const CreateSnapshotCopyGrantRequest &other)
    : RedshiftRequest(new CreateSnapshotCopyGrantRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSnapshotCopyGrantRequest object.
 */
CreateSnapshotCopyGrantRequest::CreateSnapshotCopyGrantRequest()
    : RedshiftRequest(new CreateSnapshotCopyGrantRequestPrivate(RedshiftRequest::CreateSnapshotCopyGrantAction, this))
{

}

bool CreateSnapshotCopyGrantRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSnapshotCopyGrantResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSnapshotCopyGrantResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * CreateSnapshotCopyGrantRequest::response(QNetworkReply * const reply) const
{
    return new CreateSnapshotCopyGrantResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSnapshotCopyGrantRequestPrivate
 *
 * @brief  Private implementation for CreateSnapshotCopyGrantRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotCopyGrantRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public CreateSnapshotCopyGrantRequest instance.
 */
CreateSnapshotCopyGrantRequestPrivate::CreateSnapshotCopyGrantRequestPrivate(
    const RedshiftRequest::Action action, CreateSnapshotCopyGrantRequest * const q)
    : CreateSnapshotCopyGrantPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSnapshotCopyGrantRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSnapshotCopyGrantRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSnapshotCopyGrantRequest instance.
 */
CreateSnapshotCopyGrantRequestPrivate::CreateSnapshotCopyGrantRequestPrivate(
    const CreateSnapshotCopyGrantRequestPrivate &other, CreateSnapshotCopyGrantRequest * const q)
    : CreateSnapshotCopyGrantPrivate(other, q)
{

}
