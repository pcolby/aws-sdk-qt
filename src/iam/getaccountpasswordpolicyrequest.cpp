// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountpasswordpolicyrequest.h"
#include "getaccountpasswordpolicyrequest_p.h"
#include "getaccountpasswordpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetAccountPasswordPolicyRequest
 * \brief The GetAccountPasswordPolicyRequest class provides an interface for Iam GetAccountPasswordPolicy requests.
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
 * \sa IamClient::getAccountPasswordPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountPasswordPolicyRequest::GetAccountPasswordPolicyRequest(const GetAccountPasswordPolicyRequest &other)
    : IamRequest(new GetAccountPasswordPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountPasswordPolicyRequest object.
 */
GetAccountPasswordPolicyRequest::GetAccountPasswordPolicyRequest()
    : IamRequest(new GetAccountPasswordPolicyRequestPrivate(IamRequest::GetAccountPasswordPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountPasswordPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountPasswordPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountPasswordPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountPasswordPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetAccountPasswordPolicyRequestPrivate
 * \brief The GetAccountPasswordPolicyRequestPrivate class provides private implementation for GetAccountPasswordPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetAccountPasswordPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetAccountPasswordPolicyRequestPrivate::GetAccountPasswordPolicyRequestPrivate(
    const IamRequest::Action action, GetAccountPasswordPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountPasswordPolicyRequest
 * class' copy constructor.
 */
GetAccountPasswordPolicyRequestPrivate::GetAccountPasswordPolicyRequestPrivate(
    const GetAccountPasswordPolicyRequestPrivate &other, GetAccountPasswordPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
