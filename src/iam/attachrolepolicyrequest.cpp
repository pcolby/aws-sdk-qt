// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachrolepolicyrequest.h"
#include "attachrolepolicyrequest_p.h"
#include "attachrolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AttachRolePolicyRequest
 * \brief The AttachRolePolicyRequest class provides an interface for Iam AttachRolePolicy requests.
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
 * \sa IamClient::attachRolePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
AttachRolePolicyRequest::AttachRolePolicyRequest(const AttachRolePolicyRequest &other)
    : IamRequest(new AttachRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachRolePolicyRequest object.
 */
AttachRolePolicyRequest::AttachRolePolicyRequest()
    : IamRequest(new AttachRolePolicyRequestPrivate(IamRequest::AttachRolePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool AttachRolePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachRolePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachRolePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::AttachRolePolicyRequestPrivate
 * \brief The AttachRolePolicyRequestPrivate class provides private implementation for AttachRolePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AttachRolePolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
AttachRolePolicyRequestPrivate::AttachRolePolicyRequestPrivate(
    const IamRequest::Action action, AttachRolePolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachRolePolicyRequest
 * class' copy constructor.
 */
AttachRolePolicyRequestPrivate::AttachRolePolicyRequestPrivate(
    const AttachRolePolicyRequestPrivate &other, AttachRolePolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
