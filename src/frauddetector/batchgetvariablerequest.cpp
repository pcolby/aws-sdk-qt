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

#include "batchgetvariablerequest.h"
#include "batchgetvariablerequest_p.h"
#include "batchgetvariableresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::BatchGetVariableRequest
 * \brief The BatchGetVariableRequest class provides an interface for FraudDetector BatchGetVariable requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::batchGetVariable
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetVariableRequest::BatchGetVariableRequest(const BatchGetVariableRequest &other)
    : FraudDetectorRequest(new BatchGetVariableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetVariableRequest object.
 */
BatchGetVariableRequest::BatchGetVariableRequest()
    : FraudDetectorRequest(new BatchGetVariableRequestPrivate(FraudDetectorRequest::BatchGetVariableAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetVariableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetVariableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetVariableRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetVariableResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::BatchGetVariableRequestPrivate
 * \brief The BatchGetVariableRequestPrivate class provides private implementation for BatchGetVariableRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a BatchGetVariableRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
BatchGetVariableRequestPrivate::BatchGetVariableRequestPrivate(
    const FraudDetectorRequest::Action action, BatchGetVariableRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetVariableRequest
 * class' copy constructor.
 */
BatchGetVariableRequestPrivate::BatchGetVariableRequestPrivate(
    const BatchGetVariableRequestPrivate &other, BatchGetVariableRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
