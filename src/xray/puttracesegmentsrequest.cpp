/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
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
