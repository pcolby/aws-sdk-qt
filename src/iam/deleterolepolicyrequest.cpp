// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterolepolicyrequest.h"
#include "deleterolepolicyrequest_p.h"
#include "deleterolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteRolePolicyRequest
 * \brief The DeleteRolePolicyRequest class provides an interface for Iam DeleteRolePolicy requests.
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
 * \sa IamClient::deleteRolePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRolePolicyRequest::DeleteRolePolicyRequest(const DeleteRolePolicyRequest &other)
    : IamRequest(new DeleteRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRolePolicyRequest object.
 */
DeleteRolePolicyRequest::DeleteRolePolicyRequest()
    : IamRequest(new DeleteRolePolicyRequestPrivate(IamRequest::DeleteRolePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRolePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRolePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRolePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeleteRolePolicyRequestPrivate
 * \brief The DeleteRolePolicyRequestPrivate class provides private implementation for DeleteRolePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteRolePolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteRolePolicyRequestPrivate::DeleteRolePolicyRequestPrivate(
    const IamRequest::Action action, DeleteRolePolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRolePolicyRequest
 * class' copy constructor.
 */
DeleteRolePolicyRequestPrivate::DeleteRolePolicyRequestPrivate(
    const DeleteRolePolicyRequestPrivate &other, DeleteRolePolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
