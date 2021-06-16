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

#include "createbucketrequest.h"
#include "createbucketrequest_p.h"
#include "createbucketresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateBucketRequest
 * \brief The CreateBucketRequest class provides an interface for S3Control CreateBucket requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createBucket
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBucketRequest::CreateBucketRequest(const CreateBucketRequest &other)
    : S3ControlRequest(new CreateBucketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBucketRequest object.
 */
CreateBucketRequest::CreateBucketRequest()
    : S3ControlRequest(new CreateBucketRequestPrivate(S3ControlRequest::CreateBucketAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBucketRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBucketResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBucketRequest::response(QNetworkReply * const reply) const
{
    return new CreateBucketResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::CreateBucketRequestPrivate
 * \brief The CreateBucketRequestPrivate class provides private implementation for CreateBucketRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateBucketRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
CreateBucketRequestPrivate::CreateBucketRequestPrivate(
    const S3ControlRequest::Action action, CreateBucketRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBucketRequest
 * class' copy constructor.
 */
CreateBucketRequestPrivate::CreateBucketRequestPrivate(
    const CreateBucketRequestPrivate &other, CreateBucketRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
