// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putgrouppolicyrequest.h"
#include "putgrouppolicyrequest_p.h"
#include "putgrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::PutGroupPolicyRequest
 * \brief The PutGroupPolicyRequest class provides an interface for Iam PutGroupPolicy requests.
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
 * \sa IamClient::putGroupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutGroupPolicyRequest::PutGroupPolicyRequest(const PutGroupPolicyRequest &other)
    : IamRequest(new PutGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutGroupPolicyRequest object.
 */
PutGroupPolicyRequest::PutGroupPolicyRequest()
    : IamRequest(new PutGroupPolicyRequestPrivate(IamRequest::PutGroupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutGroupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutGroupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutGroupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::PutGroupPolicyRequestPrivate
 * \brief The PutGroupPolicyRequestPrivate class provides private implementation for PutGroupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a PutGroupPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
PutGroupPolicyRequestPrivate::PutGroupPolicyRequestPrivate(
    const IamRequest::Action action, PutGroupPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutGroupPolicyRequest
 * class' copy constructor.
 */
PutGroupPolicyRequestPrivate::PutGroupPolicyRequestPrivate(
    const PutGroupPolicyRequestPrivate &other, PutGroupPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
