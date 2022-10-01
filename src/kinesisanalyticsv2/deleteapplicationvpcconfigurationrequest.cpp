// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationvpcconfigurationrequest.h"
#include "deleteapplicationvpcconfigurationrequest_p.h"
#include "deleteapplicationvpcconfigurationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationVpcConfigurationRequest
 * \brief The DeleteApplicationVpcConfigurationRequest class provides an interface for KinesisAnalyticsV2 DeleteApplicationVpcConfiguration requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationVpcConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationVpcConfigurationRequest::DeleteApplicationVpcConfigurationRequest(const DeleteApplicationVpcConfigurationRequest &other)
    : KinesisAnalyticsV2Request(new DeleteApplicationVpcConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationVpcConfigurationRequest object.
 */
DeleteApplicationVpcConfigurationRequest::DeleteApplicationVpcConfigurationRequest()
    : KinesisAnalyticsV2Request(new DeleteApplicationVpcConfigurationRequestPrivate(KinesisAnalyticsV2Request::DeleteApplicationVpcConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationVpcConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationVpcConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationVpcConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationVpcConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationVpcConfigurationRequestPrivate
 * \brief The DeleteApplicationVpcConfigurationRequestPrivate class provides private implementation for DeleteApplicationVpcConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationVpcConfigurationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DeleteApplicationVpcConfigurationRequestPrivate::DeleteApplicationVpcConfigurationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DeleteApplicationVpcConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationVpcConfigurationRequest
 * class' copy constructor.
 */
DeleteApplicationVpcConfigurationRequestPrivate::DeleteApplicationVpcConfigurationRequestPrivate(
    const DeleteApplicationVpcConfigurationRequestPrivate &other, DeleteApplicationVpcConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
