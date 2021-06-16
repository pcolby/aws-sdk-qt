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

#include "deleteeventtyperequest.h"
#include "deleteeventtyperequest_p.h"
#include "deleteeventtyperesponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteEventTypeRequest
 * \brief The DeleteEventTypeRequest class provides an interface for FraudDetector DeleteEventType requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteEventType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventTypeRequest::DeleteEventTypeRequest(const DeleteEventTypeRequest &other)
    : FraudDetectorRequest(new DeleteEventTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventTypeRequest object.
 */
DeleteEventTypeRequest::DeleteEventTypeRequest()
    : FraudDetectorRequest(new DeleteEventTypeRequestPrivate(FraudDetectorRequest::DeleteEventTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventTypeResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteEventTypeRequestPrivate
 * \brief The DeleteEventTypeRequestPrivate class provides private implementation for DeleteEventTypeRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteEventTypeRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteEventTypeRequestPrivate::DeleteEventTypeRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteEventTypeRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventTypeRequest
 * class' copy constructor.
 */
DeleteEventTypeRequestPrivate::DeleteEventTypeRequestPrivate(
    const DeleteEventTypeRequestPrivate &other, DeleteEventTypeRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
