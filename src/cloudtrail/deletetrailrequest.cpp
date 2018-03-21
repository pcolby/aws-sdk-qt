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

#include "deletetrailrequest.h"
#include "deletetrailrequest_p.h"
#include "deletetrailresponse.h"
#include "cloudtrailrequest_p.h"

namespace AWS {
namespace CloudTrail {

/**
 * @class  DeleteTrailRequest
 *
 * @brief  Implements CloudTrail DeleteTrail requests.
 *
 * @see    CloudTrailClient::deleteTrail
 */

/**
 * @brief  Constructs a new DeleteTrailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTrailRequest::DeleteTrailRequest(const DeleteTrailRequest &other)
    : CloudTrailRequest(new DeleteTrailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTrailRequest object.
 */
DeleteTrailRequest::DeleteTrailRequest()
    : CloudTrailRequest(new DeleteTrailRequestPrivate(CloudTrailRequest::DeleteTrailAction, this))
{

}

bool DeleteTrailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTrailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTrailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
AwsAbstractResponse * DeleteTrailRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTrailRequestPrivate
 *
 * @brief  Private implementation for DeleteTrailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrailRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public DeleteTrailRequest instance.
 */
DeleteTrailRequestPrivate::DeleteTrailRequestPrivate(
    const CloudTrailRequest::Action action, DeleteTrailRequest * const q)
    : DeleteTrailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTrailRequest instance.
 */
DeleteTrailRequestPrivate::DeleteTrailRequestPrivate(
    const DeleteTrailRequestPrivate &other, DeleteTrailRequest * const q)
    : DeleteTrailPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace AWS
