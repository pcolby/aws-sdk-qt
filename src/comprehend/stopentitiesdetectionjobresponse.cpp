/*
    Copyright 2013-2020 Paul Colby

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

#include "stopentitiesdetectionjobresponse.h"
#include "stopentitiesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StopEntitiesDetectionJobResponse
 * \brief The StopEntitiesDetectionJobResponse class provides an interace for Comprehend StopEntitiesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::stopEntitiesDetectionJob
 */

/*!
 * Constructs a StopEntitiesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StopEntitiesDetectionJobResponse::StopEntitiesDetectionJobResponse(
        const StopEntitiesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StopEntitiesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StopEntitiesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopEntitiesDetectionJobRequest * StopEntitiesDetectionJobResponse::request() const
{
    Q_D(const StopEntitiesDetectionJobResponse);
    return static_cast<const StopEntitiesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StopEntitiesDetectionJob \a response.
 */
void StopEntitiesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopEntitiesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StopEntitiesDetectionJobResponsePrivate
 * \brief The StopEntitiesDetectionJobResponsePrivate class provides private implementation for StopEntitiesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StopEntitiesDetectionJobResponsePrivate object with public implementation \a q.
 */
StopEntitiesDetectionJobResponsePrivate::StopEntitiesDetectionJobResponsePrivate(
    StopEntitiesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StopEntitiesDetectionJob response element from \a xml.
 */
void StopEntitiesDetectionJobResponsePrivate::parseStopEntitiesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopEntitiesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
