/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listpartnereventsourceaccountsresponse.h"
#include "listpartnereventsourceaccountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::ListPartnerEventSourceAccountsResponse
 * \brief The ListPartnerEventSourceAccountsResponse class provides an interace for CloudWatchEvents ListPartnerEventSourceAccounts responses.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon EventBridge helps you to respond to state changes in your AWS resources. When your resources change state, they
 *  automatically send events into an event stream. You can create rules that match selected events in the stream and route
 *  them to targets to take action. You can also use rules to take action on a predetermined schedule. For example, you can
 *  configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  stat> </li> <li>
 * 
 *  Direct specific API records from AWS CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential
 *  security or availability
 * 
 *  risk> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volum> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide/">Amazon EventBridge User
 *
 * \sa CloudWatchEventsClient::listPartnerEventSourceAccounts
 */

/*!
 * Constructs a ListPartnerEventSourceAccountsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPartnerEventSourceAccountsResponse::ListPartnerEventSourceAccountsResponse(
        const ListPartnerEventSourceAccountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new ListPartnerEventSourceAccountsResponsePrivate(this), parent)
{
    setRequest(new ListPartnerEventSourceAccountsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPartnerEventSourceAccountsRequest * ListPartnerEventSourceAccountsResponse::request() const
{
    Q_D(const ListPartnerEventSourceAccountsResponse);
    return static_cast<const ListPartnerEventSourceAccountsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents ListPartnerEventSourceAccounts \a response.
 */
void ListPartnerEventSourceAccountsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPartnerEventSourceAccountsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::ListPartnerEventSourceAccountsResponsePrivate
 * \brief The ListPartnerEventSourceAccountsResponsePrivate class provides private implementation for ListPartnerEventSourceAccountsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a ListPartnerEventSourceAccountsResponsePrivate object with public implementation \a q.
 */
ListPartnerEventSourceAccountsResponsePrivate::ListPartnerEventSourceAccountsResponsePrivate(
    ListPartnerEventSourceAccountsResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents ListPartnerEventSourceAccounts response element from \a xml.
 */
void ListPartnerEventSourceAccountsResponsePrivate::parseListPartnerEventSourceAccountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPartnerEventSourceAccountsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
