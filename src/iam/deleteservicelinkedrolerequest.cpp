// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteservicelinkedrolerequest.h"
#include "deleteservicelinkedrolerequest_p.h"
#include "deleteservicelinkedroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteServiceLinkedRoleRequest
 * \brief The DeleteServiceLinkedRoleRequest class provides an interface for Iam DeleteServiceLinkedRole requests.
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
 * \sa IamClient::deleteServiceLinkedRole
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServiceLinkedRoleRequest::DeleteServiceLinkedRoleRequest(const DeleteServiceLinkedRoleRequest &other)
    : IamRequest(new DeleteServiceLinkedRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServiceLinkedRoleRequest object.
 */
DeleteServiceLinkedRoleRequest::DeleteServiceLinkedRoleRequest()
    : IamRequest(new DeleteServiceLinkedRoleRequestPrivate(IamRequest::DeleteServiceLinkedRoleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServiceLinkedRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServiceLinkedRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceLinkedRoleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceLinkedRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeleteServiceLinkedRoleRequestPrivate
 * \brief The DeleteServiceLinkedRoleRequestPrivate class provides private implementation for DeleteServiceLinkedRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteServiceLinkedRoleRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteServiceLinkedRoleRequestPrivate::DeleteServiceLinkedRoleRequestPrivate(
    const IamRequest::Action action, DeleteServiceLinkedRoleRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceLinkedRoleRequest
 * class' copy constructor.
 */
DeleteServiceLinkedRoleRequestPrivate::DeleteServiceLinkedRoleRequestPrivate(
    const DeleteServiceLinkedRoleRequestPrivate &other, DeleteServiceLinkedRoleRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
