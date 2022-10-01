// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesegmentrequest.h"
#include "deletesegmentrequest_p.h"
#include "deletesegmentresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSegmentRequest
 * \brief The DeleteSegmentRequest class provides an interface for Pinpoint DeleteSegment requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteSegment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSegmentRequest::DeleteSegmentRequest(const DeleteSegmentRequest &other)
    : PinpointRequest(new DeleteSegmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSegmentRequest object.
 */
DeleteSegmentRequest::DeleteSegmentRequest()
    : PinpointRequest(new DeleteSegmentRequestPrivate(PinpointRequest::DeleteSegmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSegmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSegmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSegmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSegmentResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteSegmentRequestPrivate
 * \brief The DeleteSegmentRequestPrivate class provides private implementation for DeleteSegmentRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSegmentRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteSegmentRequestPrivate::DeleteSegmentRequestPrivate(
    const PinpointRequest::Action action, DeleteSegmentRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSegmentRequest
 * class' copy constructor.
 */
DeleteSegmentRequestPrivate::DeleteSegmentRequestPrivate(
    const DeleteSegmentRequestPrivate &other, DeleteSegmentRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
