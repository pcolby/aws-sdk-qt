// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagservercertificaterequest.h"
#include "untagservercertificaterequest_p.h"
#include "untagservercertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagServerCertificateRequest
 * \brief The UntagServerCertificateRequest class provides an interface for Iam UntagServerCertificate requests.
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
 * \sa IamClient::untagServerCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
UntagServerCertificateRequest::UntagServerCertificateRequest(const UntagServerCertificateRequest &other)
    : IamRequest(new UntagServerCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagServerCertificateRequest object.
 */
UntagServerCertificateRequest::UntagServerCertificateRequest()
    : IamRequest(new UntagServerCertificateRequestPrivate(IamRequest::UntagServerCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool UntagServerCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagServerCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagServerCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UntagServerCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UntagServerCertificateRequestPrivate
 * \brief The UntagServerCertificateRequestPrivate class provides private implementation for UntagServerCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagServerCertificateRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagServerCertificateRequestPrivate::UntagServerCertificateRequestPrivate(
    const IamRequest::Action action, UntagServerCertificateRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagServerCertificateRequest
 * class' copy constructor.
 */
UntagServerCertificateRequestPrivate::UntagServerCertificateRequestPrivate(
    const UntagServerCertificateRequestPrivate &other, UntagServerCertificateRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
