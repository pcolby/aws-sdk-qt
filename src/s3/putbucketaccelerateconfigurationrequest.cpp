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

#include "putbucketaccelerateconfigurationrequest.h"
#include "putbucketaccelerateconfigurationrequest_p.h"
#include "putbucketaccelerateconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketAccelerateConfigurationRequest
 * \brief The PutBucketAccelerateConfigurationRequest class provides an interface for S3 PutBucketAccelerateConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketAccelerateConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketAccelerateConfigurationRequest::PutBucketAccelerateConfigurationRequest(const PutBucketAccelerateConfigurationRequest &other)
    : S3Request(new PutBucketAccelerateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketAccelerateConfigurationRequest object.
 */
PutBucketAccelerateConfigurationRequest::PutBucketAccelerateConfigurationRequest()
    : S3Request(new PutBucketAccelerateConfigurationRequestPrivate(S3Request::PutBucketAccelerateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketAccelerateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketAccelerateConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketAccelerateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketAccelerateConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketAccelerateConfigurationRequestPrivate
 * \brief The PutBucketAccelerateConfigurationRequestPrivate class provides private implementation for PutBucketAccelerateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketAccelerateConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketAccelerateConfigurationRequestPrivate::PutBucketAccelerateConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketAccelerateConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketAccelerateConfigurationRequest
 * class' copy constructor.
 */
PutBucketAccelerateConfigurationRequestPrivate::PutBucketAccelerateConfigurationRequestPrivate(
    const PutBucketAccelerateConfigurationRequestPrivate &other, PutBucketAccelerateConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
