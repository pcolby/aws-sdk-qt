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

#include "deleteexternalmodelrequest.h"
#include "deleteexternalmodelrequest_p.h"
#include "deleteexternalmodelresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteExternalModelRequest
 * \brief The DeleteExternalModelRequest class provides an interface for FraudDetector DeleteExternalModel requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteExternalModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExternalModelRequest::DeleteExternalModelRequest(const DeleteExternalModelRequest &other)
    : FraudDetectorRequest(new DeleteExternalModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExternalModelRequest object.
 */
DeleteExternalModelRequest::DeleteExternalModelRequest()
    : FraudDetectorRequest(new DeleteExternalModelRequestPrivate(FraudDetectorRequest::DeleteExternalModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExternalModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExternalModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExternalModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExternalModelResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteExternalModelRequestPrivate
 * \brief The DeleteExternalModelRequestPrivate class provides private implementation for DeleteExternalModelRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteExternalModelRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteExternalModelRequestPrivate::DeleteExternalModelRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteExternalModelRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExternalModelRequest
 * class' copy constructor.
 */
DeleteExternalModelRequestPrivate::DeleteExternalModelRequestPrivate(
    const DeleteExternalModelRequestPrivate &other, DeleteExternalModelRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
