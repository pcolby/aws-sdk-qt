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

#include "getaccountpasswordpolicyrequest.h"
#include "getaccountpasswordpolicyrequest_p.h"
#include "getaccountpasswordpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::GetAccountPasswordPolicyRequest
 * \brief The GetAccountPasswordPolicyRequest class provides an interface for IAM GetAccountPasswordPolicy requests.
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
 * \class QtAws::IAM::GetAccountPasswordPolicyRequestPrivate
 * \brief The GetAccountPasswordPolicyRequestPrivate class provides private implementation for GetAccountPasswordPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
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

} // namespace IAM
} // namespace QtAws
