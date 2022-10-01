// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketaclrequest.h"
#include "getbucketaclrequest_p.h"
#include "getbucketaclresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketAclRequest
 * \brief The GetBucketAclRequest class provides an interface for S3 GetBucketAcl requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketAcl
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketAclRequest::GetBucketAclRequest(const GetBucketAclRequest &other)
    : S3Request(new GetBucketAclRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketAclRequest object.
 */
GetBucketAclRequest::GetBucketAclRequest()
    : S3Request(new GetBucketAclRequestPrivate(S3Request::GetBucketAclAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketAclRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketAclResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketAclRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketAclResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketAclRequestPrivate
 * \brief The GetBucketAclRequestPrivate class provides private implementation for GetBucketAclRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketAclRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketAclRequestPrivate::GetBucketAclRequestPrivate(
    const S3Request::Action action, GetBucketAclRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketAclRequest
 * class' copy constructor.
 */
GetBucketAclRequestPrivate::GetBucketAclRequestPrivate(
    const GetBucketAclRequestPrivate &other, GetBucketAclRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
