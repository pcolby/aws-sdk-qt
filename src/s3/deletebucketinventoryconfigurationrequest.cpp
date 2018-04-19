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

#include "deletebucketinventoryconfigurationrequest.h"
#include "deletebucketinventoryconfigurationrequest_p.h"
#include "deletebucketinventoryconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketInventoryConfigurationRequest
 * \brief The DeleteBucketInventoryConfigurationRequest class provides an interface for S3 DeleteBucketInventoryConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketInventoryConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketInventoryConfigurationRequest::DeleteBucketInventoryConfigurationRequest(const DeleteBucketInventoryConfigurationRequest &other)
    : S3Request(new DeleteBucketInventoryConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketInventoryConfigurationRequest object.
 */
DeleteBucketInventoryConfigurationRequest::DeleteBucketInventoryConfigurationRequest()
    : S3Request(new DeleteBucketInventoryConfigurationRequestPrivate(S3Request::DeleteBucketInventoryConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketInventoryConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketInventoryConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketInventoryConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketInventoryConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketInventoryConfigurationRequestPrivate
 * \brief The DeleteBucketInventoryConfigurationRequestPrivate class provides private implementation for DeleteBucketInventoryConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 *
 * Constructs a DeleteBucketInventoryConfigurationRequestPrivate object for S3 \a action with,
 * public implementation \a q.
 */
DeleteBucketInventoryConfigurationRequestPrivate::DeleteBucketInventoryConfigurationRequestPrivate(
    const S3Request::Action action, DeleteBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketInventoryConfigurationRequest
 * class' copy constructor.
 */
DeleteBucketInventoryConfigurationRequestPrivate::DeleteBucketInventoryConfigurationRequestPrivate(
    const DeleteBucketInventoryConfigurationRequestPrivate &other, DeleteBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
