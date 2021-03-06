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

#include "getmodelversionrequest.h"
#include "getmodelversionrequest_p.h"
#include "getmodelversionresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetModelVersionRequest
 * \brief The GetModelVersionRequest class provides an interface for FraudDetector GetModelVersion requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getModelVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelVersionRequest::GetModelVersionRequest(const GetModelVersionRequest &other)
    : FraudDetectorRequest(new GetModelVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelVersionRequest object.
 */
GetModelVersionRequest::GetModelVersionRequest()
    : FraudDetectorRequest(new GetModelVersionRequestPrivate(FraudDetectorRequest::GetModelVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetModelVersionResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetModelVersionRequestPrivate
 * \brief The GetModelVersionRequestPrivate class provides private implementation for GetModelVersionRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetModelVersionRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetModelVersionRequestPrivate::GetModelVersionRequestPrivate(
    const FraudDetectorRequest::Action action, GetModelVersionRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelVersionRequest
 * class' copy constructor.
 */
GetModelVersionRequestPrivate::GetModelVersionRequestPrivate(
    const GetModelVersionRequestPrivate &other, GetModelVersionRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
