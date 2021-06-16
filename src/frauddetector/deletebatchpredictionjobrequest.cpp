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

#include "deletebatchpredictionjobrequest.h"
#include "deletebatchpredictionjobrequest_p.h"
#include "deletebatchpredictionjobresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteBatchPredictionJobRequest
 * \brief The DeleteBatchPredictionJobRequest class provides an interface for FraudDetector DeleteBatchPredictionJob requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteBatchPredictionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBatchPredictionJobRequest::DeleteBatchPredictionJobRequest(const DeleteBatchPredictionJobRequest &other)
    : FraudDetectorRequest(new DeleteBatchPredictionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBatchPredictionJobRequest object.
 */
DeleteBatchPredictionJobRequest::DeleteBatchPredictionJobRequest()
    : FraudDetectorRequest(new DeleteBatchPredictionJobRequestPrivate(FraudDetectorRequest::DeleteBatchPredictionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBatchPredictionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBatchPredictionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBatchPredictionJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBatchPredictionJobResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteBatchPredictionJobRequestPrivate
 * \brief The DeleteBatchPredictionJobRequestPrivate class provides private implementation for DeleteBatchPredictionJobRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteBatchPredictionJobRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteBatchPredictionJobRequestPrivate::DeleteBatchPredictionJobRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteBatchPredictionJobRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBatchPredictionJobRequest
 * class' copy constructor.
 */
DeleteBatchPredictionJobRequestPrivate::DeleteBatchPredictionJobRequestPrivate(
    const DeleteBatchPredictionJobRequestPrivate &other, DeleteBatchPredictionJobRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
