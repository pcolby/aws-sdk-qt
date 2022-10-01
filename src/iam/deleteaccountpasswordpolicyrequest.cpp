// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccountpasswordpolicyrequest.h"
#include "deleteaccountpasswordpolicyrequest_p.h"
#include "deleteaccountpasswordpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteAccountPasswordPolicyRequest
 * \brief The DeleteAccountPasswordPolicyRequest class provides an interface for Iam DeleteAccountPasswordPolicy requests.
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
 * \sa IamClient::deleteAccountPasswordPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccountPasswordPolicyRequest::DeleteAccountPasswordPolicyRequest(const DeleteAccountPasswordPolicyRequest &other)
    : IamRequest(new DeleteAccountPasswordPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccountPasswordPolicyRequest object.
 */
DeleteAccountPasswordPolicyRequest::DeleteAccountPasswordPolicyRequest()
    : IamRequest(new DeleteAccountPasswordPolicyRequestPrivate(IamRequest::DeleteAccountPasswordPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccountPasswordPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccountPasswordPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccountPasswordPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccountPasswordPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeleteAccountPasswordPolicyRequestPrivate
 * \brief The DeleteAccountPasswordPolicyRequestPrivate class provides private implementation for DeleteAccountPasswordPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteAccountPasswordPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteAccountPasswordPolicyRequestPrivate::DeleteAccountPasswordPolicyRequestPrivate(
    const IamRequest::Action action, DeleteAccountPasswordPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccountPasswordPolicyRequest
 * class' copy constructor.
 */
DeleteAccountPasswordPolicyRequestPrivate::DeleteAccountPasswordPolicyRequestPrivate(
    const DeleteAccountPasswordPolicyRequestPrivate &other, DeleteAccountPasswordPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
