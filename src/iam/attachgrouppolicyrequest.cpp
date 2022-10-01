// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachgrouppolicyrequest.h"
#include "attachgrouppolicyrequest_p.h"
#include "attachgrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AttachGroupPolicyRequest
 * \brief The AttachGroupPolicyRequest class provides an interface for Iam AttachGroupPolicy requests.
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
 * \sa IamClient::attachGroupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
AttachGroupPolicyRequest::AttachGroupPolicyRequest(const AttachGroupPolicyRequest &other)
    : IamRequest(new AttachGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachGroupPolicyRequest object.
 */
AttachGroupPolicyRequest::AttachGroupPolicyRequest()
    : IamRequest(new AttachGroupPolicyRequestPrivate(IamRequest::AttachGroupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool AttachGroupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachGroupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new AttachGroupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::AttachGroupPolicyRequestPrivate
 * \brief The AttachGroupPolicyRequestPrivate class provides private implementation for AttachGroupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AttachGroupPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
AttachGroupPolicyRequestPrivate::AttachGroupPolicyRequestPrivate(
    const IamRequest::Action action, AttachGroupPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachGroupPolicyRequest
 * class' copy constructor.
 */
AttachGroupPolicyRequestPrivate::AttachGroupPolicyRequestPrivate(
    const AttachGroupPolicyRequestPrivate &other, AttachGroupPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
