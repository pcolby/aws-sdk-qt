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

#include "createapidestinationresponse.h"
#include "createapidestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::CreateApiDestinationResponse
 * \brief The CreateApiDestinationResponse class provides an interace for EventBridge CreateApiDestination responses.
 *
 * \inmodule QtAwsEventBridge
 *
 *  Amazon EventBridge helps you to respond to state changes in your Amazon Web Services resources. When your resources
 *  change state, they automatically send events to an event stream. You can create rules that match selected events in the
 *  stream and route them to targets to take action. You can also use rules to take action on a predetermined schedule. For
 *  example, you can configure rules
 * 
 *  to> <ul> <li>
 * 
 *  Automatically invoke an Lambda function to update DNS entries when an event notifies you that Amazon EC2 instance enters
 *  the running
 * 
 *  state> </li> <li>
 * 
 *  Direct specific API records from CloudTrail to an Amazon Kinesis data stream for detailed analysis of potential security
 *  or availability
 * 
 *  risks> </li> <li>
 * 
 *  Periodically invoke a built-in target to create a snapshot of an Amazon EBS
 * 
 *  volume> </li> </ul>
 * 
 *  For more information about the features of Amazon EventBridge, see the <a
 *  href="https://docs.aws.amazon.com/eventbridge/latest/userguide">Amazon EventBridge User
 *
 * \sa EventBridgeClient::createApiDestination
 */

/*!
 * Constructs a CreateApiDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApiDestinationResponse::CreateApiDestinationResponse(
        const CreateApiDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new CreateApiDestinationResponsePrivate(this), parent)
{
    setRequest(new CreateApiDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApiDestinationRequest * CreateApiDestinationResponse::request() const
{
    Q_D(const CreateApiDestinationResponse);
    return static_cast<const CreateApiDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge CreateApiDestination \a response.
 */
void CreateApiDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApiDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::CreateApiDestinationResponsePrivate
 * \brief The CreateApiDestinationResponsePrivate class provides private implementation for CreateApiDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a CreateApiDestinationResponsePrivate object with public implementation \a q.
 */
CreateApiDestinationResponsePrivate::CreateApiDestinationResponsePrivate(
    CreateApiDestinationResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge CreateApiDestination response element from \a xml.
 */
void CreateApiDestinationResponsePrivate::parseCreateApiDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApiDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
