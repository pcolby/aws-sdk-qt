// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "puttracesegmentsrequest.h"
#include "puttracesegmentsrequest_p.h"
#include "puttracesegmentsresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::PutTraceSegmentsRequest
 * \brief The PutTraceSegmentsRequest class provides an interface for XRay PutTraceSegments requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::putTraceSegments
 */

/*!
 * Constructs a copy of \a other.
 */
PutTraceSegmentsRequest::PutTraceSegmentsRequest(const PutTraceSegmentsRequest &other)
    : XRayRequest(new PutTraceSegmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutTraceSegmentsRequest object.
 */
PutTraceSegmentsRequest::PutTraceSegmentsRequest()
    : XRayRequest(new PutTraceSegmentsRequestPrivate(XRayRequest::PutTraceSegmentsAction, this))
{

}

/*!
 * \reimp
 */
bool PutTraceSegmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutTraceSegmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutTraceSegmentsRequest::response(QNetworkReply * const reply) const
{
    return new PutTraceSegmentsResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::PutTraceSegmentsRequestPrivate
 * \brief The PutTraceSegmentsRequestPrivate class provides private implementation for PutTraceSegmentsRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a PutTraceSegmentsRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
PutTraceSegmentsRequestPrivate::PutTraceSegmentsRequestPrivate(
    const XRayRequest::Action action, PutTraceSegmentsRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutTraceSegmentsRequest
 * class' copy constructor.
 */
PutTraceSegmentsRequestPrivate::PutTraceSegmentsRequestPrivate(
    const PutTraceSegmentsRequestPrivate &other, PutTraceSegmentsRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
