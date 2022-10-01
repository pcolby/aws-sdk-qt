// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenotificationconfigurationrequest.h"
#include "describenotificationconfigurationrequest_p.h"
#include "describenotificationconfigurationresponse.h"
#include "kinesisvideorequest_p.h"

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::DescribeNotificationConfigurationRequest
 * \brief The DescribeNotificationConfigurationRequest class provides an interface for KinesisVideo DescribeNotificationConfiguration requests.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::describeNotificationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNotificationConfigurationRequest::DescribeNotificationConfigurationRequest(const DescribeNotificationConfigurationRequest &other)
    : KinesisVideoRequest(new DescribeNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNotificationConfigurationRequest object.
 */
DescribeNotificationConfigurationRequest::DescribeNotificationConfigurationRequest()
    : KinesisVideoRequest(new DescribeNotificationConfigurationRequestPrivate(KinesisVideoRequest::DescribeNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNotificationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotificationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisVideo::DescribeNotificationConfigurationRequestPrivate
 * \brief The DescribeNotificationConfigurationRequestPrivate class provides private implementation for DescribeNotificationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a DescribeNotificationConfigurationRequestPrivate object for KinesisVideo \a action,
 * with public implementation \a q.
 */
DescribeNotificationConfigurationRequestPrivate::DescribeNotificationConfigurationRequestPrivate(
    const KinesisVideoRequest::Action action, DescribeNotificationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotificationConfigurationRequest
 * class' copy constructor.
 */
DescribeNotificationConfigurationRequestPrivate::DescribeNotificationConfigurationRequestPrivate(
    const DescribeNotificationConfigurationRequestPrivate &other, DescribeNotificationConfigurationRequest * const q)
    : KinesisVideoRequestPrivate(other, q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
