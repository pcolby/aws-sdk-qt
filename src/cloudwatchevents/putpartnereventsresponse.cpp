// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpartnereventsresponse.h"
#include "putpartnereventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::PutPartnerEventsResponse
 * \brief The PutPartnerEventsResponse class provides an interace for CloudWatchEvents PutPartnerEvents responses.
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
 * \sa CloudWatchEventsClient::putPartnerEvents
 */

/*!
 * Constructs a PutPartnerEventsResponse object for \a reply to \a request, with parent \a parent.
 */
PutPartnerEventsResponse::PutPartnerEventsResponse(
        const PutPartnerEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new PutPartnerEventsResponsePrivate(this), parent)
{
    setRequest(new PutPartnerEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPartnerEventsRequest * PutPartnerEventsResponse::request() const
{
    Q_D(const PutPartnerEventsResponse);
    return static_cast<const PutPartnerEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents PutPartnerEvents \a response.
 */
void PutPartnerEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPartnerEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::PutPartnerEventsResponsePrivate
 * \brief The PutPartnerEventsResponsePrivate class provides private implementation for PutPartnerEventsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a PutPartnerEventsResponsePrivate object with public implementation \a q.
 */
PutPartnerEventsResponsePrivate::PutPartnerEventsResponsePrivate(
    PutPartnerEventsResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents PutPartnerEvents response element from \a xml.
 */
void PutPartnerEventsResponsePrivate::parsePutPartnerEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPartnerEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
