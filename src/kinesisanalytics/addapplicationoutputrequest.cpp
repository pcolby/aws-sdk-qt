// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationoutputrequest.h"
#include "addapplicationoutputrequest_p.h"
#include "addapplicationoutputresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationOutputRequest
 * \brief The AddApplicationOutputRequest class provides an interface for KinesisAnalytics AddApplicationOutput requests.
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
 * \sa KinesisAnalyticsClient::addApplicationOutput
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationOutputRequest::AddApplicationOutputRequest(const AddApplicationOutputRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationOutputRequest object.
 */
AddApplicationOutputRequest::AddApplicationOutputRequest()
    : KinesisAnalyticsRequest(new AddApplicationOutputRequestPrivate(KinesisAnalyticsRequest::AddApplicationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationOutputRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationOutputResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationOutputRequestPrivate
 * \brief The AddApplicationOutputRequestPrivate class provides private implementation for AddApplicationOutputRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationOutputRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
AddApplicationOutputRequestPrivate::AddApplicationOutputRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationOutputRequest
 * class' copy constructor.
 */
AddApplicationOutputRequestPrivate::AddApplicationOutputRequestPrivate(
    const AddApplicationOutputRequestPrivate &other, AddApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
