// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpartnereventsourcesresponse.h"
#include "listpartnereventsourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::ListPartnerEventSourcesResponse
 * \brief The ListPartnerEventSourcesResponse class provides an interace for CloudWatchEvents ListPartnerEventSources responses.
 *
 * \inmodule QtAwsCloudWatchEvents
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
 * \sa CloudWatchEventsClient::listPartnerEventSources
 */

/*!
 * Constructs a ListPartnerEventSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPartnerEventSourcesResponse::ListPartnerEventSourcesResponse(
        const ListPartnerEventSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new ListPartnerEventSourcesResponsePrivate(this), parent)
{
    setRequest(new ListPartnerEventSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPartnerEventSourcesRequest * ListPartnerEventSourcesResponse::request() const
{
    Q_D(const ListPartnerEventSourcesResponse);
    return static_cast<const ListPartnerEventSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents ListPartnerEventSources \a response.
 */
void ListPartnerEventSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPartnerEventSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::ListPartnerEventSourcesResponsePrivate
 * \brief The ListPartnerEventSourcesResponsePrivate class provides private implementation for ListPartnerEventSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a ListPartnerEventSourcesResponsePrivate object with public implementation \a q.
 */
ListPartnerEventSourcesResponsePrivate::ListPartnerEventSourcesResponsePrivate(
    ListPartnerEventSourcesResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents ListPartnerEventSources response element from \a xml.
 */
void ListPartnerEventSourcesResponsePrivate::parseListPartnerEventSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPartnerEventSourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
