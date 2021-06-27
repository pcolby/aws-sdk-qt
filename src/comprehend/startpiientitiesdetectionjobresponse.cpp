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

#include "startpiientitiesdetectionjobresponse.h"
#include "startpiientitiesdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::StartPiiEntitiesDetectionJobResponse
 * \brief The StartPiiEntitiesDetectionJobResponse class provides an interace for Comprehend StartPiiEntitiesDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::startPiiEntitiesDetectionJob
 */

/*!
 * Constructs a StartPiiEntitiesDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartPiiEntitiesDetectionJobResponse::StartPiiEntitiesDetectionJobResponse(
        const StartPiiEntitiesDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new StartPiiEntitiesDetectionJobResponsePrivate(this), parent)
{
    setRequest(new StartPiiEntitiesDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartPiiEntitiesDetectionJobRequest * StartPiiEntitiesDetectionJobResponse::request() const
{
    return static_cast<const StartPiiEntitiesDetectionJobRequest *>(ComprehendResponse::request());
}

/*!
 * \reimp
 * Parses a successful Comprehend StartPiiEntitiesDetectionJob \a response.
 */
void StartPiiEntitiesDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartPiiEntitiesDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::StartPiiEntitiesDetectionJobResponsePrivate
 * \brief The StartPiiEntitiesDetectionJobResponsePrivate class provides private implementation for StartPiiEntitiesDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a StartPiiEntitiesDetectionJobResponsePrivate object with public implementation \a q.
 */
StartPiiEntitiesDetectionJobResponsePrivate::StartPiiEntitiesDetectionJobResponsePrivate(
    StartPiiEntitiesDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend StartPiiEntitiesDetectionJob response element from \a xml.
 */
void StartPiiEntitiesDetectionJobResponsePrivate::parseStartPiiEntitiesDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartPiiEntitiesDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
