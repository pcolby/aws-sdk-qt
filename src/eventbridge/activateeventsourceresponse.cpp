// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "activateeventsourceresponse.h"
#include "activateeventsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::ActivateEventSourceResponse
 * \brief The ActivateEventSourceResponse class provides an interace for EventBridge ActivateEventSource responses.
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
 * \sa EventBridgeClient::activateEventSource
 */

/*!
 * Constructs a ActivateEventSourceResponse object for \a reply to \a request, with parent \a parent.
 */
ActivateEventSourceResponse::ActivateEventSourceResponse(
        const ActivateEventSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new ActivateEventSourceResponsePrivate(this), parent)
{
    setRequest(new ActivateEventSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ActivateEventSourceRequest * ActivateEventSourceResponse::request() const
{
    Q_D(const ActivateEventSourceResponse);
    return static_cast<const ActivateEventSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge ActivateEventSource \a response.
 */
void ActivateEventSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ActivateEventSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::ActivateEventSourceResponsePrivate
 * \brief The ActivateEventSourceResponsePrivate class provides private implementation for ActivateEventSourceResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a ActivateEventSourceResponsePrivate object with public implementation \a q.
 */
ActivateEventSourceResponsePrivate::ActivateEventSourceResponsePrivate(
    ActivateEventSourceResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge ActivateEventSource response element from \a xml.
 */
void ActivateEventSourceResponsePrivate::parseActivateEventSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ActivateEventSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
