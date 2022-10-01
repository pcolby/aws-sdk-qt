// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpolicyrequest.h"
#include "getpolicyrequest_p.h"
#include "getpolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetPolicyRequest
 * \brief The GetPolicyRequest class provides an interface for Iam GetPolicy requests.
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
 * \sa IamClient::getPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetPolicyRequest::GetPolicyRequest(const GetPolicyRequest &other)
    : IamRequest(new GetPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPolicyRequest object.
 */
GetPolicyRequest::GetPolicyRequest()
    : IamRequest(new GetPolicyRequestPrivate(IamRequest::GetPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetPolicyRequestPrivate
 * \brief The GetPolicyRequestPrivate class provides private implementation for GetPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const IamRequest::Action action, GetPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPolicyRequest
 * class' copy constructor.
 */
GetPolicyRequestPrivate::GetPolicyRequestPrivate(
    const GetPolicyRequestPrivate &other, GetPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
