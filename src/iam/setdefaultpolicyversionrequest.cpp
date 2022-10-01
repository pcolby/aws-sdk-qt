/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
