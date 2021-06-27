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

#include "starteventsdetectionjobresponse.h"
#include "starteventsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartEventsDetectionJobResponse
 * \brief The StartEventsDetectionJobResponse class provides an interace for Comprehend StartEventsDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startEventsDetectionJob
 */

/*!
 * Constructs a StartEventsDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartEventsDetectionJobResponse::StartEventsDetectionJobResponse(
        const StartEventsDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartEventsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartEventsDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartEventsDetectionJobRequest * StartEventsDetectionJobResponse::request() const
{
    return static_cast<const StartEventsDetectionJobRequest *>(ComprehendResponse::request());
}

/*!
 * \reimp
 * Parses a successful Comprehend StartEventsDetectionJob \a response.
 */
void StartEventsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartEventsDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartEventsDetectionJobResponsePrivate
 * \brief The StartEventsDetectionJobResponsePrivate class provides private implementation for StartEventsDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartEventsDetectionJobResponsePrivate object with public implementation \a q.
 */
StartEventsDetectionJobResponsePrivate::StartEventsDetectionJobResponsePrivate(
    StartEventsDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartEventsDetectionJob response element from \a xml.
 */
void StartEventsDetectionJobResponsePrivate::parseStartEventsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartEventsDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
