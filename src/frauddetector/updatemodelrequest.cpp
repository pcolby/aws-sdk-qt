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

#include "updatemodelrequest.h"
#include "updatemodelrequest_p.h"
#include "updatemodelresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateModelRequest
 * \brief The UpdateModelRequest class provides an interface for FraudDetector UpdateModel requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateModel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateModelRequest::UpdateModelRequest(const UpdateModelRequest &other)
    : FraudDetectorRequest(new UpdateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateModelRequest object.
 */
UpdateModelRequest::UpdateModelRequest()
    : FraudDetectorRequest(new UpdateModelRequestPrivate(FraudDetectorRequest::UpdateModelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateModelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateModelResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::UpdateModelRequestPrivate
 * \brief The UpdateModelRequestPrivate class provides private implementation for UpdateModelRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateModelRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const FraudDetectorRequest::Action action, UpdateModelRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateModelRequest
 * class' copy constructor.
 */
UpdateModelRequestPrivate::UpdateModelRequestPrivate(
    const UpdateModelRequestPrivate &other, UpdateModelRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
