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

#include "deletelabelrequest.h"
#include "deletelabelrequest_p.h"
#include "deletelabelresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteLabelRequest
 * \brief The DeleteLabelRequest class provides an interface for FraudDetector DeleteLabel requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteLabel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLabelRequest::DeleteLabelRequest(const DeleteLabelRequest &other)
    : FraudDetectorRequest(new DeleteLabelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLabelRequest object.
 */
DeleteLabelRequest::DeleteLabelRequest()
    : FraudDetectorRequest(new DeleteLabelRequestPrivate(FraudDetectorRequest::DeleteLabelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLabelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLabelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLabelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLabelResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteLabelRequestPrivate
 * \brief The DeleteLabelRequestPrivate class provides private implementation for DeleteLabelRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteLabelRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteLabelRequestPrivate::DeleteLabelRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteLabelRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLabelRequest
 * class' copy constructor.
 */
DeleteLabelRequestPrivate::DeleteLabelRequestPrivate(
    const DeleteLabelRequestPrivate &other, DeleteLabelRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
