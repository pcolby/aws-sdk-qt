// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketcorsrequest.h"
#include "putbucketcorsrequest_p.h"
#include "putbucketcorsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketCorsRequest
 * \brief The PutBucketCorsRequest class provides an interface for S3 PutBucketCors requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketCors
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketCorsRequest::PutBucketCorsRequest(const PutBucketCorsRequest &other)
    : S3Request(new PutBucketCorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketCorsRequest object.
 */
PutBucketCorsRequest::PutBucketCorsRequest()
    : S3Request(new PutBucketCorsRequestPrivate(S3Request::PutBucketCorsAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketCorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketCorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketCorsRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketCorsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketCorsRequestPrivate
 * \brief The PutBucketCorsRequestPrivate class provides private implementation for PutBucketCorsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketCorsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketCorsRequestPrivate::PutBucketCorsRequestPrivate(
    const S3Request::Action action, PutBucketCorsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketCorsRequest
 * class' copy constructor.
 */
PutBucketCorsRequestPrivate::PutBucketCorsRequestPrivate(
    const PutBucketCorsRequestPrivate &other, PutBucketCorsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
