// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getpolicyversionrequest.h"
#include "getpolicyversionrequest_p.h"
#include "getpolicyversionresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetPolicyVersionRequest
 * \brief The GetPolicyVersionRequest class provides an interface for Iam GetPolicyVersion requests.
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
 * \sa IamClient::getPolicyVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetPolicyVersionRequest::GetPolicyVersionRequest(const GetPolicyVersionRequest &other)
    : IamRequest(new GetPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetPolicyVersionRequest object.
 */
GetPolicyVersionRequest::GetPolicyVersionRequest()
    : IamRequest(new GetPolicyVersionRequestPrivate(IamRequest::GetPolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetPolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetPolicyVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetPolicyVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetPolicyVersionRequestPrivate
 * \brief The GetPolicyVersionRequestPrivate class provides private implementation for GetPolicyVersionRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetPolicyVersionRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetPolicyVersionRequestPrivate::GetPolicyVersionRequestPrivate(
    const IamRequest::Action action, GetPolicyVersionRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetPolicyVersionRequest
 * class' copy constructor.
 */
GetPolicyVersionRequestPrivate::GetPolicyVersionRequestPrivate(
    const GetPolicyVersionRequestPrivate &other, GetPolicyVersionRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
