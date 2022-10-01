// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrulesresponse.h"
#include "listrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::ListRulesResponse
 * \brief The ListRulesResponse class provides an interace for EventBridge ListRules responses.
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
 * \sa EventBridgeClient::listRules
 */

/*!
 * Constructs a ListRulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRulesResponse::ListRulesResponse(
        const ListRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new ListRulesResponsePrivate(this), parent)
{
    setRequest(new ListRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRulesRequest * ListRulesResponse::request() const
{
    Q_D(const ListRulesResponse);
    return static_cast<const ListRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge ListRules \a response.
 */
void ListRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::ListRulesResponsePrivate
 * \brief The ListRulesResponsePrivate class provides private implementation for ListRulesResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a ListRulesResponsePrivate object with public implementation \a q.
 */
ListRulesResponsePrivate::ListRulesResponsePrivate(
    ListRulesResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge ListRules response element from \a xml.
 */
void ListRulesResponsePrivate::parseListRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
