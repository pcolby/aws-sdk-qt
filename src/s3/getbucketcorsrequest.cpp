// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketcorsrequest.h"
#include "getbucketcorsrequest_p.h"
#include "getbucketcorsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketCorsRequest
 * \brief The GetBucketCorsRequest class provides an interface for S3 GetBucketCors requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketCors
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketCorsRequest::GetBucketCorsRequest(const GetBucketCorsRequest &other)
    : S3Request(new GetBucketCorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketCorsRequest object.
 */
GetBucketCorsRequest::GetBucketCorsRequest()
    : S3Request(new GetBucketCorsRequestPrivate(S3Request::GetBucketCorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketCorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketCorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketCorsRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketCorsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketCorsRequestPrivate
 * \brief The GetBucketCorsRequestPrivate class provides private implementation for GetBucketCorsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketCorsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketCorsRequestPrivate::GetBucketCorsRequestPrivate(
    const S3Request::Action action, GetBucketCorsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketCorsRequest
 * class' copy constructor.
 */
GetBucketCorsRequestPrivate::GetBucketCorsRequestPrivate(
    const GetBucketCorsRequestPrivate &other, GetBucketCorsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
