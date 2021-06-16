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

#include "updatemodelversionstatusrequest.h"
#include "updatemodelversionstatusrequest_p.h"
#include "updatemodelversionstatusresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateModelVersionStatusRequest
 * \brief The UpdateModelVersionStatusRequest class provides an interface for FraudDetector UpdateModelVersionStatus requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateModelVersionStatus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateModelVersionStatusRequest::UpdateModelVersionStatusRequest(const UpdateModelVersionStatusRequest &other)
    : FraudDetectorRequest(new UpdateModelVersionStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateModelVersionStatusRequest object.
 */
UpdateModelVersionStatusRequest::UpdateModelVersionStatusRequest()
    : FraudDetectorRequest(new UpdateModelVersionStatusRequestPrivate(FraudDetectorRequest::UpdateModelVersionStatusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateModelVersionStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateModelVersionStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateModelVersionStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdateModelVersionStatusResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::UpdateModelVersionStatusRequestPrivate
 * \brief The UpdateModelVersionStatusRequestPrivate class provides private implementation for UpdateModelVersionStatusRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateModelVersionStatusRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
UpdateModelVersionStatusRequestPrivate::UpdateModelVersionStatusRequestPrivate(
    const FraudDetectorRequest::Action action, UpdateModelVersionStatusRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateModelVersionStatusRequest
 * class' copy constructor.
 */
UpdateModelVersionStatusRequestPrivate::UpdateModelVersionStatusRequestPrivate(
    const UpdateModelVersionStatusRequestPrivate &other, UpdateModelVersionStatusRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
