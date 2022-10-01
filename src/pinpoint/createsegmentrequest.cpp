// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsegmentrequest.h"
#include "createsegmentrequest_p.h"
#include "createsegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateSegmentRequest
 * \brief The CreateSegmentRequest class provides an interface for Pinpoint CreateSegment requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createSegment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSegmentRequest::CreateSegmentRequest(const CreateSegmentRequest &other)
    : PinpointRequest(new CreateSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSegmentRequest object.
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
 * Returns a CreateSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSegmentRequest::response(QNetworkReply * const reply) const
{
    return new CreateSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::CreateSegmentRequestPrivate
 * \brief The CreateSegmentRequestPrivate class provides private implementation for CreateSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateSegmentRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
CreateSegmentRequestPrivate::CreateSegmentRequestPrivate(
    const PinpointRequest::Action action, CreateSegmentRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSegmentRequest
 * class' copy constructor.
 */
CreateSegmentRequestPrivate::CreateSegmentRequestPrivate(
    const CreateSegmentRequestPrivate &other, CreateSegmentRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
