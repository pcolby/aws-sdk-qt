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

#include "putdetectorrequest.h"
#include "putdetectorrequest_p.h"
#include "putdetectorresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutDetectorRequest
 * \brief The PutDetectorRequest class provides an interface for FraudDetector PutDetector requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putDetector
 */

/*!
 * Constructs a copy of \a other.
 */
PutDetectorRequest::PutDetectorRequest(const PutDetectorRequest &other)
    : FraudDetectorRequest(new PutDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDetectorRequest object.
 */
PutDetectorRequest::PutDetectorRequest()
    : FraudDetectorRequest(new PutDetectorRequestPrivate(FraudDetectorRequest::PutDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool PutDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDetectorRequest::response(QNetworkReply * const reply) const
{
    return new PutDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::PutDetectorRequestPrivate
 * \brief The PutDetectorRequestPrivate class provides private implementation for PutDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutDetectorRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
PutDetectorRequestPrivate::PutDetectorRequestPrivate(
    const FraudDetectorRequest::Action action, PutDetectorRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDetectorRequest
 * class' copy constructor.
 */
PutDetectorRequestPrivate::PutDetectorRequestPrivate(
    const PutDetectorRequestPrivate &other, PutDetectorRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
