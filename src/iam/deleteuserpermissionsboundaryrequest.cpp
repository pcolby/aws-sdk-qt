// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteuserpermissionsboundaryrequest.h"
#include "deleteuserpermissionsboundaryrequest_p.h"
#include "deleteuserpermissionsboundaryresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteUserPermissionsBoundaryRequest
 * \brief The DeleteUserPermissionsBoundaryRequest class provides an interface for Iam DeleteUserPermissionsBoundary requests.
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
 * \class QtAws::Iam::DeleteUserPermissionsBoundaryRequestPrivate
 * \brief The DeleteUserPermissionsBoundaryRequestPrivate class provides private implementation for DeleteUserPermissionsBoundaryRequest.
 * \internal
 *
 * \inmodule QtAwsIam
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

} // namespace Iam
} // namespace QtAws
