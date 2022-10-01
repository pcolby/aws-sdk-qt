// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagpolicyrequest.h"
#include "untagpolicyrequest_p.h"
#include "untagpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagPolicyRequest
 * \brief The UntagPolicyRequest class provides an interface for Iam UntagPolicy requests.
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
 * \sa IamClient::untagPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UntagPolicyRequest::UntagPolicyRequest(const UntagPolicyRequest &other)
    : IamRequest(new UntagPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagPolicyRequest object.
 */
UntagPolicyRequest::UntagPolicyRequest()
    : IamRequest(new UntagPolicyRequestPrivate(IamRequest::UntagPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UntagPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagPolicyRequest::response(QNetworkReply * const reply) const
{
    return new UntagPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UntagPolicyRequestPrivate
 * \brief The UntagPolicyRequestPrivate class provides private implementation for UntagPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagPolicyRequestPrivate::UntagPolicyRequestPrivate(
    const IamRequest::Action action, UntagPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagPolicyRequest
 * class' copy constructor.
 */
UntagPolicyRequestPrivate::UntagPolicyRequestPrivate(
    const UntagPolicyRequestPrivate &other, UntagPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
