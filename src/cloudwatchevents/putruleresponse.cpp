/*
    Copyright 2013-2018 Paul Colby

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

#include "putruleresponse.h"
#include "putruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::PutRuleResponse
 * \brief The PutRuleResponse class provides an interace for CloudWatchEvents PutRule responses.
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
 * \sa CloudWatchEventsClient::putRule
 */

/*!
 * Constructs a PutRuleResponse object for \a reply to \a request, with parent \a parent.
 */
PutRuleResponse::PutRuleResponse(
        const PutRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new PutRuleResponsePrivate(this), parent)
{
    setRequest(new PutRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRuleRequest * PutRuleResponse::request() const
{
    Q_D(const PutRuleResponse);
    return static_cast<const PutRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents PutRule \a response.
 */
void PutRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::PutRuleResponsePrivate
 * \brief The PutRuleResponsePrivate class provides private implementation for PutRuleResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a PutRuleResponsePrivate object with public implementation \a q.
 */
PutRuleResponsePrivate::PutRuleResponsePrivate(
    PutRuleResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents PutRule response element from \a xml.
 */
void PutRuleResponsePrivate::parsePutRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRuleResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
