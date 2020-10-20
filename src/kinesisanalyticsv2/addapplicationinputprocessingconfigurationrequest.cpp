/*
    Copyright 2013-2020 Paul Colby

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

#include "addapplicationinputprocessingconfigurationrequest.h"
#include "addapplicationinputprocessingconfigurationrequest_p.h"
#include "addapplicationinputprocessingconfigurationresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationInputProcessingConfigurationRequest
 * \brief The AddApplicationInputProcessingConfigurationRequest class provides an interface for KinesisAnalyticsV2 AddApplicationInputProcessingConfiguration requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  SQL or Java. The service enables you to quickly author and run SQL or Java code against streaming sources to perform
 *  time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::addApplicationInputProcessingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationInputProcessingConfigurationRequest::AddApplicationInputProcessingConfigurationRequest(const AddApplicationInputProcessingConfigurationRequest &other)
    : KinesisAnalyticsV2Request(new AddApplicationInputProcessingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationInputProcessingConfigurationRequest object.
 */
AddApplicationInputProcessingConfigurationRequest::AddApplicationInputProcessingConfigurationRequest()
    : KinesisAnalyticsV2Request(new AddApplicationInputProcessingConfigurationRequestPrivate(KinesisAnalyticsV2Request::AddApplicationInputProcessingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationInputProcessingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationInputProcessingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationInputProcessingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationInputProcessingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::AddApplicationInputProcessingConfigurationRequestPrivate
 * \brief The AddApplicationInputProcessingConfigurationRequestPrivate class provides private implementation for AddApplicationInputProcessingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a AddApplicationInputProcessingConfigurationRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
AddApplicationInputProcessingConfigurationRequestPrivate::AddApplicationInputProcessingConfigurationRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, AddApplicationInputProcessingConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationInputProcessingConfigurationRequest
 * class' copy constructor.
 */
AddApplicationInputProcessingConfigurationRequestPrivate::AddApplicationInputProcessingConfigurationRequestPrivate(
    const AddApplicationInputProcessingConfigurationRequestPrivate &other, AddApplicationInputProcessingConfigurationRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
