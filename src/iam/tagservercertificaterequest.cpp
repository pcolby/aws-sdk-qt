// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagservercertificaterequest.h"
#include "tagservercertificaterequest_p.h"
#include "tagservercertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagServerCertificateRequest
 * \brief The TagServerCertificateRequest class provides an interface for Iam TagServerCertificate requests.
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
 * \sa IamClient::tagServerCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
TagServerCertificateRequest::TagServerCertificateRequest(const TagServerCertificateRequest &other)
    : IamRequest(new TagServerCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagServerCertificateRequest object.
 */
TagServerCertificateRequest::TagServerCertificateRequest()
    : IamRequest(new TagServerCertificateRequestPrivate(IamRequest::TagServerCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool TagServerCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagServerCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagServerCertificateRequest::response(QNetworkReply * const reply) const
{
    return new TagServerCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::TagServerCertificateRequestPrivate
 * \brief The TagServerCertificateRequestPrivate class provides private implementation for TagServerCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagServerCertificateRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
TagServerCertificateRequestPrivate::TagServerCertificateRequestPrivate(
    const IamRequest::Action action, TagServerCertificateRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagServerCertificateRequest
 * class' copy constructor.
 */
TagServerCertificateRequestPrivate::TagServerCertificateRequestPrivate(
    const TagServerCertificateRequestPrivate &other, TagServerCertificateRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
