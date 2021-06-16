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

#include "deleterolerequest.h"
#include "deleterolerequest_p.h"
#include "deleteroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::DeleteRoleRequest
 * \brief The DeleteRoleRequest class provides an interface for IAM DeleteRole requests.
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
 * \sa IamClient::deleteRole
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRoleRequest::DeleteRoleRequest(const DeleteRoleRequest &other)
    : IamRequest(new DeleteRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRoleRequest object.
 */
DeleteRoleRequest::DeleteRoleRequest()
    : IamRequest(new DeleteRoleRequestPrivate(IamRequest::DeleteRoleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRoleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRoleResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::DeleteRoleRequestPrivate
 * \brief The DeleteRoleRequestPrivate class provides private implementation for DeleteRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a DeleteRoleRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteRoleRequestPrivate::DeleteRoleRequestPrivate(
    const IamRequest::Action action, DeleteRoleRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRoleRequest
 * class' copy constructor.
 */
DeleteRoleRequestPrivate::DeleteRoleRequestPrivate(
    const DeleteRoleRequestPrivate &other, DeleteRoleRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
