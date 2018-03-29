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

#include "deletesegmentrequest.h"
#include "deletesegmentrequest_p.h"
#include "deletesegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  DeleteSegmentRequest
 *
 * @brief  Implements Pinpoint DeleteSegment requests.
 *
 * @see    PinpointClient::deleteSegment
 */

/**
 * @brief  Constructs a new DeleteSegmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteSegmentRequest::DeleteSegmentRequest(const DeleteSegmentRequest &other)
    : PinpointRequest(new DeleteSegmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteSegmentRequest object.
 */
DeleteSegmentRequest::DeleteSegmentRequest()
    : PinpointRequest(new DeleteSegmentRequestPrivate(PinpointRequest::DeleteSegmentAction, this))
{

}

bool DeleteSegmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteSegmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteSegmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * DeleteSegmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSegmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteSegmentRequestPrivate
 *
 * @brief  Private implementation for DeleteSegmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSegmentRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteSegmentRequest instance.
 */
DeleteSegmentRequestPrivate::DeleteSegmentRequestPrivate(
    const PinpointRequest::Action action, DeleteSegmentRequest * const q)
    : DeleteSegmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSegmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteSegmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteSegmentRequest instance.
 */
DeleteSegmentRequestPrivate::DeleteSegmentRequestPrivate(
    const DeleteSegmentRequestPrivate &other, DeleteSegmentRequest * const q)
    : DeleteSegmentPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
