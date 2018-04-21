/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listtargetsbyruleresponse.h"
#include "listtargetsbyruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::ListTargetsByRuleResponse
 * \brief The ListTargetsByRuleResponse class provides an interace for CloudWatchEvents ListTargetsByRule responses.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon CloudWatch Events helps you to respond to state changes in your AWS resources. When your resources change state,
 *  they automatically send events into an event stream. You can create rules that match selected events in the stream and
 *  route them to targets to take action. You can also use rules to take action on a pre-determined schedule. For example,
 *  you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis stream for detailed analysis of potential security or
 *  availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon CloudWatch Events, see the <a
 *  href="http://docs.aws.amazon.com/AmazonCloudWatch/latest/events">Amazon CloudWatch Events User
 *
 * \sa CloudWatchEventsClient::listTargetsByRule
 */

/*!
 * Constructs a ListTargetsByRuleResponse object for \a reply to \a request, with parent \a parent.
 */
ListTargetsByRuleResponse::ListTargetsByRuleResponse(
        const ListTargetsByRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new ListTargetsByRuleResponsePrivate(this), parent)
{
    setRequest(new ListTargetsByRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTargetsByRuleRequest * ListTargetsByRuleResponse::request() const
{
    Q_D(const ListTargetsByRuleResponse);
    return static_cast<const ListTargetsByRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents ListTargetsByRule \a response.
 */
void ListTargetsByRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTargetsByRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::ListTargetsByRuleResponsePrivate
 * \brief The ListTargetsByRuleResponsePrivate class provides private implementation for ListTargetsByRuleResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a ListTargetsByRuleResponsePrivate object with public implementation \a q.
 */
ListTargetsByRuleResponsePrivate::ListTargetsByRuleResponsePrivate(
    ListTargetsByRuleResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents ListTargetsByRule response element from \a xml.
 */
void ListTargetsByRuleResponsePrivate::parseListTargetsByRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTargetsByRuleResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
