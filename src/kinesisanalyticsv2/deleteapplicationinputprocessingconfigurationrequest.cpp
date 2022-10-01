// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationinputprocessingconfigurationrequest.h"
#include "deleteapplicationinputprocessingconfigurationrequest_p.h"
#include "deleteapplicationinputprocessingconfigurationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationInputProcessingConfigurationRequest
 * \brief The DeleteApplicationInputProcessingConfigurationRequest class provides an interface for KinesisAnalyticsV2 DeleteApplicationInputProcessingConfiguration requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationInputProcessingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationInputProcessingConfigurationRequest::DeleteApplicationInputProcessingConfigurationRequest(const DeleteApplicationInputProcessingConfigurationRequest &other)
    : KinesisAnalyticsV2Request(new DeleteApplicationInputProcessingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationInputProcessingConfigurationRequest object.
 */
DeleteApplicationInputProcessingConfigurationRequest::DeleteApplicationInputProcessingConfigurationRequest()
    : KinesisAnalyticsV2Request(new DeleteApplicationInputProcessingConfigurationRequestPrivate(KinesisAnalyticsV2Request::DeleteApplicationInputProcessingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationInputProcessingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationInputProcessingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationInputProcessingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationInputProcessingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationInputProcessingConfigurationRequestPrivate
 * \brief The DeleteApplicationInputProcessingConfigurationRequestPrivate class provides private implementation for DeleteApplicationInputProcessingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationInputProcessingConfigurationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DeleteApplicationInputProcessingConfigurationRequestPrivate::DeleteApplicationInputProcessingConfigurationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DeleteApplicationInputProcessingConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationInputProcessingConfigurationRequest
 * class' copy constructor.
 */
DeleteApplicationInputProcessingConfigurationRequestPrivate::DeleteApplicationInputProcessingConfigurationRequestPrivate(
    const DeleteApplicationInputProcessingConfigurationRequestPrivate &other, DeleteApplicationInputProcessingConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
