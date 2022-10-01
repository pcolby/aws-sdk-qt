// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterolerequest.h"
#include "updaterolerequest_p.h"
#include "updateroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateRoleRequest
 * \brief The UpdateRoleRequest class provides an interface for Iam UpdateRole requests.
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
 * \sa IamClient::updateRole
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRoleRequest::UpdateRoleRequest(const UpdateRoleRequest &other)
    : IamRequest(new UpdateRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRoleRequest object.
 */
UpdateRoleRequest::UpdateRoleRequest()
    : IamRequest(new UpdateRoleRequestPrivate(IamRequest::UpdateRoleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRoleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateRoleRequestPrivate
 * \brief The UpdateRoleRequestPrivate class provides private implementation for UpdateRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateRoleRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateRoleRequestPrivate::UpdateRoleRequestPrivate(
    const IamRequest::Action action, UpdateRoleRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRoleRequest
 * class' copy constructor.
 */
UpdateRoleRequestPrivate::UpdateRoleRequestPrivate(
    const UpdateRoleRequestPrivate &other, UpdateRoleRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
