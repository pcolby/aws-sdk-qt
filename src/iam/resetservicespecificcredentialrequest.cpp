// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetservicespecificcredentialrequest.h"
#include "resetservicespecificcredentialrequest_p.h"
#include "resetservicespecificcredentialresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ResetServiceSpecificCredentialRequest
 * \brief The ResetServiceSpecificCredentialRequest class provides an interface for Iam ResetServiceSpecificCredential requests.
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
 * \sa IamClient::resetServiceSpecificCredential
 */

/*!
 * Constructs a copy of \a other.
 */
ResetServiceSpecificCredentialRequest::ResetServiceSpecificCredentialRequest(const ResetServiceSpecificCredentialRequest &other)
    : IamRequest(new ResetServiceSpecificCredentialRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetServiceSpecificCredentialRequest object.
 */
ResetServiceSpecificCredentialRequest::ResetServiceSpecificCredentialRequest()
    : IamRequest(new ResetServiceSpecificCredentialRequestPrivate(IamRequest::ResetServiceSpecificCredentialAction, this))
{

}

/*!
 * \reimp
 */
bool ResetServiceSpecificCredentialRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetServiceSpecificCredentialResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetServiceSpecificCredentialRequest::response(QNetworkReply * const reply) const
{
    return new ResetServiceSpecificCredentialResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ResetServiceSpecificCredentialRequestPrivate
 * \brief The ResetServiceSpecificCredentialRequestPrivate class provides private implementation for ResetServiceSpecificCredentialRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ResetServiceSpecificCredentialRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ResetServiceSpecificCredentialRequestPrivate::ResetServiceSpecificCredentialRequestPrivate(
    const IamRequest::Action action, ResetServiceSpecificCredentialRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetServiceSpecificCredentialRequest
 * class' copy constructor.
 */
ResetServiceSpecificCredentialRequestPrivate::ResetServiceSpecificCredentialRequestPrivate(
    const ResetServiceSpecificCredentialRequestPrivate &other, ResetServiceSpecificCredentialRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
