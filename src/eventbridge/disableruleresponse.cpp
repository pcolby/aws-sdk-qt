// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disableruleresponse.h"
#include "disableruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::DisableRuleResponse
 * \brief The DisableRuleResponse class provides an interace for EventBridge DisableRule responses.
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
 * \sa EventBridgeClient::disableRule
 */

/*!
 * Constructs a DisableRuleResponse object for \a reply to \a request, with parent \a parent.
 */
DisableRuleResponse::DisableRuleResponse(
        const DisableRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new DisableRuleResponsePrivate(this), parent)
{
    setRequest(new DisableRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableRuleRequest * DisableRuleResponse::request() const
{
    Q_D(const DisableRuleResponse);
    return static_cast<const DisableRuleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge DisableRule \a response.
 */
void DisableRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::DisableRuleResponsePrivate
 * \brief The DisableRuleResponsePrivate class provides private implementation for DisableRuleResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a DisableRuleResponsePrivate object with public implementation \a q.
 */
DisableRuleResponsePrivate::DisableRuleResponsePrivate(
    DisableRuleResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge DisableRule response element from \a xml.
 */
void DisableRuleResponsePrivate::parseDisableRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
