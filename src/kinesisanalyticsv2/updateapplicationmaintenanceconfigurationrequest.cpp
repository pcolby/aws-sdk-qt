// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationmaintenanceconfigurationrequest.h"
#include "updateapplicationmaintenanceconfigurationrequest_p.h"
#include "updateapplicationmaintenanceconfigurationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::UpdateApplicationMaintenanceConfigurationRequest
 * \brief The UpdateApplicationMaintenanceConfigurationRequest class provides an interface for KinesisAnalyticsV2 UpdateApplicationMaintenanceConfiguration requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::updateApplicationMaintenanceConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApplicationMaintenanceConfigurationRequest::UpdateApplicationMaintenanceConfigurationRequest(const UpdateApplicationMaintenanceConfigurationRequest &other)
    : KinesisAnalyticsV2Request(new UpdateApplicationMaintenanceConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApplicationMaintenanceConfigurationRequest object.
 */
UpdateApplicationMaintenanceConfigurationRequest::UpdateApplicationMaintenanceConfigurationRequest()
    : KinesisAnalyticsV2Request(new UpdateApplicationMaintenanceConfigurationRequestPrivate(KinesisAnalyticsV2Request::UpdateApplicationMaintenanceConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApplicationMaintenanceConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApplicationMaintenanceConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationMaintenanceConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationMaintenanceConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::UpdateApplicationMaintenanceConfigurationRequestPrivate
 * \brief The UpdateApplicationMaintenanceConfigurationRequestPrivate class provides private implementation for UpdateApplicationMaintenanceConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a UpdateApplicationMaintenanceConfigurationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
UpdateApplicationMaintenanceConfigurationRequestPrivate::UpdateApplicationMaintenanceConfigurationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, UpdateApplicationMaintenanceConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationMaintenanceConfigurationRequest
 * class' copy constructor.
 */
UpdateApplicationMaintenanceConfigurationRequestPrivate::UpdateApplicationMaintenanceConfigurationRequestPrivate(
    const UpdateApplicationMaintenanceConfigurationRequestPrivate &other, UpdateApplicationMaintenanceConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
