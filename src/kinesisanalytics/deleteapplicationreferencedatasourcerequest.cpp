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

#include "deleteapplicationreferencedatasourcerequest.h"
#include "deleteapplicationreferencedatasourcerequest_p.h"
#include "deleteapplicationreferencedatasourceresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationReferenceDataSourceRequest
 * \brief The DeleteApplicationReferenceDataSourceRequest class provides an interface for KinesisAnalytics DeleteApplicationReferenceDataSource requests.
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
 * \sa KinesisAnalyticsClient::deleteApplicationReferenceDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationReferenceDataSourceRequest::DeleteApplicationReferenceDataSourceRequest(const DeleteApplicationReferenceDataSourceRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationReferenceDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationReferenceDataSourceRequest object.
 */
DeleteApplicationReferenceDataSourceRequest::DeleteApplicationReferenceDataSourceRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationReferenceDataSourceRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationReferenceDataSourceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationReferenceDataSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationReferenceDataSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationReferenceDataSourceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationReferenceDataSourceResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationReferenceDataSourceRequestPrivate
 * \brief The DeleteApplicationReferenceDataSourceRequestPrivate class provides private implementation for DeleteApplicationReferenceDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationReferenceDataSourceRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
DeleteApplicationReferenceDataSourceRequestPrivate::DeleteApplicationReferenceDataSourceRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationReferenceDataSourceRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationReferenceDataSourceRequest
 * class' copy constructor.
 */
DeleteApplicationReferenceDataSourceRequestPrivate::DeleteApplicationReferenceDataSourceRequestPrivate(
    const DeleteApplicationReferenceDataSourceRequestPrivate &other, DeleteApplicationReferenceDataSourceRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
