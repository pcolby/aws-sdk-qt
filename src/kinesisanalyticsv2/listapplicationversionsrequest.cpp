// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationversionsrequest.h"
#include "listapplicationversionsrequest_p.h"
#include "listapplicationversionsresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::ListApplicationVersionsRequest
 * \brief The ListApplicationVersionsRequest class provides an interface for KinesisAnalyticsV2 ListApplicationVersions requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::listApplicationVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationVersionsRequest::ListApplicationVersionsRequest(const ListApplicationVersionsRequest &other)
    : KinesisAnalyticsV2Request(new ListApplicationVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationVersionsRequest object.
 */
ListApplicationVersionsRequest::ListApplicationVersionsRequest()
    : KinesisAnalyticsV2Request(new ListApplicationVersionsRequestPrivate(KinesisAnalyticsV2Request::ListApplicationVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::ListApplicationVersionsRequestPrivate
 * \brief The ListApplicationVersionsRequestPrivate class provides private implementation for ListApplicationVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a ListApplicationVersionsRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
ListApplicationVersionsRequestPrivate::ListApplicationVersionsRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, ListApplicationVersionsRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationVersionsRequest
 * class' copy constructor.
 */
ListApplicationVersionsRequestPrivate::ListApplicationVersionsRequestPrivate(
    const ListApplicationVersionsRequestPrivate &other, ListApplicationVersionsRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
