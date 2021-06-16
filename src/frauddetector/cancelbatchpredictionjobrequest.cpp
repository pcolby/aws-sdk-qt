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

#include "cancelbatchpredictionjobrequest.h"
#include "cancelbatchpredictionjobrequest_p.h"
#include "cancelbatchpredictionjobresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::CancelBatchPredictionJobRequest
 * \brief The CancelBatchPredictionJobRequest class provides an interface for FraudDetector CancelBatchPredictionJob requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::cancelBatchPredictionJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelBatchPredictionJobRequest::CancelBatchPredictionJobRequest(const CancelBatchPredictionJobRequest &other)
    : FraudDetectorRequest(new CancelBatchPredictionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelBatchPredictionJobRequest object.
 */
CancelBatchPredictionJobRequest::CancelBatchPredictionJobRequest()
    : FraudDetectorRequest(new CancelBatchPredictionJobRequestPrivate(FraudDetectorRequest::CancelBatchPredictionJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelBatchPredictionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelBatchPredictionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelBatchPredictionJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelBatchPredictionJobResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::CancelBatchPredictionJobRequestPrivate
 * \brief The CancelBatchPredictionJobRequestPrivate class provides private implementation for CancelBatchPredictionJobRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a CancelBatchPredictionJobRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
CancelBatchPredictionJobRequestPrivate::CancelBatchPredictionJobRequestPrivate(
    const FraudDetectorRequest::Action action, CancelBatchPredictionJobRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelBatchPredictionJobRequest
 * class' copy constructor.
 */
CancelBatchPredictionJobRequestPrivate::CancelBatchPredictionJobRequestPrivate(
    const CancelBatchPredictionJobRequestPrivate &other, CancelBatchPredictionJobRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
