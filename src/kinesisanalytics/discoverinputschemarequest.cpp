// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "discoverinputschemarequest.h"
#include "discoverinputschemarequest_p.h"
#include "discoverinputschemaresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DiscoverInputSchemaRequest
 * \brief The DiscoverInputSchemaRequest class provides an interface for KinesisAnalytics DiscoverInputSchema requests.
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
 * \sa KinesisAnalyticsClient::discoverInputSchema
 */

/*!
 * Constructs a copy of \a other.
 */
DiscoverInputSchemaRequest::DiscoverInputSchemaRequest(const DiscoverInputSchemaRequest &other)
    : KinesisAnalyticsRequest(new DiscoverInputSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DiscoverInputSchemaRequest object.
 */
DiscoverInputSchemaRequest::DiscoverInputSchemaRequest()
    : KinesisAnalyticsRequest(new DiscoverInputSchemaRequestPrivate(KinesisAnalyticsRequest::DiscoverInputSchemaAction, this))
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
 * \class QtAws::KinesisAnalytics::DiscoverInputSchemaRequestPrivate
 * \brief The DiscoverInputSchemaRequestPrivate class provides private implementation for DiscoverInputSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DiscoverInputSchemaRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
DiscoverInputSchemaRequestPrivate::DiscoverInputSchemaRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DiscoverInputSchemaRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
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
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
