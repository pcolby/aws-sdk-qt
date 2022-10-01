/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletearchiveresponse.h"
#include "deletearchiveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchEvents {

/*!
 * \class QtAws::CloudWatchEvents::DeleteArchiveResponse
 * \brief The DeleteArchiveResponse class provides an interace for CloudWatchEvents DeleteArchive responses.
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
 * \sa CloudWatchEventsClient::deleteArchive
 */

/*!
 * Constructs a DeleteArchiveResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteArchiveResponse::DeleteArchiveResponse(
        const DeleteArchiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchEventsResponse(new DeleteArchiveResponsePrivate(this), parent)
{
    setRequest(new DeleteArchiveRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteArchiveRequest * DeleteArchiveResponse::request() const
{
    Q_D(const DeleteArchiveResponse);
    return static_cast<const DeleteArchiveRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatchEvents DeleteArchive \a response.
 */
void DeleteArchiveResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteArchiveResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatchEvents::DeleteArchiveResponsePrivate
 * \brief The DeleteArchiveResponsePrivate class provides private implementation for DeleteArchiveResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatchEvents
 */

/*!
 * Constructs a DeleteArchiveResponsePrivate object with public implementation \a q.
 */
DeleteArchiveResponsePrivate::DeleteArchiveResponsePrivate(
    DeleteArchiveResponse * const q) : CloudWatchEventsResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatchEvents DeleteArchive response element from \a xml.
 */
void DeleteArchiveResponsePrivate::parseDeleteArchiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteArchiveResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatchEvents
} // namespace QtAws
