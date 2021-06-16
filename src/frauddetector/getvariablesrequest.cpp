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

#include "getvariablesrequest.h"
#include "getvariablesrequest_p.h"
#include "getvariablesresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetVariablesRequest
 * \brief The GetVariablesRequest class provides an interface for FraudDetector GetVariables requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getVariables
 */

/*!
 * Constructs a copy of \a other.
 */
GetVariablesRequest::GetVariablesRequest(const GetVariablesRequest &other)
    : FraudDetectorRequest(new GetVariablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVariablesRequest object.
 */
GetVariablesRequest::GetVariablesRequest()
    : FraudDetectorRequest(new GetVariablesRequestPrivate(FraudDetectorRequest::GetVariablesAction, this))
{

}

/*!
 * \reimp
 */
bool GetVariablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVariablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVariablesRequest::response(QNetworkReply * const reply) const
{
    return new GetVariablesResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetVariablesRequestPrivate
 * \brief The GetVariablesRequestPrivate class provides private implementation for GetVariablesRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetVariablesRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetVariablesRequestPrivate::GetVariablesRequestPrivate(
    const FraudDetectorRequest::Action action, GetVariablesRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVariablesRequest
 * class' copy constructor.
 */
GetVariablesRequestPrivate::GetVariablesRequestPrivate(
    const GetVariablesRequestPrivate &other, GetVariablesRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
