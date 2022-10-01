// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateservercertificaterequest.h"
#include "updateservercertificaterequest_p.h"
#include "updateservercertificateresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateServerCertificateRequest
 * \brief The UpdateServerCertificateRequest class provides an interface for Iam UpdateServerCertificate requests.
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
 * \sa IamClient::updateServerCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServerCertificateRequest::UpdateServerCertificateRequest(const UpdateServerCertificateRequest &other)
    : IamRequest(new UpdateServerCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServerCertificateRequest object.
 */
UpdateServerCertificateRequest::UpdateServerCertificateRequest()
    : IamRequest(new UpdateServerCertificateRequestPrivate(IamRequest::UpdateServerCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServerCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServerCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServerCertificateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServerCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateServerCertificateRequestPrivate
 * \brief The UpdateServerCertificateRequestPrivate class provides private implementation for UpdateServerCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateServerCertificateRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateServerCertificateRequestPrivate::UpdateServerCertificateRequestPrivate(
    const IamRequest::Action action, UpdateServerCertificateRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServerCertificateRequest
 * class' copy constructor.
 */
UpdateServerCertificateRequestPrivate::UpdateServerCertificateRequestPrivate(
    const UpdateServerCertificateRequestPrivate &other, UpdateServerCertificateRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
