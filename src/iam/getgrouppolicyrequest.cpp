// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgrouppolicyrequest.h"
#include "getgrouppolicyrequest_p.h"
#include "getgrouppolicyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetGroupPolicyRequest
 * \brief The GetGroupPolicyRequest class provides an interface for Iam GetGroupPolicy requests.
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
 * \sa IamClient::getGroupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupPolicyRequest::GetGroupPolicyRequest(const GetGroupPolicyRequest &other)
    : IamRequest(new GetGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupPolicyRequest object.
 */
GetGroupPolicyRequest::GetGroupPolicyRequest()
    : IamRequest(new GetGroupPolicyRequestPrivate(IamRequest::GetGroupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetGroupPolicyRequestPrivate
 * \brief The GetGroupPolicyRequestPrivate class provides private implementation for GetGroupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetGroupPolicyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetGroupPolicyRequestPrivate::GetGroupPolicyRequestPrivate(
    const IamRequest::Action action, GetGroupPolicyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupPolicyRequest
 * class' copy constructor.
 */
GetGroupPolicyRequestPrivate::GetGroupPolicyRequestPrivate(
    const GetGroupPolicyRequestPrivate &other, GetGroupPolicyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
