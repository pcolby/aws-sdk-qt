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

#include "updatesegmentrequest.h"
#include "updatesegmentrequest_p.h"
#include "updatesegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateSegmentRequest
 *
 * @brief  Implements Pinpoint UpdateSegment requests.
 *
 * @see    PinpointClient::updateSegment
 */

/**
 * @brief  Constructs a new UpdateSegmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateSegmentRequest::UpdateSegmentRequest(const UpdateSegmentRequest &other)
    : PinpointRequest(new UpdateSegmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateSegmentRequest object.
 */
UpdateSegmentRequest::UpdateSegmentRequest()
    : PinpointRequest(new UpdateSegmentRequestPrivate(PinpointRequest::UpdateSegmentAction, this))
{

}

bool UpdateSegmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateSegmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateSegmentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSegmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSegmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateSegmentRequestPrivate
 *
 * @brief  Private implementation for UpdateSegmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSegmentRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateSegmentRequest instance.
 */
UpdateSegmentRequestPrivate::UpdateSegmentRequestPrivate(
    const PinpointRequest::Action action, UpdateSegmentRequest * const q)
    : UpdateSegmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSegmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateSegmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateSegmentRequest instance.
 */
UpdateSegmentRequestPrivate::UpdateSegmentRequestPrivate(
    const UpdateSegmentRequestPrivate &other, UpdateSegmentRequest * const q)
    : UpdateSegmentPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
