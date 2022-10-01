/*
    Copyright 2013-2021 Paul Colby

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

#include "puttelemetryrecordsrequest.h"
#include "puttelemetryrecordsrequest_p.h"
#include "puttelemetryrecordsresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::PutTelemetryRecordsRequest
 * \brief The PutTelemetryRecordsRequest class provides an interface for XRay PutTelemetryRecords requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::putTelemetryRecords
 */

/*!
 * Constructs a copy of \a other.
 */
PutTelemetryRecordsRequest::PutTelemetryRecordsRequest(const PutTelemetryRecordsRequest &other)
    : XRayRequest(new PutTelemetryRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutTelemetryRecordsRequest object.
 */
PutTelemetryRecordsRequest::PutTelemetryRecordsRequest()
    : XRayRequest(new PutTelemetryRecordsRequestPrivate(XRayRequest::PutTelemetryRecordsAction, this))
{

}

/*!
 * \reimp
 */
bool PutTelemetryRecordsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutTelemetryRecordsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutTelemetryRecordsRequest::response(QNetworkReply * const reply) const
{
    return new PutTelemetryRecordsResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::PutTelemetryRecordsRequestPrivate
 * \brief The PutTelemetryRecordsRequestPrivate class provides private implementation for PutTelemetryRecordsRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a PutTelemetryRecordsRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
PutTelemetryRecordsRequestPrivate::PutTelemetryRecordsRequestPrivate(
    const XRayRequest::Action action, PutTelemetryRecordsRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutTelemetryRecordsRequest
 * class' copy constructor.
 */
PutTelemetryRecordsRequestPrivate::PutTelemetryRecordsRequestPrivate(
    const PutTelemetryRecordsRequestPrivate &other, PutTelemetryRecordsRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
