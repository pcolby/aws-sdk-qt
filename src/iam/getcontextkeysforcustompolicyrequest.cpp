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

#include "getcontextkeysforcustompolicyrequest.h"
#include "getcontextkeysforcustompolicyrequest_p.h"
#include "getcontextkeysforcustompolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::GetContextKeysForCustomPolicyRequest
 * \brief The GetContextKeysForCustomPolicyRequest class provides an interface for IAM GetContextKeysForCustomPolicy requests.
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
 * \class QtAws::IAM::GetContextKeysForCustomPolicyRequestPrivate
 * \brief The GetContextKeysForCustomPolicyRequestPrivate class provides private implementation for GetContextKeysForCustomPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
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

} // namespace IAM
} // namespace QtAws
