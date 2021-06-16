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

#include "untagsamlproviderrequest.h"
#include "untagsamlproviderrequest_p.h"
#include "untagsamlproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::UntagSAMLProviderRequest
 * \brief The UntagSAMLProviderRequest class provides an interface for IAM UntagSAMLProvider requests.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::untagSAMLProvider
 */

/*!
 * Constructs a copy of \a other.
 */
UntagSAMLProviderRequest::UntagSAMLProviderRequest(const UntagSAMLProviderRequest &other)
    : IamRequest(new UntagSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagSAMLProviderRequest object.
 */
UntagSAMLProviderRequest::UntagSAMLProviderRequest()
    : IamRequest(new UntagSAMLProviderRequestPrivate(IamRequest::UntagSAMLProviderAction, this))
{

}

/*!
 * \reimp
 */
bool UntagSAMLProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagSAMLProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new UntagSAMLProviderResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::UntagSAMLProviderRequestPrivate
 * \brief The UntagSAMLProviderRequestPrivate class provides private implementation for UntagSAMLProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a UntagSAMLProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagSAMLProviderRequestPrivate::UntagSAMLProviderRequestPrivate(
    const IamRequest::Action action, UntagSAMLProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagSAMLProviderRequest
 * class' copy constructor.
 */
UntagSAMLProviderRequestPrivate::UntagSAMLProviderRequestPrivate(
    const UntagSAMLProviderRequestPrivate &other, UntagSAMLProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
