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

#include "deleteeventrequest.h"
#include "deleteeventrequest_p.h"
#include "deleteeventresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteEventRequest
 * \brief The DeleteEventRequest class provides an interface for FraudDetector DeleteEvent requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteEvent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventRequest::DeleteEventRequest(const DeleteEventRequest &other)
    : FraudDetectorRequest(new DeleteEventRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventRequest object.
 */
DeleteEventRequest::DeleteEventRequest()
    : FraudDetectorRequest(new DeleteEventRequestPrivate(FraudDetectorRequest::DeleteEventAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteEventRequestPrivate
 * \brief The DeleteEventRequestPrivate class provides private implementation for DeleteEventRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteEventRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteEventRequestPrivate::DeleteEventRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteEventRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventRequest
 * class' copy constructor.
 */
DeleteEventRequestPrivate::DeleteEventRequestPrivate(
    const DeleteEventRequestPrivate &other, DeleteEventRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
