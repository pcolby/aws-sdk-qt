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

#include "putpermissionrequest.h"
#include "putpermissionrequest_p.h"
#include "putpermissionresponse.h"
#include "cloudwatcheventsrequest_p.h"

namespace AWS {
namespace CloudWatchEvents {

/**
 * @class  PutPermissionRequest
 *
 * @brief  Implements CloudWatchEvents PutPermission requests.
 *
 * @see    CloudWatchEventsClient::putPermission
 */

/**
 * @brief  Constructs a new PutPermissionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutPermissionResponse::PutPermissionResponse(

/**
 * @brief  Constructs a new PutPermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutPermissionRequest::PutPermissionRequest(const PutPermissionRequest &other)
    : CloudWatchEventsRequest(new PutPermissionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutPermissionRequest object.
 */
PutPermissionRequest::PutPermissionRequest()
    : CloudWatchEventsRequest(new PutPermissionRequestPrivate(CloudWatchEventsRequest::PutPermissionAction, this))
{

}

bool PutPermissionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutPermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutPermissionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudWatchEventsClient::send
 */
AwsAbstractResponse * PutPermissionRequest::response(QNetworkReply * const reply) const
{
    return new PutPermissionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutPermissionRequestPrivate
 *
 * @brief  Private implementation for PutPermissionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutPermissionRequestPrivate object.
 *
 * @param  action  CloudWatchEvents action being performed.
 * @param  q       Pointer to this object's public PutPermissionRequest instance.
 */
PutPermissionRequestPrivate::PutPermissionRequestPrivate(
    const CloudWatchEventsRequest::Action action, PutPermissionRequest * const q)
    : PutPermissionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutPermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutPermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutPermissionRequest instance.
 */
PutPermissionRequestPrivate::PutPermissionRequestPrivate(
    const PutPermissionRequestPrivate &other, PutPermissionRequest * const q)
    : PutPermissionPrivate(other, q)
{

}
