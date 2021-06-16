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

#include "getexternalmodelsrequest.h"
#include "getexternalmodelsrequest_p.h"
#include "getexternalmodelsresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetExternalModelsRequest
 * \brief The GetExternalModelsRequest class provides an interface for FraudDetector GetExternalModels requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getExternalModels
 */

/*!
 * Constructs a copy of \a other.
 */
GetExternalModelsRequest::GetExternalModelsRequest(const GetExternalModelsRequest &other)
    : FraudDetectorRequest(new GetExternalModelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExternalModelsRequest object.
 */
GetExternalModelsRequest::GetExternalModelsRequest()
    : FraudDetectorRequest(new GetExternalModelsRequestPrivate(FraudDetectorRequest::GetExternalModelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetExternalModelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExternalModelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExternalModelsRequest::response(QNetworkReply * const reply) const
{
    return new GetExternalModelsResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetExternalModelsRequestPrivate
 * \brief The GetExternalModelsRequestPrivate class provides private implementation for GetExternalModelsRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetExternalModelsRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetExternalModelsRequestPrivate::GetExternalModelsRequestPrivate(
    const FraudDetectorRequest::Action action, GetExternalModelsRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExternalModelsRequest
 * class' copy constructor.
 */
GetExternalModelsRequestPrivate::GetExternalModelsRequestPrivate(
    const GetExternalModelsRequestPrivate &other, GetExternalModelsRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
