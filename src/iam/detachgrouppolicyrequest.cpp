// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detachgrouppolicyrequest.h"
#include "detachgrouppolicyrequest_p.h"
#include "detachgrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DetachGroupPolicyRequest
 * \brief The DetachGroupPolicyRequest class provides an interface for Iam DetachGroupPolicy requests.
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
 * \sa IamClient::detachGroupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DetachGroupPolicyRequest::DetachGroupPolicyRequest(const DetachGroupPolicyRequest &other)
    : IamRequest(new DetachGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachGroupPolicyRequest object.
 */
DetachGroupPolicyRequest::DetachGroupPolicyRequest()
    : IamRequest(new DetachGroupPolicyRequestPrivate(IamRequest::DetachGroupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DetachGroupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachGroupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DetachGroupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DetachGroupPolicyRequestPrivate
 * \brief The DetachGroupPolicyRequestPrivate class provides private implementation for DetachGroupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DetachGroupPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DetachGroupPolicyRequestPrivate::DetachGroupPolicyRequestPrivate(
    const IamRequest::Action action, DetachGroupPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachGroupPolicyRequest
 * class' copy constructor.
 */
DetachGroupPolicyRequestPrivate::DetachGroupPolicyRequestPrivate(
    const DetachGroupPolicyRequestPrivate &other, DetachGroupPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
