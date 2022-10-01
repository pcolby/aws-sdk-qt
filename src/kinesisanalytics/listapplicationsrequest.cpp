// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationsrequest.h"
#include "listapplicationsrequest_p.h"
#include "listapplicationsresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::ListApplicationsRequest
 * \brief The ListApplicationsRequest class provides an interface for KinesisAnalytics ListApplications requests.
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
 * \sa KinesisAnalyticsClient::listApplications
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationsRequest::ListApplicationsRequest(const ListApplicationsRequest &other)
    : KinesisAnalyticsRequest(new ListApplicationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationsRequest object.
 */
ListApplicationsRequest::ListApplicationsRequest()
    : KinesisAnalyticsRequest(new ListApplicationsRequestPrivate(KinesisAnalyticsRequest::ListApplicationsAction, this))
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
 * \class QtAws::KinesisAnalytics::ListApplicationsRequestPrivate
 * \brief The ListApplicationsRequestPrivate class provides private implementation for ListApplicationsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a ListApplicationsRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
ListApplicationsRequestPrivate::ListApplicationsRequestPrivate(
    const KinesisAnalyticsRequest::Action action, ListApplicationsRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
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
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
