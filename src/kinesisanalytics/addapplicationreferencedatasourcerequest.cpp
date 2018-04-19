/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "addapplicationreferencedatasourcerequest.h"
#include "addapplicationreferencedatasourcerequest_p.h"
#include "addapplicationreferencedatasourceresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationReferenceDataSourceRequest
 * \brief The AddApplicationReferenceDataSourceRequest class provides an interface for KinesisAnalytics AddApplicationReferenceDataSource requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::addApplicationReferenceDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationReferenceDataSourceRequest::AddApplicationReferenceDataSourceRequest(const AddApplicationReferenceDataSourceRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationReferenceDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationReferenceDataSourceRequest object.
 */
AddApplicationReferenceDataSourceRequest::AddApplicationReferenceDataSourceRequest()
    : KinesisAnalyticsRequest(new AddApplicationReferenceDataSourceRequestPrivate(KinesisAnalyticsRequest::AddApplicationReferenceDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationReferenceDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationReferenceDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationReferenceDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationReferenceDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationReferenceDataSourceRequestPrivate
 * \brief The AddApplicationReferenceDataSourceRequestPrivate class provides private implementation for AddApplicationReferenceDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 *
 * Constructs a AddApplicationReferenceDataSourceRequestPrivate object for KinesisAnalytics \a action with,
 * public implementation \a q.
 */
AddApplicationReferenceDataSourceRequestPrivate::AddApplicationReferenceDataSourceRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationReferenceDataSourceRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationReferenceDataSourceRequest
 * class' copy constructor.
 */
AddApplicationReferenceDataSourceRequestPrivate::AddApplicationReferenceDataSourceRequestPrivate(
    const AddApplicationReferenceDataSourceRequestPrivate &other, AddApplicationReferenceDataSourceRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
