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

#include "putexternalmodelrequest.h"
#include "putexternalmodelrequest_p.h"
#include "putexternalmodelresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutExternalModelRequest
 * \brief The PutExternalModelRequest class provides an interface for FraudDetector PutExternalModel requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putExternalModel
 */

/*!
 * Constructs a copy of \a other.
 */
PutExternalModelRequest::PutExternalModelRequest(const PutExternalModelRequest &other)
    : FraudDetectorRequest(new PutExternalModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutExternalModelRequest object.
 */
PutExternalModelRequest::PutExternalModelRequest()
    : FraudDetectorRequest(new PutExternalModelRequestPrivate(FraudDetectorRequest::PutExternalModelAction, this))
{

}

/*!
 * \reimp
 */
bool PutExternalModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutExternalModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutExternalModelRequest::response(QNetworkReply * const reply) const
{
    return new PutExternalModelResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::PutExternalModelRequestPrivate
 * \brief The PutExternalModelRequestPrivate class provides private implementation for PutExternalModelRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutExternalModelRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
PutExternalModelRequestPrivate::PutExternalModelRequestPrivate(
    const FraudDetectorRequest::Action action, PutExternalModelRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutExternalModelRequest
 * class' copy constructor.
 */
PutExternalModelRequestPrivate::PutExternalModelRequestPrivate(
    const PutExternalModelRequestPrivate &other, PutExternalModelRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
