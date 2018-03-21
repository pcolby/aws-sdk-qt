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

#include "createsegmentrequest.h"
#include "createsegmentrequest_p.h"
#include "createsegmentresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  CreateSegmentRequest
 *
 * @brief  Implements Pinpoint CreateSegment requests.
 *
 * @see    PinpointClient::createSegment
 */

/**
 * @brief  Constructs a new CreateSegmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSegmentResponse::CreateSegmentResponse(

/**
 * @brief  Constructs a new CreateSegmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSegmentRequest::CreateSegmentRequest(const CreateSegmentRequest &other)
    : PinpointRequest(new CreateSegmentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateSegmentRequest object.
 */
CreateSegmentRequest::CreateSegmentRequest()
    : PinpointRequest(new CreateSegmentRequestPrivate(PinpointRequest::CreateSegmentAction, this))
{

}

bool CreateSegmentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateSegmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSegmentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * CreateSegmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateSegmentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateSegmentRequestPrivate
 *
 * @brief  Private implementation for CreateSegmentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSegmentRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public CreateSegmentRequest instance.
 */
CreateSegmentRequestPrivate::CreateSegmentRequestPrivate(
    const PinpointRequest::Action action, CreateSegmentRequest * const q)
    : CreateSegmentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateSegmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSegmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSegmentRequest instance.
 */
CreateSegmentRequestPrivate::CreateSegmentRequestPrivate(
    const CreateSegmentRequestPrivate &other, CreateSegmentRequest * const q)
    : CreateSegmentPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
