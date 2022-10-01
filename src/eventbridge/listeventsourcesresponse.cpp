// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventsourcesresponse.h"
#include "listeventsourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EventBridge {

/*!
 * \class QtAws::EventBridge::ListEventSourcesResponse
 * \brief The ListEventSourcesResponse class provides an interace for EventBridge ListEventSources responses.
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
 * \sa EventBridgeClient::listEventSources
 */

/*!
 * Constructs a ListEventSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventSourcesResponse::ListEventSourcesResponse(
        const ListEventSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EventBridgeResponse(new ListEventSourcesResponsePrivate(this), parent)
{
    setRequest(new ListEventSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventSourcesRequest * ListEventSourcesResponse::request() const
{
    Q_D(const ListEventSourcesResponse);
    return static_cast<const ListEventSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EventBridge ListEventSources \a response.
 */
void ListEventSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EventBridge::ListEventSourcesResponsePrivate
 * \brief The ListEventSourcesResponsePrivate class provides private implementation for ListEventSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsEventBridge
 */

/*!
 * Constructs a ListEventSourcesResponsePrivate object with public implementation \a q.
 */
ListEventSourcesResponsePrivate::ListEventSourcesResponsePrivate(
    ListEventSourcesResponse * const q) : EventBridgeResponsePrivate(q)
{

}

/*!
 * Parses a EventBridge ListEventSources response element from \a xml.
 */
void ListEventSourcesResponsePrivate::parseListEventSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventSourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EventBridge
} // namespace QtAws
