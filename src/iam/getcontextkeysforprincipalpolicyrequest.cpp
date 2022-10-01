// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontextkeysforprincipalpolicyrequest.h"
#include "getcontextkeysforprincipalpolicyrequest_p.h"
#include "getcontextkeysforprincipalpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetContextKeysForPrincipalPolicyRequest
 * \brief The GetContextKeysForPrincipalPolicyRequest class provides an interface for Iam GetContextKeysForPrincipalPolicy requests.
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
 * \sa IamClient::getContextKeysForPrincipalPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetContextKeysForPrincipalPolicyRequest::GetContextKeysForPrincipalPolicyRequest(const GetContextKeysForPrincipalPolicyRequest &other)
    : IamRequest(new GetContextKeysForPrincipalPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContextKeysForPrincipalPolicyRequest object.
 */
GetContextKeysForPrincipalPolicyRequest::GetContextKeysForPrincipalPolicyRequest()
    : IamRequest(new GetContextKeysForPrincipalPolicyRequestPrivate(IamRequest::GetContextKeysForPrincipalPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetContextKeysForPrincipalPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContextKeysForPrincipalPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContextKeysForPrincipalPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContextKeysForPrincipalPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetContextKeysForPrincipalPolicyRequestPrivate
 * \brief The GetContextKeysForPrincipalPolicyRequestPrivate class provides private implementation for GetContextKeysForPrincipalPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetContextKeysForPrincipalPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetContextKeysForPrincipalPolicyRequestPrivate::GetContextKeysForPrincipalPolicyRequestPrivate(
    const IamRequest::Action action, GetContextKeysForPrincipalPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContextKeysForPrincipalPolicyRequest
 * class' copy constructor.
 */
GetContextKeysForPrincipalPolicyRequestPrivate::GetContextKeysForPrincipalPolicyRequestPrivate(
    const GetContextKeysForPrincipalPolicyRequestPrivate &other, GetContextKeysForPrincipalPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
