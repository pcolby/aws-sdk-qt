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

#include "puteventtyperequest.h"
#include "puteventtyperequest_p.h"
#include "puteventtyperesponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutEventTypeRequest
 * \brief The PutEventTypeRequest class provides an interface for FraudDetector PutEventType requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putEventType
 */

/*!
 * Constructs a copy of \a other.
 */
PutEventTypeRequest::PutEventTypeRequest(const PutEventTypeRequest &other)
    : FraudDetectorRequest(new PutEventTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEventTypeRequest object.
 */
PutEventTypeRequest::PutEventTypeRequest()
    : FraudDetectorRequest(new PutEventTypeRequestPrivate(FraudDetectorRequest::PutEventTypeAction, this))
{

}

/*!
 * \reimp
 */
bool PutEventTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEventTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEventTypeRequest::response(QNetworkReply * const reply) const
{
    return new PutEventTypeResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::PutEventTypeRequestPrivate
 * \brief The PutEventTypeRequestPrivate class provides private implementation for PutEventTypeRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutEventTypeRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
PutEventTypeRequestPrivate::PutEventTypeRequestPrivate(
    const FraudDetectorRequest::Action action, PutEventTypeRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEventTypeRequest
 * class' copy constructor.
 */
PutEventTypeRequestPrivate::PutEventTypeRequestPrivate(
    const PutEventTypeRequestPrivate &other, PutEventTypeRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
