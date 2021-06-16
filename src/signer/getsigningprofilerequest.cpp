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

#include "getsigningprofilerequest.h"
#include "getsigningprofilerequest_p.h"
#include "getsigningprofileresponse.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::GetSigningProfileRequest
 * \brief The GetSigningProfileRequest class provides an interface for signer GetSigningProfile requests.
 *
 * \inmodule QtAwssigner
 *
 *  AWS Signer is a fully managed code signing service to help you ensure the trust and integrity of your code.
 * 
 *  </p
 * 
 *  AWS Signer supports the following
 * 
 *  applications>
 * 
 *  With <i>code signing for AWS Lambda</i>, you can sign AWS Lambda deployment packages. Integrated support is provided for
 *  Amazon S3, Amazon CloudWatch, and AWS CloudTrail. In order to sign code, you create a signing profile and then use
 *  Signer to sign Lambda zip files in S3.
 * 
 *  </p
 * 
 *  With <i>code signing for IoT</i>, you can sign code for any IoT device that is supported by AWS. IoT code signing is
 *  available for <a href="http://docs.aws.amazon.com/freertos/latest/userguide/">Amazon FreeRTOS</a> and <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/">AWS IoT Device Management</a>, and is integrated with <a
 *  href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager (ACM)</a>. In order to sign code, you
 *  import a third-party code signing certificate using ACM, and use that to sign updates in Amazon FreeRTOS and AWS IoT
 *  Device Management.
 * 
 *  </p
 * 
 *  For more information about AWS Signer, see the <a
 *  href="http://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">AWS Signer Developer
 *
 * \sa signerClient::getSigningProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetSigningProfileRequest::GetSigningProfileRequest(const GetSigningProfileRequest &other)
    : signerRequest(new GetSigningProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSigningProfileRequest object.
 */
GetSigningProfileRequest::GetSigningProfileRequest()
    : signerRequest(new GetSigningProfileRequestPrivate(signerRequest::GetSigningProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetSigningProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSigningProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSigningProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetSigningProfileResponse(*this, reply);
}

/*!
 * \class QtAws::signer::GetSigningProfileRequestPrivate
 * \brief The GetSigningProfileRequestPrivate class provides private implementation for GetSigningProfileRequest.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a GetSigningProfileRequestPrivate object for signer \a action,
 * with public implementation \a q.
 */
GetSigningProfileRequestPrivate::GetSigningProfileRequestPrivate(
    const signerRequest::Action action, GetSigningProfileRequest * const q)
    : signerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSigningProfileRequest
 * class' copy constructor.
 */
GetSigningProfileRequestPrivate::GetSigningProfileRequestPrivate(
    const GetSigningProfileRequestPrivate &other, GetSigningProfileRequest * const q)
    : signerRequestPrivate(other, q)
{

}

} // namespace signer
} // namespace QtAws
