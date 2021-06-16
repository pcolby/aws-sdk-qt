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

#include "listapplicationsrequest.h"
#include "listapplicationsrequest_p.h"
#include "listapplicationsresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::ListApplicationsRequest
 * \brief The ListApplicationsRequest class provides an interface for KinesisAnalyticsV2 ListApplications requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::listApplications
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationsRequest::ListApplicationsRequest(const ListApplicationsRequest &other)
    : KinesisAnalyticsV2Request(new ListApplicationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationsRequest object.
 */
ListApplicationsRequest::ListApplicationsRequest()
    : KinesisAnalyticsV2Request(new ListApplicationsRequestPrivate(KinesisAnalyticsV2Request::ListApplicationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationsResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::ListApplicationsRequestPrivate
 * \brief The ListApplicationsRequestPrivate class provides private implementation for ListApplicationsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a ListApplicationsRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, ListApplicationsRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationsRequest
 * class' copy constructor.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const ListApplicationsRequestPrivate &other, ListApplicationsRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
