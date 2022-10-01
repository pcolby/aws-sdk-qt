// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
