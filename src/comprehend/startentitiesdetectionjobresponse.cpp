/*
    Copyright 2013-2018 Paul Colby

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

#include "startentitiesdetectionjobresponse.h"
#include "startentitiesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartEntitiesDetectionJobResponse
 * \brief The StartEntitiesDetectionJobResponse class provides an interace for Comprehend StartEntitiesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startEntitiesDetectionJob
 */

/*!
 * Constructs a StartEntitiesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartEntitiesDetectionJobResponse::StartEntitiesDetectionJobResponse(
        const StartEntitiesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartEntitiesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartEntitiesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartEntitiesDetectionJobRequest * StartEntitiesDetectionJobResponse::request() const
{
    Q_D(const StartEntitiesDetectionJobResponse);
    return static_cast<const StartEntitiesDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend StartEntitiesDetectionJob \a response.
 */
void StartEntitiesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartEntitiesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartEntitiesDetectionJobResponsePrivate
 * \brief The StartEntitiesDetectionJobResponsePrivate class provides private implementation for StartEntitiesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartEntitiesDetectionJobResponsePrivate object with public implementation \a q.
 */
StartEntitiesDetectionJobResponsePrivate::StartEntitiesDetectionJobResponsePrivate(
    StartEntitiesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartEntitiesDetectionJob response element from \a xml.
 */
void StartEntitiesDetectionJobResponsePrivate::parseStartEntitiesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartEntitiesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
