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

#include "geteventtypesrequest.h"
#include "geteventtypesrequest_p.h"
#include "geteventtypesresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetEventTypesRequest
 * \brief The GetEventTypesRequest class provides an interface for FraudDetector GetEventTypes requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getEventTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetEventTypesRequest::GetEventTypesRequest(const GetEventTypesRequest &other)
    : FraudDetectorRequest(new GetEventTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEventTypesRequest object.
 */
GetEventTypesRequest::GetEventTypesRequest()
    : FraudDetectorRequest(new GetEventTypesRequestPrivate(FraudDetectorRequest::GetEventTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetEventTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEventTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEventTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetEventTypesResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetEventTypesRequestPrivate
 * \brief The GetEventTypesRequestPrivate class provides private implementation for GetEventTypesRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetEventTypesRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetEventTypesRequestPrivate::GetEventTypesRequestPrivate(
    const FraudDetectorRequest::Action action, GetEventTypesRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEventTypesRequest
 * class' copy constructor.
 */
GetEventTypesRequestPrivate::GetEventTypesRequestPrivate(
    const GetEventTypesRequestPrivate &other, GetEventTypesRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
