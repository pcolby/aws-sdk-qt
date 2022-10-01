// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketaccelerateconfigurationrequest.h"
#include "getbucketaccelerateconfigurationrequest_p.h"
#include "getbucketaccelerateconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketAccelerateConfigurationRequest
 * \brief The GetBucketAccelerateConfigurationRequest class provides an interface for S3 GetBucketAccelerateConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketAccelerateConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketAccelerateConfigurationRequest::GetBucketAccelerateConfigurationRequest(const GetBucketAccelerateConfigurationRequest &other)
    : S3Request(new GetBucketAccelerateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketAccelerateConfigurationRequest object.
 */
GetBucketAccelerateConfigurationRequest::GetBucketAccelerateConfigurationRequest()
    : S3Request(new GetBucketAccelerateConfigurationRequestPrivate(S3Request::GetBucketAccelerateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketAccelerateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketAccelerateConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketAccelerateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketAccelerateConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketAccelerateConfigurationRequestPrivate
 * \brief The GetBucketAccelerateConfigurationRequestPrivate class provides private implementation for GetBucketAccelerateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketAccelerateConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketAccelerateConfigurationRequestPrivate::GetBucketAccelerateConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketAccelerateConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketAccelerateConfigurationRequest
 * class' copy constructor.
 */
GetBucketAccelerateConfigurationRequestPrivate::GetBucketAccelerateConfigurationRequestPrivate(
    const GetBucketAccelerateConfigurationRequestPrivate &other, GetBucketAccelerateConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
