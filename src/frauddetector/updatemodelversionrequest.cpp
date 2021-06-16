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

#include "updatemodelversionrequest.h"
#include "updatemodelversionrequest_p.h"
#include "updatemodelversionresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateModelVersionRequest
 * \brief The UpdateModelVersionRequest class provides an interface for FraudDetector UpdateModelVersion requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateModelVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateModelVersionRequest::UpdateModelVersionRequest(const UpdateModelVersionRequest &other)
    : FraudDetectorRequest(new UpdateModelVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateModelVersionRequest object.
 */
UpdateModelVersionRequest::UpdateModelVersionRequest()
    : FraudDetectorRequest(new UpdateModelVersionRequestPrivate(FraudDetectorRequest::UpdateModelVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateModelVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateModelVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateModelVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateModelVersionResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::UpdateModelVersionRequestPrivate
 * \brief The UpdateModelVersionRequestPrivate class provides private implementation for UpdateModelVersionRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateModelVersionRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
UpdateModelVersionRequestPrivate::UpdateModelVersionRequestPrivate(
    const FraudDetectorRequest::Action action, UpdateModelVersionRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateModelVersionRequest
 * class' copy constructor.
 */
UpdateModelVersionRequestPrivate::UpdateModelVersionRequestPrivate(
    const UpdateModelVersionRequestPrivate &other, UpdateModelVersionRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
