// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationvpcconfigurationrequest.h"
#include "addapplicationvpcconfigurationrequest_p.h"
#include "addapplicationvpcconfigurationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationVpcConfigurationRequest
 * \brief The AddApplicationVpcConfigurationRequest class provides an interface for KinesisAnalyticsV2 AddApplicationVpcConfiguration requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::addApplicationVpcConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationVpcConfigurationRequest::AddApplicationVpcConfigurationRequest(const AddApplicationVpcConfigurationRequest &other)
    : KinesisAnalyticsV2Request(new AddApplicationVpcConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationVpcConfigurationRequest object.
 */
AddApplicationVpcConfigurationRequest::AddApplicationVpcConfigurationRequest()
    : KinesisAnalyticsV2Request(new AddApplicationVpcConfigurationRequestPrivate(KinesisAnalyticsV2Request::AddApplicationVpcConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationVpcConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationVpcConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationVpcConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationVpcConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationVpcConfigurationRequestPrivate
 * \brief The AddApplicationVpcConfigurationRequestPrivate class provides private implementation for AddApplicationVpcConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationVpcConfigurationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
AddApplicationVpcConfigurationRequestPrivate::AddApplicationVpcConfigurationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, AddApplicationVpcConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationVpcConfigurationRequest
 * class' copy constructor.
 */
AddApplicationVpcConfigurationRequestPrivate::AddApplicationVpcConfigurationRequestPrivate(
    const AddApplicationVpcConfigurationRequestPrivate &other, AddApplicationVpcConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
