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

#include "putkmsencryptionkeyrequest.h"
#include "putkmsencryptionkeyrequest_p.h"
#include "putkmsencryptionkeyresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::PutKMSEncryptionKeyRequest
 * \brief The PutKMSEncryptionKeyRequest class provides an interface for FraudDetector PutKMSEncryptionKey requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::putKMSEncryptionKey
 */

/*!
 * Constructs a copy of \a other.
 */
PutKMSEncryptionKeyRequest::PutKMSEncryptionKeyRequest(const PutKMSEncryptionKeyRequest &other)
    : FraudDetectorRequest(new PutKMSEncryptionKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutKMSEncryptionKeyRequest object.
 */
PutKMSEncryptionKeyRequest::PutKMSEncryptionKeyRequest()
    : FraudDetectorRequest(new PutKMSEncryptionKeyRequestPrivate(FraudDetectorRequest::PutKMSEncryptionKeyAction, this))
{

}

/*!
 * \reimp
 */
bool PutKMSEncryptionKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutKMSEncryptionKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutKMSEncryptionKeyRequest::response(QNetworkReply * const reply) const
{
    return new PutKMSEncryptionKeyResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::PutKMSEncryptionKeyRequestPrivate
 * \brief The PutKMSEncryptionKeyRequestPrivate class provides private implementation for PutKMSEncryptionKeyRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a PutKMSEncryptionKeyRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
PutKMSEncryptionKeyRequestPrivate::PutKMSEncryptionKeyRequestPrivate(
    const FraudDetectorRequest::Action action, PutKMSEncryptionKeyRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutKMSEncryptionKeyRequest
 * class' copy constructor.
 */
PutKMSEncryptionKeyRequestPrivate::PutKMSEncryptionKeyRequestPrivate(
    const PutKMSEncryptionKeyRequestPrivate &other, PutKMSEncryptionKeyRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
