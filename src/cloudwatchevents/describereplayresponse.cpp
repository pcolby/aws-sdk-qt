// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereplayresponse.h"
#include "describereplayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::DescribeReplayResponse
 * \brief The DescribeReplayResponse class provides an interace for CloudWatchEvents DescribeReplay responses.
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
 * \sa CloudWatchEventsClient::describeReplay
 */

/*!
 * Constructs a DescribeReplayResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplayResponse::DescribeReplayResponse(
        const DescribeReplayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new DescribeReplayResponsePrivate(this), parent)
{
    setRequest(new DescribeReplayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplayRequest * DescribeReplayResponse::request() const
{
    Q_D(const DescribeReplayResponse);
    return static_cast<const DescribeReplayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents DescribeReplay \a response.
 */
void DescribeReplayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::DescribeReplayResponsePrivate
 * \brief The DescribeReplayResponsePrivate class provides private implementation for DescribeReplayResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a DescribeReplayResponsePrivate object with public implementation \a q.
 */
DescribeReplayResponsePrivate::DescribeReplayResponsePrivate(
    DescribeReplayResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents DescribeReplay response element from \a xml.
 */
void DescribeReplayResponsePrivate::parseDescribeReplayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
