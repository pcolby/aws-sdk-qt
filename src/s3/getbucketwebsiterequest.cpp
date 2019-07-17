/*
    Copyright 2013-2019 Paul Colby

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
