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

#include "batchcreatevariablerequest.h"
#include "batchcreatevariablerequest_p.h"
#include "batchcreatevariableresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::BatchCreateVariableRequest
 * \brief The BatchCreateVariableRequest class provides an interface for FraudDetector BatchCreateVariable requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::batchCreateVariable
 */

/*!
 * Constructs a copy of \a other.
 */
BatchCreateVariableRequest::BatchCreateVariableRequest(const BatchCreateVariableRequest &other)
    : FraudDetectorRequest(new BatchCreateVariableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchCreateVariableRequest object.
 */
BatchCreateVariableRequest::BatchCreateVariableRequest()
    : FraudDetectorRequest(new BatchCreateVariableRequestPrivate(FraudDetectorRequest::BatchCreateVariableAction, this))
{

}

/*!
 * \reimp
 */
bool BatchCreateVariableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchCreateVariableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchCreateVariableRequest::response(QNetworkReply * const reply) const
{
    return new BatchCreateVariableResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::BatchCreateVariableRequestPrivate
 * \brief The BatchCreateVariableRequestPrivate class provides private implementation for BatchCreateVariableRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a BatchCreateVariableRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
BatchCreateVariableRequestPrivate::BatchCreateVariableRequestPrivate(
    const FraudDetectorRequest::Action action, BatchCreateVariableRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchCreateVariableRequest
 * class' copy constructor.
 */
BatchCreateVariableRequestPrivate::BatchCreateVariableRequestPrivate(
    const BatchCreateVariableRequestPrivate &other, BatchCreateVariableRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
