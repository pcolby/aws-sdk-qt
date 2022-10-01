// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapidestinationresponse.h"
#include "updateapidestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::UpdateApiDestinationResponse
 * \brief The UpdateApiDestinationResponse class provides an interace for CloudWatchEvents UpdateApiDestination responses.
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
 * \sa CloudWatchEventsClient::updateApiDestination
 */

/*!
 * Constructs a UpdateApiDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApiDestinationResponse::UpdateApiDestinationResponse(
        const UpdateApiDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new UpdateApiDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateApiDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApiDestinationRequest * UpdateApiDestinationResponse::request() const
{
    Q_D(const UpdateApiDestinationResponse);
    return static_cast<const UpdateApiDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents UpdateApiDestination \a response.
 */
void UpdateApiDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApiDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::UpdateApiDestinationResponsePrivate
 * \brief The UpdateApiDestinationResponsePrivate class provides private implementation for UpdateApiDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a UpdateApiDestinationResponsePrivate object with public implementation \a q.
 */
UpdateApiDestinationResponsePrivate::UpdateApiDestinationResponsePrivate(
    UpdateApiDestinationResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents UpdateApiDestination response element from \a xml.
 */
void UpdateApiDestinationResponsePrivate::parseUpdateApiDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApiDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
