// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detachuserpolicyrequest.h"
#include "detachuserpolicyrequest_p.h"
#include "detachuserpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DetachUserPolicyRequest
 * \brief The DetachUserPolicyRequest class provides an interface for Iam DetachUserPolicy requests.
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
 * \sa IamClient::detachUserPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DetachUserPolicyRequest::DetachUserPolicyRequest(const DetachUserPolicyRequest &other)
    : IamRequest(new DetachUserPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachUserPolicyRequest object.
 */
DetachUserPolicyRequest::DetachUserPolicyRequest()
    : IamRequest(new DetachUserPolicyRequestPrivate(IamRequest::DetachUserPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DetachUserPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachUserPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachUserPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DetachUserPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DetachUserPolicyRequestPrivate
 * \brief The DetachUserPolicyRequestPrivate class provides private implementation for DetachUserPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DetachUserPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DetachUserPolicyRequestPrivate::DetachUserPolicyRequestPrivate(
    const IamRequest::Action action, DetachUserPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachUserPolicyRequest
 * class' copy constructor.
 */
DetachUserPolicyRequestPrivate::DetachUserPolicyRequestPrivate(
    const DetachUserPolicyRequestPrivate &other, DetachUserPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
