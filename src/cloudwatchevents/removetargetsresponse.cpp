// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removetargetsresponse.h"
#include "removetargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::RemoveTargetsResponse
 * \brief The RemoveTargetsResponse class provides an interace for CloudWatchEvents RemoveTargets responses.
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
 * \sa CloudWatchEventsClient::removeTargets
 */

/*!
 * Constructs a RemoveTargetsResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveTargetsResponse::RemoveTargetsResponse(
        const RemoveTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new RemoveTargetsResponsePrivate(this), parent)
{
    setRequest(new RemoveTargetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveTargetsRequest * RemoveTargetsResponse::request() const
{
    Q_D(const RemoveTargetsResponse);
    return static_cast<const RemoveTargetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents RemoveTargets \a response.
 */
void RemoveTargetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveTargetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::RemoveTargetsResponsePrivate
 * \brief The RemoveTargetsResponsePrivate class provides private implementation for RemoveTargetsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a RemoveTargetsResponsePrivate object with public implementation \a q.
 */
RemoveTargetsResponsePrivate::RemoveTargetsResponsePrivate(
    RemoveTargetsResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents RemoveTargets response element from \a xml.
 */
void RemoveTargetsResponsePrivate::parseRemoveTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTargetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
