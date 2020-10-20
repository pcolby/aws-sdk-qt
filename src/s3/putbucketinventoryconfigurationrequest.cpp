/*
    Copyright 2013-2020 Paul Colby

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

#include "putbucketinventoryconfigurationrequest.h"
#include "putbucketinventoryconfigurationrequest_p.h"
#include "putbucketinventoryconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketInventoryConfigurationRequest
 * \brief The PutBucketInventoryConfigurationRequest class provides an interface for S3 PutBucketInventoryConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketInventoryConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketInventoryConfigurationRequest::PutBucketInventoryConfigurationRequest(const PutBucketInventoryConfigurationRequest &other)
    : S3Request(new PutBucketInventoryConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketInventoryConfigurationRequest object.
 */
PutBucketInventoryConfigurationRequest::PutBucketInventoryConfigurationRequest()
    : S3Request(new PutBucketInventoryConfigurationRequestPrivate(S3Request::PutBucketInventoryConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketInventoryConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketInventoryConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketInventoryConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketInventoryConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketInventoryConfigurationRequestPrivate
 * \brief The PutBucketInventoryConfigurationRequestPrivate class provides private implementation for PutBucketInventoryConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketInventoryConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketInventoryConfigurationRequestPrivate::PutBucketInventoryConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketInventoryConfigurationRequest
 * class' copy constructor.
 */
PutBucketInventoryConfigurationRequestPrivate::PutBucketInventoryConfigurationRequestPrivate(
    const PutBucketInventoryConfigurationRequestPrivate &other, PutBucketInventoryConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
