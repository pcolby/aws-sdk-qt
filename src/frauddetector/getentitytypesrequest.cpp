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

#include "getentitytypesrequest.h"
#include "getentitytypesrequest_p.h"
#include "getentitytypesresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetEntityTypesRequest
 * \brief The GetEntityTypesRequest class provides an interface for FraudDetector GetEntityTypes requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getEntityTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetEntityTypesRequest::GetEntityTypesRequest(const GetEntityTypesRequest &other)
    : FraudDetectorRequest(new GetEntityTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEntityTypesRequest object.
 */
GetEntityTypesRequest::GetEntityTypesRequest()
    : FraudDetectorRequest(new GetEntityTypesRequestPrivate(FraudDetectorRequest::GetEntityTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetEntityTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEntityTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEntityTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetEntityTypesResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetEntityTypesRequestPrivate
 * \brief The GetEntityTypesRequestPrivate class provides private implementation for GetEntityTypesRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetEntityTypesRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetEntityTypesRequestPrivate::GetEntityTypesRequestPrivate(
    const FraudDetectorRequest::Action action, GetEntityTypesRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEntityTypesRequest
 * class' copy constructor.
 */
GetEntityTypesRequestPrivate::GetEntityTypesRequestPrivate(
    const GetEntityTypesRequestPrivate &other, GetEntityTypesRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
