/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcontextkeysforprincipalpolicyrequest.h"
#include "getcontextkeysforprincipalpolicyrequest_p.h"
#include "getcontextkeysforprincipalpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::GetContextKeysForPrincipalPolicyRequest
 * \brief The GetContextKeysForPrincipalPolicyRequest class provides an interface for IAM GetContextKeysForPrincipalPolicy requests.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
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
 * \class QtAws::IAM::GetContextKeysForPrincipalPolicyRequestPrivate
 * \brief The GetContextKeysForPrincipalPolicyRequestPrivate class provides private implementation for GetContextKeysForPrincipalPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
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

} // namespace IAM
} // namespace QtAws
