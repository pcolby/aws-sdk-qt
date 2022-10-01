// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebucketwebsiterequest.h"
#include "deletebucketwebsiterequest_p.h"
#include "deletebucketwebsiteresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketWebsiteRequest
 * \brief The DeleteBucketWebsiteRequest class provides an interface for S3 DeleteBucketWebsite requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketWebsite
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketWebsiteRequest::DeleteBucketWebsiteRequest(const DeleteBucketWebsiteRequest &other)
    : S3Request(new DeleteBucketWebsiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketWebsiteRequest object.
 */
DeleteBucketWebsiteRequest::DeleteBucketWebsiteRequest()
    : S3Request(new DeleteBucketWebsiteRequestPrivate(S3Request::DeleteBucketWebsiteAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketWebsiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketWebsiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketWebsiteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketWebsiteResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketWebsiteRequestPrivate
 * \brief The DeleteBucketWebsiteRequestPrivate class provides private implementation for DeleteBucketWebsiteRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketWebsiteRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketWebsiteRequestPrivate::DeleteBucketWebsiteRequestPrivate(
    const S3Request::Action action, DeleteBucketWebsiteRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketWebsiteRequest
 * class' copy constructor.
 */
DeleteBucketWebsiteRequestPrivate::DeleteBucketWebsiteRequestPrivate(
    const DeleteBucketWebsiteRequestPrivate &other, DeleteBucketWebsiteRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
