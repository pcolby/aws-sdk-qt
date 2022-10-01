// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationreferencedatasourcerequest.h"
#include "deleteapplicationreferencedatasourcerequest_p.h"
#include "deleteapplicationreferencedatasourceresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationReferenceDataSourceRequest
 * \brief The DeleteApplicationReferenceDataSourceRequest class provides an interface for KinesisAnalyticsV2 DeleteApplicationReferenceDataSource requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::deleteApplicationReferenceDataSource
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationReferenceDataSourceRequest::DeleteApplicationReferenceDataSourceRequest(const DeleteApplicationReferenceDataSourceRequest &other)
    : KinesisAnalyticsV2Request(new DeleteApplicationReferenceDataSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationReferenceDataSourceRequest object.
 */
DeleteApplicationReferenceDataSourceRequest::DeleteApplicationReferenceDataSourceRequest()
    : KinesisAnalyticsV2Request(new DeleteApplicationReferenceDataSourceRequestPrivate(KinesisAnalyticsV2Request::DeleteApplicationReferenceDataSourceAction, this))
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
 * \class QtAws::KinesisAnalyticsV2::DeleteApplicationReferenceDataSourceRequestPrivate
 * \brief The DeleteApplicationReferenceDataSourceRequestPrivate class provides private implementation for DeleteApplicationReferenceDataSourceRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DeleteApplicationReferenceDataSourceRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DeleteApplicationReferenceDataSourceRequestPrivate::DeleteApplicationReferenceDataSourceRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DeleteApplicationReferenceDataSourceRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
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
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
