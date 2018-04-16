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

#include "puttargetsresponse.h"
#include "puttargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::PutTargetsResponse
 *
 * \brief The PutTargetsResponse class provides an interace for CloudWatchEvents PutTargets responses.
 *
 * \ingroup CloudWatchEvents
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
 * \sa CloudWatchEventsClient::putTargets
 */

/*!
 * @brief  Constructs a new PutTargetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutTargetsResponse::PutTargetsResponse(
        const PutTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new PutTargetsResponsePrivate(this), parent)
{
    setRequest(new PutTargetsRequest(request));
    setReply(reply);
}

const PutTargetsRequest * PutTargetsResponse::request() const
{
    Q_D(const PutTargetsResponse);
    return static_cast<const PutTargetsRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudWatchEvents PutTargets response.
 *
 * @param  response  Response to parse.
 */
void PutTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutTargetsResponsePrivate
 *
 * \brief Private implementation for PutTargetsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutTargetsResponse instance.
 */
PutTargetsResponsePrivate::PutTargetsResponsePrivate(
    PutTargetsResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudWatchEvents PutTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutTargetsResponsePrivate::parsePutTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutTargetsResponse"));
    /// @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
