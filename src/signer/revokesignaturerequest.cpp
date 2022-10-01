// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revokesignaturerequest.h"
#include "revokesignaturerequest_p.h"
#include "revokesignatureresponse.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::RevokeSignatureRequest
 * \brief The RevokeSignatureRequest class provides an interface for Signer RevokeSignature requests.
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
 * \sa SignerClient::revokeSignature
 */

/*!
 * Constructs a copy of \a other.
 */
RevokeSignatureRequest::RevokeSignatureRequest(const RevokeSignatureRequest &other)
    : SignerRequest(new RevokeSignatureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RevokeSignatureRequest object.
 */
RevokeSignatureRequest::RevokeSignatureRequest()
    : SignerRequest(new RevokeSignatureRequestPrivate(SignerRequest::RevokeSignatureAction, this))
{

}

/*!
 * \reimp
 */
bool RevokeSignatureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RevokeSignatureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RevokeSignatureRequest::response(QNetworkReply * const reply) const
{
    return new RevokeSignatureResponse(*this, reply);
}

/*!
 * \class QtAws::Signer::RevokeSignatureRequestPrivate
 * \brief The RevokeSignatureRequestPrivate class provides private implementation for RevokeSignatureRequest.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a RevokeSignatureRequestPrivate object for Signer \a action,
 * with public implementation \a q.
 */
RevokeSignatureRequestPrivate::RevokeSignatureRequestPrivate(
    const SignerRequest::Action action, RevokeSignatureRequest * const q)
    : SignerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RevokeSignatureRequest
 * class' copy constructor.
 */
RevokeSignatureRequestPrivate::RevokeSignatureRequestPrivate(
    const RevokeSignatureRequestPrivate &other, RevokeSignatureRequest * const q)
    : SignerRequestPrivate(other, q)
{

}

} // namespace Signer
} // namespace QtAws
