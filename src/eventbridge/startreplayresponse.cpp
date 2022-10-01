// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startreplayresponse.h"
#include "startreplayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::StartReplayResponse
 * \brief The StartReplayResponse class provides an interace for EventBridge StartReplay responses.
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
 * \sa EventBridgeClient::startReplay
 */

/*!
 * Constructs a StartReplayResponse object for \a reply to \a request, with parent \a parent.
 */
StartReplayResponse::StartReplayResponse(
        const StartReplayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new StartReplayResponsePrivate(this), parent)
{
    setRequest(new StartReplayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartReplayRequest * StartReplayResponse::request() const
{
    Q_D(const StartReplayResponse);
    return static_cast<const StartReplayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge StartReplay \a response.
 */
void StartReplayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartReplayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::StartReplayResponsePrivate
 * \brief The StartReplayResponsePrivate class provides private implementation for StartReplayResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a StartReplayResponsePrivate object with public implementation \a q.
 */
StartReplayResponsePrivate::StartReplayResponsePrivate(
    StartReplayResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge StartReplay response element from \a xml.
 */
void StartReplayResponsePrivate::parseStartReplayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartReplayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
