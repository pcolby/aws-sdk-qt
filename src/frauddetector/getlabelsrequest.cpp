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

#include "getlabelsrequest.h"
#include "getlabelsrequest_p.h"
#include "getlabelsresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetLabelsRequest
 * \brief The GetLabelsRequest class provides an interface for FraudDetector GetLabels requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getLabels
 */

/*!
 * Constructs a copy of \a other.
 */
GetLabelsRequest::GetLabelsRequest(const GetLabelsRequest &other)
    : FraudDetectorRequest(new GetLabelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLabelsRequest object.
 */
GetLabelsRequest::GetLabelsRequest()
    : FraudDetectorRequest(new GetLabelsRequestPrivate(FraudDetectorRequest::GetLabelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetLabelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLabelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLabelsRequest::response(QNetworkReply * const reply) const
{
    return new GetLabelsResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetLabelsRequestPrivate
 * \brief The GetLabelsRequestPrivate class provides private implementation for GetLabelsRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetLabelsRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetLabelsRequestPrivate::GetLabelsRequestPrivate(
    const FraudDetectorRequest::Action action, GetLabelsRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLabelsRequest
 * class' copy constructor.
 */
GetLabelsRequestPrivate::GetLabelsRequestPrivate(
    const GetLabelsRequestPrivate &other, GetLabelsRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
