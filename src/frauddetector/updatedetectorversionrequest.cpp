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

#include "updatedetectorversionrequest.h"
#include "updatedetectorversionrequest_p.h"
#include "updatedetectorversionresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionRequest
 * \brief The UpdateDetectorVersionRequest class provides an interface for FraudDetector UpdateDetectorVersion requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateDetectorVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDetectorVersionRequest::UpdateDetectorVersionRequest(const UpdateDetectorVersionRequest &other)
    : FraudDetectorRequest(new UpdateDetectorVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDetectorVersionRequest object.
 */
UpdateDetectorVersionRequest::UpdateDetectorVersionRequest()
    : FraudDetectorRequest(new UpdateDetectorVersionRequestPrivate(FraudDetectorRequest::UpdateDetectorVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDetectorVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDetectorVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDetectorVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDetectorVersionResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionRequestPrivate
 * \brief The UpdateDetectorVersionRequestPrivate class provides private implementation for UpdateDetectorVersionRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateDetectorVersionRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
UpdateDetectorVersionRequestPrivate::UpdateDetectorVersionRequestPrivate(
    const FraudDetectorRequest::Action action, UpdateDetectorVersionRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDetectorVersionRequest
 * class' copy constructor.
 */
UpdateDetectorVersionRequestPrivate::UpdateDetectorVersionRequestPrivate(
    const UpdateDetectorVersionRequestPrivate &other, UpdateDetectorVersionRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
