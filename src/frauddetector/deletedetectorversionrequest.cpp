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

#include "deletedetectorversionrequest.h"
#include "deletedetectorversionrequest_p.h"
#include "deletedetectorversionresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteDetectorVersionRequest
 * \brief The DeleteDetectorVersionRequest class provides an interface for FraudDetector DeleteDetectorVersion requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteDetectorVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDetectorVersionRequest::DeleteDetectorVersionRequest(const DeleteDetectorVersionRequest &other)
    : FraudDetectorRequest(new DeleteDetectorVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDetectorVersionRequest object.
 */
DeleteDetectorVersionRequest::DeleteDetectorVersionRequest()
    : FraudDetectorRequest(new DeleteDetectorVersionRequestPrivate(FraudDetectorRequest::DeleteDetectorVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDetectorVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDetectorVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDetectorVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDetectorVersionResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteDetectorVersionRequestPrivate
 * \brief The DeleteDetectorVersionRequestPrivate class provides private implementation for DeleteDetectorVersionRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteDetectorVersionRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteDetectorVersionRequestPrivate::DeleteDetectorVersionRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteDetectorVersionRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDetectorVersionRequest
 * class' copy constructor.
 */
DeleteDetectorVersionRequestPrivate::DeleteDetectorVersionRequestPrivate(
    const DeleteDetectorVersionRequestPrivate &other, DeleteDetectorVersionRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
