// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
