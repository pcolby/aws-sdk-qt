// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateservicespecificcredentialrequest.h"
#include "updateservicespecificcredentialrequest_p.h"
#include "updateservicespecificcredentialresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateServiceSpecificCredentialRequest
 * \brief The UpdateServiceSpecificCredentialRequest class provides an interface for Iam UpdateServiceSpecificCredential requests.
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
 * \sa IamClient::updateServiceSpecificCredential
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateServiceSpecificCredentialRequest::UpdateServiceSpecificCredentialRequest(const UpdateServiceSpecificCredentialRequest &other)
    : IamRequest(new UpdateServiceSpecificCredentialRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateServiceSpecificCredentialRequest object.
 */
UpdateServiceSpecificCredentialRequest::UpdateServiceSpecificCredentialRequest()
    : IamRequest(new UpdateServiceSpecificCredentialRequestPrivate(IamRequest::UpdateServiceSpecificCredentialAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateServiceSpecificCredentialRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateServiceSpecificCredentialResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateServiceSpecificCredentialRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServiceSpecificCredentialResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateServiceSpecificCredentialRequestPrivate
 * \brief The UpdateServiceSpecificCredentialRequestPrivate class provides private implementation for UpdateServiceSpecificCredentialRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateServiceSpecificCredentialRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateServiceSpecificCredentialRequestPrivate::UpdateServiceSpecificCredentialRequestPrivate(
    const IamRequest::Action action, UpdateServiceSpecificCredentialRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateServiceSpecificCredentialRequest
 * class' copy constructor.
 */
UpdateServiceSpecificCredentialRequestPrivate::UpdateServiceSpecificCredentialRequestPrivate(
    const UpdateServiceSpecificCredentialRequestPrivate &other, UpdateServiceSpecificCredentialRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
