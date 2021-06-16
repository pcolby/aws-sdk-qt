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

#include "getdetectorsrequest.h"
#include "getdetectorsrequest_p.h"
#include "getdetectorsresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetDetectorsRequest
 * \brief The GetDetectorsRequest class provides an interface for FraudDetector GetDetectors requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getDetectors
 */

/*!
 * Constructs a copy of \a other.
 */
GetDetectorsRequest::GetDetectorsRequest(const GetDetectorsRequest &other)
    : FraudDetectorRequest(new GetDetectorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDetectorsRequest object.
 */
GetDetectorsRequest::GetDetectorsRequest()
    : FraudDetectorRequest(new GetDetectorsRequestPrivate(FraudDetectorRequest::GetDetectorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDetectorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDetectorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDetectorsRequest::response(QNetworkReply * const reply) const
{
    return new GetDetectorsResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetDetectorsRequestPrivate
 * \brief The GetDetectorsRequestPrivate class provides private implementation for GetDetectorsRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetDetectorsRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetDetectorsRequestPrivate::GetDetectorsRequestPrivate(
    const FraudDetectorRequest::Action action, GetDetectorsRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDetectorsRequest
 * class' copy constructor.
 */
GetDetectorsRequestPrivate::GetDetectorsRequestPrivate(
    const GetDetectorsRequestPrivate &other, GetDetectorsRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
