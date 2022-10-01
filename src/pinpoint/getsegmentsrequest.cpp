// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentsrequest.h"
#include "getsegmentsrequest_p.h"
#include "getsegmentsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentsRequest
 * \brief The GetSegmentsRequest class provides an interface for Pinpoint GetSegments requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegments
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentsRequest::GetSegmentsRequest(const GetSegmentsRequest &other)
    : PinpointRequest(new GetSegmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentsRequest object.
 */
GetSegmentsRequest::GetSegmentsRequest()
    : PinpointRequest(new GetSegmentsRequestPrivate(PinpointRequest::GetSegmentsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentsRequestPrivate
 * \brief The GetSegmentsRequestPrivate class provides private implementation for GetSegmentsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentsRequestPrivate::GetSegmentsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentsRequest
 * class' copy constructor.
 */
GetSegmentsRequestPrivate::GetSegmentsRequestPrivate(
    const GetSegmentsRequestPrivate &other, GetSegmentsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
