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

#include "deleteentitytyperequest.h"
#include "deleteentitytyperequest_p.h"
#include "deleteentitytyperesponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteEntityTypeRequest
 * \brief The DeleteEntityTypeRequest class provides an interface for FraudDetector DeleteEntityType requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteEntityType
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEntityTypeRequest::DeleteEntityTypeRequest(const DeleteEntityTypeRequest &other)
    : FraudDetectorRequest(new DeleteEntityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEntityTypeRequest object.
 */
DeleteEntityTypeRequest::DeleteEntityTypeRequest()
    : FraudDetectorRequest(new DeleteEntityTypeRequestPrivate(FraudDetectorRequest::DeleteEntityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEntityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEntityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEntityTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEntityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::DeleteEntityTypeRequestPrivate
 * \brief The DeleteEntityTypeRequestPrivate class provides private implementation for DeleteEntityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteEntityTypeRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
DeleteEntityTypeRequestPrivate::DeleteEntityTypeRequestPrivate(
    const FraudDetectorRequest::Action action, DeleteEntityTypeRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEntityTypeRequest
 * class' copy constructor.
 */
DeleteEntityTypeRequestPrivate::DeleteEntityTypeRequestPrivate(
    const DeleteEntityTypeRequestPrivate &other, DeleteEntityTypeRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
