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

#include "getrolepolicyrequest.h"
#include "getrolepolicyrequest_p.h"
#include "getrolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetRolePolicyRequest
 * \brief The GetRolePolicyRequest class provides an interface for Iam GetRolePolicy requests.
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
 * \sa IamClient::getRolePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetRolePolicyRequest::GetRolePolicyRequest(const GetRolePolicyRequest &other)
    : IamRequest(new GetRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRolePolicyRequest object.
 */
GetRolePolicyRequest::GetRolePolicyRequest()
    : IamRequest(new GetRolePolicyRequestPrivate(IamRequest::GetRolePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetRolePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRolePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetRolePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetRolePolicyRequestPrivate
 * \brief The GetRolePolicyRequestPrivate class provides private implementation for GetRolePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetRolePolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetRolePolicyRequestPrivate::GetRolePolicyRequestPrivate(
    const IamRequest::Action action, GetRolePolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRolePolicyRequest
 * class' copy constructor.
 */
GetRolePolicyRequestPrivate::GetRolePolicyRequestPrivate(
    const GetRolePolicyRequestPrivate &other, GetRolePolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
