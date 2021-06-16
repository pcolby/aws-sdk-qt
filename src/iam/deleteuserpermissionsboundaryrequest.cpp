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

#include "deleteuserpermissionsboundaryrequest.h"
#include "deleteuserpermissionsboundaryrequest_p.h"
#include "deleteuserpermissionsboundaryresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::DeleteUserPermissionsBoundaryRequest
 * \brief The DeleteUserPermissionsBoundaryRequest class provides an interface for IAM DeleteUserPermissionsBoundary requests.
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
 * \sa IamClient::deleteUserPermissionsBoundary
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserPermissionsBoundaryRequest::DeleteUserPermissionsBoundaryRequest(const DeleteUserPermissionsBoundaryRequest &other)
    : IamRequest(new DeleteUserPermissionsBoundaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserPermissionsBoundaryRequest object.
 */
DeleteUserPermissionsBoundaryRequest::DeleteUserPermissionsBoundaryRequest()
    : IamRequest(new DeleteUserPermissionsBoundaryRequestPrivate(IamRequest::DeleteUserPermissionsBoundaryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserPermissionsBoundaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserPermissionsBoundaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserPermissionsBoundaryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserPermissionsBoundaryResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::DeleteUserPermissionsBoundaryRequestPrivate
 * \brief The DeleteUserPermissionsBoundaryRequestPrivate class provides private implementation for DeleteUserPermissionsBoundaryRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a DeleteUserPermissionsBoundaryRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteUserPermissionsBoundaryRequestPrivate::DeleteUserPermissionsBoundaryRequestPrivate(
    const IamRequest::Action action, DeleteUserPermissionsBoundaryRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserPermissionsBoundaryRequest
 * class' copy constructor.
 */
DeleteUserPermissionsBoundaryRequestPrivate::DeleteUserPermissionsBoundaryRequestPrivate(
    const DeleteUserPermissionsBoundaryRequestPrivate &other, DeleteUserPermissionsBoundaryRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
