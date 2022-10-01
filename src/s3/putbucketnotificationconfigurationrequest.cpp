// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketnotificationconfigurationrequest.h"
#include "putbucketnotificationconfigurationrequest_p.h"
#include "putbucketnotificationconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketNotificationConfigurationRequest
 * \brief The PutBucketNotificationConfigurationRequest class provides an interface for S3 PutBucketNotificationConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketNotificationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketNotificationConfigurationRequest::PutBucketNotificationConfigurationRequest(const PutBucketNotificationConfigurationRequest &other)
    : S3Request(new PutBucketNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketNotificationConfigurationRequest object.
 */
PutBucketNotificationConfigurationRequest::PutBucketNotificationConfigurationRequest()
    : S3Request(new PutBucketNotificationConfigurationRequestPrivate(S3Request::PutBucketNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketNotificationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketNotificationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketNotificationConfigurationRequestPrivate
 * \brief The PutBucketNotificationConfigurationRequestPrivate class provides private implementation for PutBucketNotificationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketNotificationConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketNotificationConfigurationRequestPrivate::PutBucketNotificationConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketNotificationConfigurationRequest
 * class' copy constructor.
 */
PutBucketNotificationConfigurationRequestPrivate::PutBucketNotificationConfigurationRequestPrivate(
    const PutBucketNotificationConfigurationRequestPrivate &other, PutBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
