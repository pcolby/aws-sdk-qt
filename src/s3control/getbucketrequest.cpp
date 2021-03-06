/*
    Copyright 2013-2021 Paul Colby

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

#include "getbucketrequest.h"
#include "getbucketrequest_p.h"
#include "getbucketresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetBucketRequest
 * \brief The GetBucketRequest class provides an interface for S3Control GetBucket requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getBucket
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketRequest::GetBucketRequest(const GetBucketRequest &other)
    : S3ControlRequest(new GetBucketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketRequest object.
 */
GetBucketRequest::GetBucketRequest()
    : S3ControlRequest(new GetBucketRequestPrivate(S3ControlRequest::GetBucketAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetBucketRequestPrivate
 * \brief The GetBucketRequestPrivate class provides private implementation for GetBucketRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetBucketRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetBucketRequestPrivate::GetBucketRequestPrivate(
    const S3ControlRequest::Action action, GetBucketRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketRequest
 * class' copy constructor.
 */
GetBucketRequestPrivate::GetBucketRequestPrivate(
    const GetBucketRequestPrivate &other, GetBucketRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
