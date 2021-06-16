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

#include "getdetectorversionrequest.h"
#include "getdetectorversionrequest_p.h"
#include "getdetectorversionresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetDetectorVersionRequest
 * \brief The GetDetectorVersionRequest class provides an interface for FraudDetector GetDetectorVersion requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getDetectorVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetDetectorVersionRequest::GetDetectorVersionRequest(const GetDetectorVersionRequest &other)
    : FraudDetectorRequest(new GetDetectorVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDetectorVersionRequest object.
 */
GetDetectorVersionRequest::GetDetectorVersionRequest()
    : FraudDetectorRequest(new GetDetectorVersionRequestPrivate(FraudDetectorRequest::GetDetectorVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDetectorVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDetectorVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDetectorVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetDetectorVersionResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetDetectorVersionRequestPrivate
 * \brief The GetDetectorVersionRequestPrivate class provides private implementation for GetDetectorVersionRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetDetectorVersionRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetDetectorVersionRequestPrivate::GetDetectorVersionRequestPrivate(
    const FraudDetectorRequest::Action action, GetDetectorVersionRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDetectorVersionRequest
 * class' copy constructor.
 */
GetDetectorVersionRequestPrivate::GetDetectorVersionRequestPrivate(
    const GetDetectorVersionRequestPrivate &other, GetDetectorVersionRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
