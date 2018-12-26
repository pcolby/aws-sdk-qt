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

#include "syncdeploymentjobresponse.h"
#include "syncdeploymentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::SyncDeploymentJobResponse
 * \brief The SyncDeploymentJobResponse class provides an interace for RoboMaker SyncDeploymentJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::syncDeploymentJob
 */

/*!
 * Constructs a SyncDeploymentJobResponse object for \a reply to \a request, with parent \a parent.
 */
SyncDeploymentJobResponse::SyncDeploymentJobResponse(
        const SyncDeploymentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new SyncDeploymentJobResponsePrivate(this), parent)
{
    setRequest(new SyncDeploymentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SyncDeploymentJobRequest * SyncDeploymentJobResponse::request() const
{
    Q_D(const SyncDeploymentJobResponse);
    return static_cast<const SyncDeploymentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker SyncDeploymentJob \a response.
 */
void SyncDeploymentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SyncDeploymentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::SyncDeploymentJobResponsePrivate
 * \brief The SyncDeploymentJobResponsePrivate class provides private implementation for SyncDeploymentJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a SyncDeploymentJobResponsePrivate object with public implementation \a q.
 */
SyncDeploymentJobResponsePrivate::SyncDeploymentJobResponsePrivate(
    SyncDeploymentJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker SyncDeploymentJob response element from \a xml.
 */
void SyncDeploymentJobResponsePrivate::parseSyncDeploymentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SyncDeploymentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
