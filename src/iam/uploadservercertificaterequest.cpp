// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadservercertificaterequest.h"
#include "uploadservercertificaterequest_p.h"
#include "uploadservercertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UploadServerCertificateRequest
 * \brief The UploadServerCertificateRequest class provides an interface for Iam UploadServerCertificate requests.
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
 * \sa IamClient::uploadServerCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
UploadServerCertificateRequest::UploadServerCertificateRequest(const UploadServerCertificateRequest &other)
    : IamRequest(new UploadServerCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadServerCertificateRequest object.
 */
UploadServerCertificateRequest::UploadServerCertificateRequest()
    : IamRequest(new UploadServerCertificateRequestPrivate(IamRequest::UploadServerCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool UploadServerCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadServerCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadServerCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UploadServerCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UploadServerCertificateRequestPrivate
 * \brief The UploadServerCertificateRequestPrivate class provides private implementation for UploadServerCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UploadServerCertificateRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UploadServerCertificateRequestPrivate::UploadServerCertificateRequestPrivate(
    const IamRequest::Action action, UploadServerCertificateRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadServerCertificateRequest
 * class' copy constructor.
 */
UploadServerCertificateRequestPrivate::UploadServerCertificateRequestPrivate(
    const UploadServerCertificateRequestPrivate &other, UploadServerCertificateRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
