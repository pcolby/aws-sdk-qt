// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addapplicationinputrequest.h"
#include "addapplicationinputrequest_p.h"
#include "addapplicationinputresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputRequest
 * \brief The AddApplicationInputRequest class provides an interface for KinesisAnalytics AddApplicationInput requests.
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
 * \sa KinesisAnalyticsClient::addApplicationInput
 */

/*!
 * Constructs a copy of \a other.
 */
AddApplicationInputRequest::AddApplicationInputRequest(const AddApplicationInputRequest &other)
    : KinesisAnalyticsRequest(new AddApplicationInputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddApplicationInputRequest object.
 */
AddApplicationInputRequest::AddApplicationInputRequest()
    : KinesisAnalyticsRequest(new AddApplicationInputRequestPrivate(KinesisAnalyticsRequest::AddApplicationInputAction, this))
{

}

/*!
 * \reimp
 */
bool AddApplicationInputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddApplicationInputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddApplicationInputRequest::response(QNetworkReply * const reply) const
{
    return new AddApplicationInputResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::AddApplicationInputRequestPrivate
 * \brief The AddApplicationInputRequestPrivate class provides private implementation for AddApplicationInputRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a AddApplicationInputRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
AddApplicationInputRequestPrivate::AddApplicationInputRequestPrivate(
    const KinesisAnalyticsRequest::Action action, AddApplicationInputRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddApplicationInputRequest
 * class' copy constructor.
 */
AddApplicationInputRequestPrivate::AddApplicationInputRequestPrivate(
    const AddApplicationInputRequestPrivate &other, AddApplicationInputRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
