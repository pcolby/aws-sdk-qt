/*
    Copyright 2013-2021 Paul Colby

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

#include "deletepartnereventsourceresponse.h"
#include "deletepartnereventsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::DeletePartnerEventSourceResponse
 * \brief The DeletePartnerEventSourceResponse class provides an interace for EventBridge DeletePartnerEventSource responses.
 *
 * \inmodule QtAwsEventBridge
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
 * \sa EventBridgeClient::deletePartnerEventSource
 */

/*!
 * Constructs a DeletePartnerEventSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePartnerEventSourceResponse::DeletePartnerEventSourceResponse(
        const DeletePartnerEventSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new DeletePartnerEventSourceResponsePrivate(this), parent)
{
    setRequest(new DeletePartnerEventSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePartnerEventSourceRequest * DeletePartnerEventSourceResponse::request() const
{
    Q_D(const DeletePartnerEventSourceResponse);
    return static_cast<const DeletePartnerEventSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge DeletePartnerEventSource \a response.
 */
void DeletePartnerEventSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePartnerEventSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::DeletePartnerEventSourceResponsePrivate
 * \brief The DeletePartnerEventSourceResponsePrivate class provides private implementation for DeletePartnerEventSourceResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a DeletePartnerEventSourceResponsePrivate object with public implementation \a q.
 */
DeletePartnerEventSourceResponsePrivate::DeletePartnerEventSourceResponsePrivate(
    DeletePartnerEventSourceResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge DeletePartnerEventSource response element from \a xml.
 */
void DeletePartnerEventSourceResponsePrivate::parseDeletePartnerEventSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePartnerEventSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
