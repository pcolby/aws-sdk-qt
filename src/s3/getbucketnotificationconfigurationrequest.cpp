// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbucketnotificationconfigurationrequest.h"
#include "getbucketnotificationconfigurationrequest_p.h"
#include "getbucketnotificationconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketNotificationConfigurationRequest
 * \brief The GetBucketNotificationConfigurationRequest class provides an interface for S3 GetBucketNotificationConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketNotificationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketNotificationConfigurationRequest::GetBucketNotificationConfigurationRequest(const GetBucketNotificationConfigurationRequest &other)
    : S3Request(new GetBucketNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketNotificationConfigurationRequest object.
 */
GetBucketNotificationConfigurationRequest::GetBucketNotificationConfigurationRequest()
    : S3Request(new GetBucketNotificationConfigurationRequestPrivate(S3Request::GetBucketNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketNotificationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketNotificationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketNotificationConfigurationRequestPrivate
 * \brief The GetBucketNotificationConfigurationRequestPrivate class provides private implementation for GetBucketNotificationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketNotificationConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketNotificationConfigurationRequestPrivate::GetBucketNotificationConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketNotificationConfigurationRequest
 * class' copy constructor.
 */
GetBucketNotificationConfigurationRequestPrivate::GetBucketNotificationConfigurationRequestPrivate(
    const GetBucketNotificationConfigurationRequestPrivate &other, GetBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
