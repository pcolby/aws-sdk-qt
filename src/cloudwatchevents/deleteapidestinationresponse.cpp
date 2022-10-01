// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapidestinationresponse.h"
#include "deleteapidestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::DeleteApiDestinationResponse
 * \brief The DeleteApiDestinationResponse class provides an interace for CloudWatchEvents DeleteApiDestination responses.
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
 * \sa CloudWatchEventsClient::deleteApiDestination
 */

/*!
 * Constructs a DeleteApiDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApiDestinationResponse::DeleteApiDestinationResponse(
        const DeleteApiDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new DeleteApiDestinationResponsePrivate(this), parent)
{
    setRequest(new DeleteApiDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApiDestinationRequest * DeleteApiDestinationResponse::request() const
{
    Q_D(const DeleteApiDestinationResponse);
    return static_cast<const DeleteApiDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents DeleteApiDestination \a response.
 */
void DeleteApiDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteApiDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::DeleteApiDestinationResponsePrivate
 * \brief The DeleteApiDestinationResponsePrivate class provides private implementation for DeleteApiDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a DeleteApiDestinationResponsePrivate object with public implementation \a q.
 */
DeleteApiDestinationResponsePrivate::DeleteApiDestinationResponsePrivate(
    DeleteApiDestinationResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents DeleteApiDestination response element from \a xml.
 */
void DeleteApiDestinationResponsePrivate::parseDeleteApiDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApiDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
