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

#include "getkmsencryptionkeyrequest.h"
#include "getkmsencryptionkeyrequest_p.h"
#include "getkmsencryptionkeyresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::GetKMSEncryptionKeyRequest
 * \brief The GetKMSEncryptionKeyRequest class provides an interface for FraudDetector GetKMSEncryptionKey requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::getKMSEncryptionKey
 */

/*!
 * Constructs a copy of \a other.
 */
GetKMSEncryptionKeyRequest::GetKMSEncryptionKeyRequest(const GetKMSEncryptionKeyRequest &other)
    : FraudDetectorRequest(new GetKMSEncryptionKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetKMSEncryptionKeyRequest object.
 */
GetKMSEncryptionKeyRequest::GetKMSEncryptionKeyRequest()
    : FraudDetectorRequest(new GetKMSEncryptionKeyRequestPrivate(FraudDetectorRequest::GetKMSEncryptionKeyAction, this))
{

}

/*!
 * \reimp
 */
bool GetKMSEncryptionKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetKMSEncryptionKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetKMSEncryptionKeyRequest::response(QNetworkReply * const reply) const
{
    return new GetKMSEncryptionKeyResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::GetKMSEncryptionKeyRequestPrivate
 * \brief The GetKMSEncryptionKeyRequestPrivate class provides private implementation for GetKMSEncryptionKeyRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a GetKMSEncryptionKeyRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
GetKMSEncryptionKeyRequestPrivate::GetKMSEncryptionKeyRequestPrivate(
    const FraudDetectorRequest::Action action, GetKMSEncryptionKeyRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetKMSEncryptionKeyRequest
 * class' copy constructor.
 */
GetKMSEncryptionKeyRequestPrivate::GetKMSEncryptionKeyRequestPrivate(
    const GetKMSEncryptionKeyRequestPrivate &other, GetKMSEncryptionKeyRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
