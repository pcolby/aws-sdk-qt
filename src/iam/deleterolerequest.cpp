// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterolerequest.h"
#include "deleterolerequest_p.h"
#include "deleteroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteRoleRequest
 * \brief The DeleteRoleRequest class provides an interface for Iam DeleteRole requests.
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
 * \class QtAws::Iam::DeleteRoleRequestPrivate
 * \brief The DeleteRoleRequestPrivate class provides private implementation for DeleteRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIam
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

} // namespace Iam
} // namespace QtAws
