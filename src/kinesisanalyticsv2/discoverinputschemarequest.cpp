// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "discoverinputschemarequest.h"
#include "discoverinputschemarequest_p.h"
#include "discoverinputschemaresponse.h"
#include "kinesisanalyticsv2request_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

/*!
 * \class QtAws::KinesisAnalyticsV2::DiscoverInputSchemaRequest
 * \brief The DiscoverInputSchemaRequest class provides an interface for KinesisAnalyticsV2 DiscoverInputSchema requests.
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 *
 *  Amazon Kinesis Data Analytics is a fully managed service that you can use to process and analyze streaming data using
 *  Java, SQL, or Scala. The service enables you to quickly author and run Java, SQL, or Scala code against streaming
 *  sources to perform time series analytics, feed real-time dashboards, and create real-time
 *
 * \sa KinesisAnalyticsV2Client::discoverInputSchema
 */

/*!
 * Constructs a copy of \a other.
 */
DiscoverInputSchemaRequest::DiscoverInputSchemaRequest(const DiscoverInputSchemaRequest &other)
    : KinesisAnalyticsV2Request(new DiscoverInputSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DiscoverInputSchemaRequest object.
 */
DiscoverInputSchemaRequest::DiscoverInputSchemaRequest()
    : KinesisAnalyticsV2Request(new DiscoverInputSchemaRequestPrivate(KinesisAnalyticsV2Request::DiscoverInputSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool DiscoverInputSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DiscoverInputSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DiscoverInputSchemaRequest::response(QNetworkReply * const reply) const
{
    return new DiscoverInputSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalyticsV2::DiscoverInputSchemaRequestPrivate
 * \brief The DiscoverInputSchemaRequestPrivate class provides private implementation for DiscoverInputSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalyticsV2
 */

/*!
 * Constructs a DiscoverInputSchemaRequestPrivate object for KinesisAnalyticsV2 \a action,
 * with public implementation \a q.
 */
DiscoverInputSchemaRequestPrivate::DiscoverInputSchemaRequestPrivate(
    const KinesisAnalyticsV2Request::Action action, DiscoverInputSchemaRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DiscoverInputSchemaRequest
 * class' copy constructor.
 */
DiscoverInputSchemaRequestPrivate::DiscoverInputSchemaRequestPrivate(
    const DiscoverInputSchemaRequestPrivate &other, DiscoverInputSchemaRequest * const q)
    : KinesisAnalyticsV2RequestPrivate(other, q)
{

}

} // namespace KinesisAnalyticsV2
} // namespace QtAws
