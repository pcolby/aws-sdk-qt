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

#include "getrulesrequest.h"
#include "getrulesrequest_p.h"
#include "getrulesresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetRulesRequest
 * \brief The GetRulesRequest class provides an interface for FraudDetector GetRules requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getRules
 */

/*!
 * Constructs a copy of \a other.
 */
GetRulesRequest::GetRulesRequest(const GetRulesRequest &other)
    : FraudDetectorRequest(new GetRulesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRulesRequest object.
 */
GetRulesRequest::GetRulesRequest()
    : FraudDetectorRequest(new GetRulesRequestPrivate(FraudDetectorRequest::GetRulesAction, this))
{

}

/*!
 * \reimp
 */
bool GetRulesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRulesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRulesRequest::response(QNetworkReply * const reply) const
{
    return new GetRulesResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetRulesRequestPrivate
 * \brief The GetRulesRequestPrivate class provides private implementation for GetRulesRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetRulesRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetRulesRequestPrivate::GetRulesRequestPrivate(
    const FraudDetectorRequest::Action action, GetRulesRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRulesRequest
 * class' copy constructor.
 */
GetRulesRequestPrivate::GetRulesRequestPrivate(
    const GetRulesRequestPrivate &other, GetRulesRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
