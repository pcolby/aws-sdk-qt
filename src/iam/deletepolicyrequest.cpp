// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepolicyrequest.h"
#include "deletepolicyrequest_p.h"
#include "deletepolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeletePolicyRequest
 * \brief The DeletePolicyRequest class provides an interface for Iam DeletePolicy requests.
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
 * \sa IamClient::deletePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePolicyRequest::DeletePolicyRequest(const DeletePolicyRequest &other)
    : IamRequest(new DeletePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePolicyRequest object.
 */
DeletePolicyRequest::DeletePolicyRequest()
    : IamRequest(new DeletePolicyRequestPrivate(IamRequest::DeletePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeletePolicyRequestPrivate
 * \brief The DeletePolicyRequestPrivate class provides private implementation for DeletePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeletePolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const IamRequest::Action action, DeletePolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePolicyRequest
 * class' copy constructor.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const DeletePolicyRequestPrivate &other, DeletePolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
