/*
    Copyright 2013-2020 Paul Colby

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

#include "getbucketpolicyrequest.h"
#include "getbucketpolicyrequest_p.h"
#include "getbucketpolicyresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketPolicyRequest
 * \brief The GetBucketPolicyRequest class provides an interface for S3 GetBucketPolicy requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketPolicyRequest::GetBucketPolicyRequest(const GetBucketPolicyRequest &other)
    : S3Request(new GetBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketPolicyRequest object.
 */
GetBucketPolicyRequest::GetBucketPolicyRequest()
    : S3Request(new GetBucketPolicyRequestPrivate(S3Request::GetBucketPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketPolicyRequestPrivate
 * \brief The GetBucketPolicyRequestPrivate class provides private implementation for GetBucketPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketPolicyRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketPolicyRequestPrivate::GetBucketPolicyRequestPrivate(
    const S3Request::Action action, GetBucketPolicyRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketPolicyRequest
 * class' copy constructor.
 */
GetBucketPolicyRequestPrivate::GetBucketPolicyRequestPrivate(
    const GetBucketPolicyRequestPrivate &other, GetBucketPolicyRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
