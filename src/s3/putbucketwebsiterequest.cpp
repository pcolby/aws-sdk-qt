// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketwebsiterequest.h"
#include "putbucketwebsiterequest_p.h"
#include "putbucketwebsiteresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketWebsiteRequest
 * \brief The PutBucketWebsiteRequest class provides an interface for S3 PutBucketWebsite requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketWebsite
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketWebsiteRequest::PutBucketWebsiteRequest(const PutBucketWebsiteRequest &other)
    : S3Request(new PutBucketWebsiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketWebsiteRequest object.
 */
PutBucketWebsiteRequest::PutBucketWebsiteRequest()
    : S3Request(new PutBucketWebsiteRequestPrivate(S3Request::PutBucketWebsiteAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketWebsiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketWebsiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketWebsiteRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketWebsiteResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketWebsiteRequestPrivate
 * \brief The PutBucketWebsiteRequestPrivate class provides private implementation for PutBucketWebsiteRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketWebsiteRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketWebsiteRequestPrivate::PutBucketWebsiteRequestPrivate(
    const S3Request::Action action, PutBucketWebsiteRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketWebsiteRequest
 * class' copy constructor.
 */
PutBucketWebsiteRequestPrivate::PutBucketWebsiteRequestPrivate(
    const PutBucketWebsiteRequestPrivate &other, PutBucketWebsiteRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
