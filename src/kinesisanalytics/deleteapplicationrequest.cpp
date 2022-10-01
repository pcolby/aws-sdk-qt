// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationrequest.h"
#include "deleteapplicationrequest_p.h"
#include "deleteapplicationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationRequest
 * \brief The DeleteApplicationRequest class provides an interface for KinesisAnalytics DeleteApplication requests.
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
 * \sa KinesisAnalyticsClient::deleteApplication
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationRequest::DeleteApplicationRequest(const DeleteApplicationRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationRequest object.
 */
DeleteApplicationRequest::DeleteApplicationRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationRequestPrivate
 * \brief The DeleteApplicationRequestPrivate class provides private implementation for DeleteApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a DeleteApplicationRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationRequest
 * class' copy constructor.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const DeleteApplicationRequestPrivate &other, DeleteApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
