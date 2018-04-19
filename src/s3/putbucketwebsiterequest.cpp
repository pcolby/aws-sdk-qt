/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *
 * Constructs a PutBucketWebsiteRequestPrivate object for S3 \a action with,
 * public implementation \a q.
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
