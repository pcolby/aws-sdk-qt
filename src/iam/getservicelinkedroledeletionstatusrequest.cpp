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

#include "getservicelinkedroledeletionstatusrequest.h"
#include "getservicelinkedroledeletionstatusrequest_p.h"
#include "getservicelinkedroledeletionstatusresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetServiceLinkedRoleDeletionStatusRequest
 *
 * @brief  Implements IAM GetServiceLinkedRoleDeletionStatus requests.
 *
 * @see    IAMClient::getServiceLinkedRoleDeletionStatus
 */

/**
 * @brief  Constructs a new GetServiceLinkedRoleDeletionStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetServiceLinkedRoleDeletionStatusRequest::GetServiceLinkedRoleDeletionStatusRequest(const GetServiceLinkedRoleDeletionStatusRequest &other)
    : IAMRequest(new GetServiceLinkedRoleDeletionStatusRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetServiceLinkedRoleDeletionStatusRequest object.
 */
GetServiceLinkedRoleDeletionStatusRequest::GetServiceLinkedRoleDeletionStatusRequest()
    : IAMRequest(new GetServiceLinkedRoleDeletionStatusRequestPrivate(IAMRequest::GetServiceLinkedRoleDeletionStatusAction, this))
{

}

bool GetServiceLinkedRoleDeletionStatusRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetServiceLinkedRoleDeletionStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetServiceLinkedRoleDeletionStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceLinkedRoleDeletionStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceLinkedRoleDeletionStatusResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetServiceLinkedRoleDeletionStatusRequestPrivate
 *
 * @brief  Private implementation for GetServiceLinkedRoleDeletionStatusRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceLinkedRoleDeletionStatusRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetServiceLinkedRoleDeletionStatusRequest instance.
 */
GetServiceLinkedRoleDeletionStatusRequestPrivate::GetServiceLinkedRoleDeletionStatusRequestPrivate(
    const IAMRequest::Action action, GetServiceLinkedRoleDeletionStatusRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetServiceLinkedRoleDeletionStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetServiceLinkedRoleDeletionStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetServiceLinkedRoleDeletionStatusRequest instance.
 */
GetServiceLinkedRoleDeletionStatusRequestPrivate::GetServiceLinkedRoleDeletionStatusRequestPrivate(
    const GetServiceLinkedRoleDeletionStatusRequestPrivate &other, GetServiceLinkedRoleDeletionStatusRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
