// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapidestinationresponse.h"
#include "createapidestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::CreateApiDestinationResponse
 * \brief The CreateApiDestinationResponse class provides an interace for CloudWatchEvents CreateApiDestination responses.
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
 * \sa CloudWatchEventsClient::createApiDestination
 */

/*!
 * Constructs a CreateApiDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApiDestinationResponse::CreateApiDestinationResponse(
        const CreateApiDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new CreateApiDestinationResponsePrivate(this), parent)
{
    setRequest(new CreateApiDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApiDestinationRequest * CreateApiDestinationResponse::request() const
{
    Q_D(const CreateApiDestinationResponse);
    return static_cast<const CreateApiDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents CreateApiDestination \a response.
 */
void CreateApiDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApiDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::CreateApiDestinationResponsePrivate
 * \brief The CreateApiDestinationResponsePrivate class provides private implementation for CreateApiDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a CreateApiDestinationResponsePrivate object with public implementation \a q.
 */
CreateApiDestinationResponsePrivate::CreateApiDestinationResponsePrivate(
    CreateApiDestinationResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents CreateApiDestination response element from \a xml.
 */
void CreateApiDestinationResponsePrivate::parseCreateApiDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApiDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
