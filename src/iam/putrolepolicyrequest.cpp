// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrolepolicyrequest.h"
#include "putrolepolicyrequest_p.h"
#include "putrolepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::PutRolePolicyRequest
 * \brief The PutRolePolicyRequest class provides an interface for Iam PutRolePolicy requests.
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
 * \sa IamClient::putRolePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutRolePolicyRequest::PutRolePolicyRequest(const PutRolePolicyRequest &other)
    : IamRequest(new PutRolePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRolePolicyRequest object.
 */
PutRolePolicyRequest::PutRolePolicyRequest()
    : IamRequest(new PutRolePolicyRequestPrivate(IamRequest::PutRolePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutRolePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRolePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRolePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutRolePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::PutRolePolicyRequestPrivate
 * \brief The PutRolePolicyRequestPrivate class provides private implementation for PutRolePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a PutRolePolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
PutRolePolicyRequestPrivate::PutRolePolicyRequestPrivate(
    const IamRequest::Action action, PutRolePolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRolePolicyRequest
 * class' copy constructor.
 */
PutRolePolicyRequestPrivate::PutRolePolicyRequestPrivate(
    const PutRolePolicyRequestPrivate &other, PutRolePolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
