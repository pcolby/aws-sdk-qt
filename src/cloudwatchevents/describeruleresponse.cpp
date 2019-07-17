/*
    Copyright 2013-2019 Paul Colby

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

#include "describeruleresponse.h"
#include "describeruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::DescribeRuleResponse
 * \brief The DescribeRuleResponse class provides an interace for CloudWatchEvents DescribeRule responses.
 *
 * \inmodule QtAwsCloudWatchEvents
 *
 *  Amazon CloudWatch Events helps you to respond to state changes in your AWS resources. When your resources change state,
 *  they automatically send events into an event stream. You can create rules that match selected events in the stream and
 *  route them to targets to take action. You can also use rules to take action on a predetermined schedule. For example,
 *  you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an AWS Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance
 *  enters the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from AWS CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential
 *  security or availability
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
 * \sa CloudWatchEventsClient::describeRule
 */

/*!
 * Constructs a DescribeRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRuleResponse::DescribeRuleResponse(
        const DescribeRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new DescribeRuleResponsePrivate(this), parent)
{
    setRequest(new DescribeRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRuleRequest * DescribeRuleResponse::request() const
{
    Q_D(const DescribeRuleResponse);
    return static_cast<const DescribeRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents DescribeRule \a response.
 */
void DescribeRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::DescribeRuleResponsePrivate
 * \brief The DescribeRuleResponsePrivate class provides private implementation for DescribeRuleResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a DescribeRuleResponsePrivate object with public implementation \a q.
 */
DescribeRuleResponsePrivate::DescribeRuleResponsePrivate(
    DescribeRuleResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents DescribeRule response element from \a xml.
 */
void DescribeRuleResponsePrivate::parseDescribeRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
