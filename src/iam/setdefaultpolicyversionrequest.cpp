// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setdefaultpolicyversionrequest.h"
#include "setdefaultpolicyversionrequest_p.h"
#include "setdefaultpolicyversionresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::SetDefaultPolicyVersionRequest
 * \brief The SetDefaultPolicyVersionRequest class provides an interface for Iam SetDefaultPolicyVersion requests.
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
 * \sa IamClient::setDefaultPolicyVersion
 */

/*!
 * Constructs a copy of \a other.
 */
SetDefaultPolicyVersionRequest::SetDefaultPolicyVersionRequest(const SetDefaultPolicyVersionRequest &other)
    : IamRequest(new SetDefaultPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetDefaultPolicyVersionRequest object.
 */
SetDefaultPolicyVersionRequest::SetDefaultPolicyVersionRequest()
    : IamRequest(new SetDefaultPolicyVersionRequestPrivate(IamRequest::SetDefaultPolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool SetDefaultPolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetDefaultPolicyVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetDefaultPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new SetDefaultPolicyVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::SetDefaultPolicyVersionRequestPrivate
 * \brief The SetDefaultPolicyVersionRequestPrivate class provides private implementation for SetDefaultPolicyVersionRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a SetDefaultPolicyVersionRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
SetDefaultPolicyVersionRequestPrivate::SetDefaultPolicyVersionRequestPrivate(
    const IamRequest::Action action, SetDefaultPolicyVersionRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetDefaultPolicyVersionRequest
 * class' copy constructor.
 */
SetDefaultPolicyVersionRequestPrivate::SetDefaultPolicyVersionRequestPrivate(
    const SetDefaultPolicyVersionRequestPrivate &other, SetDefaultPolicyVersionRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
