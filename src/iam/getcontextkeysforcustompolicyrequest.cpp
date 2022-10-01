// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontextkeysforcustompolicyrequest.h"
#include "getcontextkeysforcustompolicyrequest_p.h"
#include "getcontextkeysforcustompolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetContextKeysForCustomPolicyRequest
 * \brief The GetContextKeysForCustomPolicyRequest class provides an interface for Iam GetContextKeysForCustomPolicy requests.
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
 * \sa IamClient::getContextKeysForCustomPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetContextKeysForCustomPolicyRequest::GetContextKeysForCustomPolicyRequest(const GetContextKeysForCustomPolicyRequest &other)
    : IamRequest(new GetContextKeysForCustomPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContextKeysForCustomPolicyRequest object.
 */
GetContextKeysForCustomPolicyRequest::GetContextKeysForCustomPolicyRequest()
    : IamRequest(new GetContextKeysForCustomPolicyRequestPrivate(IamRequest::GetContextKeysForCustomPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetContextKeysForCustomPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContextKeysForCustomPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContextKeysForCustomPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContextKeysForCustomPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetContextKeysForCustomPolicyRequestPrivate
 * \brief The GetContextKeysForCustomPolicyRequestPrivate class provides private implementation for GetContextKeysForCustomPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetContextKeysForCustomPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetContextKeysForCustomPolicyRequestPrivate::GetContextKeysForCustomPolicyRequestPrivate(
    const IamRequest::Action action, GetContextKeysForCustomPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContextKeysForCustomPolicyRequest
 * class' copy constructor.
 */
GetContextKeysForCustomPolicyRequestPrivate::GetContextKeysForCustomPolicyRequestPrivate(
    const GetContextKeysForCustomPolicyRequestPrivate &other, GetContextKeysForCustomPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
