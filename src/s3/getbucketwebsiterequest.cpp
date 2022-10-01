// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketwebsiterequest.h"
#include "getbucketwebsiterequest_p.h"
#include "getbucketwebsiteresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketWebsiteRequest
 * \brief The GetBucketWebsiteRequest class provides an interface for S3 GetBucketWebsite requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketWebsite
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketWebsiteRequest::GetBucketWebsiteRequest(const GetBucketWebsiteRequest &other)
    : S3Request(new GetBucketWebsiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketWebsiteRequest object.
 */
GetBucketWebsiteRequest::GetBucketWebsiteRequest()
    : S3Request(new GetBucketWebsiteRequestPrivate(S3Request::GetBucketWebsiteAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketWebsiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketWebsiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketWebsiteRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketWebsiteResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketWebsiteRequestPrivate
 * \brief The GetBucketWebsiteRequestPrivate class provides private implementation for GetBucketWebsiteRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketWebsiteRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketWebsiteRequestPrivate::GetBucketWebsiteRequestPrivate(
    const S3Request::Action action, GetBucketWebsiteRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketWebsiteRequest
 * class' copy constructor.
 */
GetBucketWebsiteRequestPrivate::GetBucketWebsiteRequestPrivate(
    const GetBucketWebsiteRequestPrivate &other, GetBucketWebsiteRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
