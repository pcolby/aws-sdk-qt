// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addprofilepermissionrequest.h"
#include "addprofilepermissionrequest_p.h"
#include "addprofilepermissionresponse.h"
#include "signerrequest_p.h"

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::AddProfilePermissionRequest
 * \brief The AddProfilePermissionRequest class provides an interface for Signer AddProfilePermission requests.
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
 * \sa SignerClient::addProfilePermission
 */

/*!
 * Constructs a copy of \a other.
 */
AddProfilePermissionRequest::AddProfilePermissionRequest(const AddProfilePermissionRequest &other)
    : SignerRequest(new AddProfilePermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddProfilePermissionRequest object.
 */
AddProfilePermissionRequest::AddProfilePermissionRequest()
    : SignerRequest(new AddProfilePermissionRequestPrivate(SignerRequest::AddProfilePermissionAction, this))
{

}

/*!
 * \reimp
 */
bool AddProfilePermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddProfilePermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddProfilePermissionRequest::response(QNetworkReply * const reply) const
{
    return new AddProfilePermissionResponse(*this, reply);
}

/*!
 * \class QtAws::Signer::AddProfilePermissionRequestPrivate
 * \brief The AddProfilePermissionRequestPrivate class provides private implementation for AddProfilePermissionRequest.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a AddProfilePermissionRequestPrivate object for Signer \a action,
 * with public implementation \a q.
 */
AddProfilePermissionRequestPrivate::AddProfilePermissionRequestPrivate(
    const SignerRequest::Action action, AddProfilePermissionRequest * const q)
    : SignerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddProfilePermissionRequest
 * class' copy constructor.
 */
AddProfilePermissionRequestPrivate::AddProfilePermissionRequestPrivate(
    const AddProfilePermissionRequestPrivate &other, AddProfilePermissionRequest * const q)
    : SignerRequestPrivate(other, q)
{

}

} // namespace Signer
} // namespace QtAws
