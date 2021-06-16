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

#include "untaginstanceprofilerequest.h"
#include "untaginstanceprofilerequest_p.h"
#include "untaginstanceprofileresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::UntagInstanceProfileRequest
 * \brief The UntagInstanceProfileRequest class provides an interface for IAM UntagInstanceProfile requests.
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
 * \sa IamClient::untagInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UntagInstanceProfileRequest::UntagInstanceProfileRequest(const UntagInstanceProfileRequest &other)
    : IamRequest(new UntagInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagInstanceProfileRequest object.
 */
UntagInstanceProfileRequest::UntagInstanceProfileRequest()
    : IamRequest(new UntagInstanceProfileRequestPrivate(IamRequest::UntagInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UntagInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new UntagInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::UntagInstanceProfileRequestPrivate
 * \brief The UntagInstanceProfileRequestPrivate class provides private implementation for UntagInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a UntagInstanceProfileRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagInstanceProfileRequestPrivate::UntagInstanceProfileRequestPrivate(
    const IamRequest::Action action, UntagInstanceProfileRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagInstanceProfileRequest
 * class' copy constructor.
 */
UntagInstanceProfileRequestPrivate::UntagInstanceProfileRequestPrivate(
    const UntagInstanceProfileRequestPrivate &other, UntagInstanceProfileRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
