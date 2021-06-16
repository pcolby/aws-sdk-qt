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

#include "deletedetectorrequest.h"
#include "deletedetectorrequest_p.h"
#include "deletedetectorresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteDetectorRequest
 * \brief The DeleteDetectorRequest class provides an interface for FraudDetector DeleteDetector requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDetectorRequest::DeleteDetectorRequest(const DeleteDetectorRequest &other)
    : FraudDetectorRequest(new DeleteDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDetectorRequest object.
 */
DeleteDetectorRequest::DeleteDetectorRequest()
    : FraudDetectorRequest(new DeleteDetectorRequestPrivate(FraudDetectorRequest::DeleteDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteDetectorRequestPrivate
 * \brief The DeleteDetectorRequestPrivate class provides private implementation for DeleteDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteDetectorRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteDetectorRequestPrivate::DeleteDetectorRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteDetectorRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDetectorRequest
 * class' copy constructor.
 */
DeleteDetectorRequestPrivate::DeleteDetectorRequestPrivate(
    const DeleteDetectorRequestPrivate &other, DeleteDetectorRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
