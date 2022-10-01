// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startapplicationrequest.h"
#include "startapplicationrequest_p.h"
#include "startapplicationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::StartApplicationRequest
 * \brief The StartApplicationRequest class provides an interface for KinesisAnalytics StartApplication requests.
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
 * \sa KinesisAnalyticsClient::startApplication
 */

/*!
 * Constructs a copy of \a other.
 */
StartApplicationRequest::StartApplicationRequest(const StartApplicationRequest &other)
    : KinesisAnalyticsRequest(new StartApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartApplicationRequest object.
 */
StartApplicationRequest::StartApplicationRequest()
    : KinesisAnalyticsRequest(new StartApplicationRequestPrivate(KinesisAnalyticsRequest::StartApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StartApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StartApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::StartApplicationRequestPrivate
 * \brief The StartApplicationRequestPrivate class provides private implementation for StartApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a StartApplicationRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, StartApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartApplicationRequest
 * class' copy constructor.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const StartApplicationRequestPrivate &other, StartApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
