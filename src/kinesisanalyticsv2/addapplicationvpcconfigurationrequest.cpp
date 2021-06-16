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
