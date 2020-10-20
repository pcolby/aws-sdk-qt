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
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputProcessingConfigurationRequest
 * \brief The AddApplicationInputProcessingConfigurationRequest class provides an interface for KinesisAnalytics AddApplicationInputProcessingConfiguration requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *  <fullname>Amazon Kinesis Analytics</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p <note>
 * 
 *  This documentation is for version 1 of the Amazon Kinesis Data Analytics API, which only supports SQL applications.
 *  Version 2 of the API supports SQL and Java applications. For more information about version 2, see <a
 *  href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics API V2
 * 
 *  Documentation</a>> </note>
 * 
 *  This is the <i>Amazon Kinesis Analytics v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
 *  additional information.
 *
 * \sa KinesisAnalyticsClient::addApplicationInputProcessingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationInputProcessingConfigurationRequest::AddApplicationInputProcessingConfigurationRequest(const AddApplicationInputProcessingConfigurationRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationInputProcessingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationInputProcessingConfigurationRequest object.
 */
AddApplicationInputProcessingConfigurationRequest::AddApplicationInputProcessingConfigurationRequest()
    : KinesisAnalyticsRequest(new AddApplicationInputProcessingConfigurationRequestPrivate(KinesisAnalyticsRequest::AddApplicationInputProcessingConfigurationAction, this))
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
 * \class QtAws::KinesisAnalytics::AddApplicationInputProcessingConfigurationRequestPrivate
 * \brief The AddApplicationInputProcessingConfigurationRequestPrivate class provides private implementation for AddApplicationInputProcessingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationInputProcessingConfigurationRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
AddApplicationInputProcessingConfigurationRequestPrivate::AddApplicationInputProcessingConfigurationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationInputProcessingConfigurationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
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
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
