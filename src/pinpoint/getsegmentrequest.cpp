// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentrequest.h"
#include "getsegmentrequest_p.h"
#include "getsegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentRequest
 * \brief The GetSegmentRequest class provides an interface for Pinpoint GetSegment requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegment
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentRequest::GetSegmentRequest(const GetSegmentRequest &other)
    : PinpointRequest(new GetSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentRequest object.
 */
GetSegmentRequest::GetSegmentRequest()
    : PinpointRequest(new GetSegmentRequestPrivate(PinpointRequest::GetSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentRequestPrivate
 * \brief The GetSegmentRequestPrivate class provides private implementation for GetSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentRequestPrivate::GetSegmentRequestPrivate(
    const PinpointRequest::Action action, GetSegmentRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentRequest
 * class' copy constructor.
 */
GetSegmentRequestPrivate::GetSegmentRequestPrivate(
    const GetSegmentRequestPrivate &other, GetSegmentRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
