// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putuserpolicyrequest.h"
#include "putuserpolicyrequest_p.h"
#include "putuserpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::PutUserPolicyRequest
 * \brief The PutUserPolicyRequest class provides an interface for Iam PutUserPolicy requests.
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
 * \sa IamClient::putUserPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutUserPolicyRequest::PutUserPolicyRequest(const PutUserPolicyRequest &other)
    : IamRequest(new PutUserPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutUserPolicyRequest object.
 */
PutUserPolicyRequest::PutUserPolicyRequest()
    : IamRequest(new PutUserPolicyRequestPrivate(IamRequest::PutUserPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutUserPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutUserPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutUserPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutUserPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::PutUserPolicyRequestPrivate
 * \brief The PutUserPolicyRequestPrivate class provides private implementation for PutUserPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a PutUserPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
PutUserPolicyRequestPrivate::PutUserPolicyRequestPrivate(
    const IamRequest::Action action, PutUserPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutUserPolicyRequest
 * class' copy constructor.
 */
PutUserPolicyRequestPrivate::PutUserPolicyRequestPrivate(
    const PutUserPolicyRequestPrivate &other, PutUserPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
