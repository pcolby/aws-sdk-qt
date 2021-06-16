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

#include "deletemodelversionrequest.h"
#include "deletemodelversionrequest_p.h"
#include "deletemodelversionresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteModelVersionRequest
 * \brief The DeleteModelVersionRequest class provides an interface for FraudDetector DeleteModelVersion requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteModelVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelVersionRequest::DeleteModelVersionRequest(const DeleteModelVersionRequest &other)
    : FraudDetectorRequest(new DeleteModelVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelVersionRequest object.
 */
DeleteModelVersionRequest::DeleteModelVersionRequest()
    : FraudDetectorRequest(new DeleteModelVersionRequestPrivate(FraudDetectorRequest::DeleteModelVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelVersionResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteModelVersionRequestPrivate
 * \brief The DeleteModelVersionRequestPrivate class provides private implementation for DeleteModelVersionRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteModelVersionRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteModelVersionRequestPrivate::DeleteModelVersionRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteModelVersionRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelVersionRequest
 * class' copy constructor.
 */
DeleteModelVersionRequestPrivate::DeleteModelVersionRequestPrivate(
    const DeleteModelVersionRequestPrivate &other, DeleteModelVersionRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
