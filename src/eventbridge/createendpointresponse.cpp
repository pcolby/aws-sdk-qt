// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createendpointresponse.h"
#include "createendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::CreateEndpointResponse
 * \brief The CreateEndpointResponse class provides an interace for EventBridge CreateEndpoint responses.
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
 * \sa EventBridgeClient::createEndpoint
 */

/*!
 * Constructs a CreateEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEndpointResponse::CreateEndpointResponse(
        const CreateEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new CreateEndpointResponsePrivate(this), parent)
{
    setRequest(new CreateEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEndpointRequest * CreateEndpointResponse::request() const
{
    Q_D(const CreateEndpointResponse);
    return static_cast<const CreateEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge CreateEndpoint \a response.
 */
void CreateEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::CreateEndpointResponsePrivate
 * \brief The CreateEndpointResponsePrivate class provides private implementation for CreateEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a CreateEndpointResponsePrivate object with public implementation \a q.
 */
CreateEndpointResponsePrivate::CreateEndpointResponsePrivate(
    CreateEndpointResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge CreateEndpoint response element from \a xml.
 */
void CreateEndpointResponsePrivate::parseCreateEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
