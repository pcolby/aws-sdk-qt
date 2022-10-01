// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectionresponse.h"
#include "updateconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::UpdateConnectionResponse
 * \brief The UpdateConnectionResponse class provides an interace for EventBridge UpdateConnection responses.
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
 * \sa EventBridgeClient::updateConnection
 */

/*!
 * Constructs a UpdateConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectionResponse::UpdateConnectionResponse(
        const UpdateConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new UpdateConnectionResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectionRequest * UpdateConnectionResponse::request() const
{
    Q_D(const UpdateConnectionResponse);
    return static_cast<const UpdateConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge UpdateConnection \a response.
 */
void UpdateConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::UpdateConnectionResponsePrivate
 * \brief The UpdateConnectionResponsePrivate class provides private implementation for UpdateConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a UpdateConnectionResponsePrivate object with public implementation \a q.
 */
UpdateConnectionResponsePrivate::UpdateConnectionResponsePrivate(
    UpdateConnectionResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge UpdateConnection response element from \a xml.
 */
void UpdateConnectionResponsePrivate::parseUpdateConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
