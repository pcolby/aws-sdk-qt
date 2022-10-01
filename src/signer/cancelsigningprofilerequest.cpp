// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelsigningprofilerequest.h"
#include "cancelsigningprofilerequest_p.h"
#include "cancelsigningprofileresponse.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::CancelSigningProfileRequest
 * \brief The CancelSigningProfileRequest class provides an interface for Signer CancelSigningProfile requests.
 *
 * \inmodule QtAwsSigner
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
 *  Guide</a>>
 *
 * \sa SignerClient::cancelSigningProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CancelSigningProfileRequest::CancelSigningProfileRequest(const CancelSigningProfileRequest &other)
    : SignerRequest(new CancelSigningProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelSigningProfileRequest object.
 */
CancelSigningProfileRequest::CancelSigningProfileRequest()
    : SignerRequest(new CancelSigningProfileRequestPrivate(SignerRequest::CancelSigningProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CancelSigningProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelSigningProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelSigningProfileRequest::response(QNetworkReply * const reply) const
{
    return new CancelSigningProfileResponse(*this, reply);
}

/*!
 * \class QtAws::Signer::CancelSigningProfileRequestPrivate
 * \brief The CancelSigningProfileRequestPrivate class provides private implementation for CancelSigningProfileRequest.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a CancelSigningProfileRequestPrivate object for Signer \a action,
 * with public implementation \a q.
 */
CancelSigningProfileRequestPrivate::CancelSigningProfileRequestPrivate(
    const SignerRequest::Action action, CancelSigningProfileRequest * const q)
    : SignerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelSigningProfileRequest
 * class' copy constructor.
 */
CancelSigningProfileRequestPrivate::CancelSigningProfileRequestPrivate(
    const CancelSigningProfileRequestPrivate &other, CancelSigningProfileRequest * const q)
    : SignerRequestPrivate(other, q)
{

}

} // namespace Signer
} // namespace QtAws
