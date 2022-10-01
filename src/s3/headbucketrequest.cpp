// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "headbucketrequest.h"
#include "headbucketrequest_p.h"
#include "headbucketresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::HeadBucketRequest
 * \brief The HeadBucketRequest class provides an interface for S3 HeadBucket requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::headBucket
 */

/*!
 * Constructs a copy of \a other.
 */
HeadBucketRequest::HeadBucketRequest(const HeadBucketRequest &other)
    : S3Request(new HeadBucketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a HeadBucketRequest object.
 */
HeadBucketRequest::HeadBucketRequest()
    : S3Request(new HeadBucketRequestPrivate(S3Request::HeadBucketAction, this))
{

}

/*!
 * \reimp
 */
bool HeadBucketRequest::isValid() const
{
    return false;
}


/*!
 * Returns a HeadBucketResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * HeadBucketRequest::response(QNetworkReply * const reply) const
{
    return new HeadBucketResponse(*this, reply);
}

/*!
 * \class QtAws::S3::HeadBucketRequestPrivate
 * \brief The HeadBucketRequestPrivate class provides private implementation for HeadBucketRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a HeadBucketRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
HeadBucketRequestPrivate::HeadBucketRequestPrivate(
    const S3Request::Action action, HeadBucketRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the HeadBucketRequest
 * class' copy constructor.
 */
HeadBucketRequestPrivate::HeadBucketRequestPrivate(
    const HeadBucketRequestPrivate &other, HeadBucketRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
