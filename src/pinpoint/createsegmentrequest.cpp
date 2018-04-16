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

#include "createsegmentrequest.h"
#include "createsegmentrequest_p.h"
#include "createsegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateSegmentRequest
 *
 * \brief The CreateSegmentRequest class provides an interface for Pinpoint CreateSegment requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::createSegment
 */

/*!
 * @brief  Constructs a new CreateSegmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSegmentRequest::CreateSegmentRequest(const CreateSegmentRequest &other)
    : PinpointRequest(new CreateSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateSegmentRequest object.
 */
CreateSegmentRequest::CreateSegmentRequest()
    : PinpointRequest(new CreateSegmentRequestPrivate(PinpointRequest::CreateSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSegmentRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateSegmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSegmentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSegmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateSegmentResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateSegmentRequestPrivate
 *
 * @brief  Private implementation for CreateSegmentRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSegmentRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public CreateSegmentRequest instance.
 */
CreateSegmentRequestPrivate::CreateSegmentRequestPrivate(
    const PinpointRequest::Action action, CreateSegmentRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
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
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
