// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadsigningcertificaterequest.h"
#include "uploadsigningcertificaterequest_p.h"
#include "uploadsigningcertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UploadSigningCertificateRequest
 * \brief The UploadSigningCertificateRequest class provides an interface for Iam UploadSigningCertificate requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::uploadSigningCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
UploadSigningCertificateRequest::UploadSigningCertificateRequest(const UploadSigningCertificateRequest &other)
    : IamRequest(new UploadSigningCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadSigningCertificateRequest object.
 */
UploadSigningCertificateRequest::UploadSigningCertificateRequest()
    : IamRequest(new UploadSigningCertificateRequestPrivate(IamRequest::UploadSigningCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool UploadSigningCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadSigningCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadSigningCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UploadSigningCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UploadSigningCertificateRequestPrivate
 * \brief The UploadSigningCertificateRequestPrivate class provides private implementation for UploadSigningCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UploadSigningCertificateRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UploadSigningCertificateRequestPrivate::UploadSigningCertificateRequestPrivate(
    const IamRequest::Action action, UploadSigningCertificateRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadSigningCertificateRequest
 * class' copy constructor.
 */
UploadSigningCertificateRequestPrivate::UploadSigningCertificateRequestPrivate(
    const UploadSigningCertificateRequestPrivate &other, UploadSigningCertificateRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
