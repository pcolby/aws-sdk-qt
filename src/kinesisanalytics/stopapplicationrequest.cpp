// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopapplicationrequest.h"
#include "stopapplicationrequest_p.h"
#include "stopapplicationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::StopApplicationRequest
 * \brief The StopApplicationRequest class provides an interface for KinesisAnalytics StopApplication requests.
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
 * \sa KinesisAnalyticsClient::stopApplication
 */

/*!
 * Constructs a copy of \a other.
 */
StopApplicationRequest::StopApplicationRequest(const StopApplicationRequest &other)
    : KinesisAnalyticsRequest(new StopApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopApplicationRequest object.
 */
StopApplicationRequest::StopApplicationRequest()
    : KinesisAnalyticsRequest(new StopApplicationRequestPrivate(KinesisAnalyticsRequest::StopApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StopApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StopApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::StopApplicationRequestPrivate
 * \brief The StopApplicationRequestPrivate class provides private implementation for StopApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a StopApplicationRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, StopApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopApplicationRequest
 * class' copy constructor.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const StopApplicationRequestPrivate &other, StopApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
