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

#include "createdeploymentjobresponse.h"
#include "createdeploymentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateDeploymentJobResponse
 * \brief The CreateDeploymentJobResponse class provides an interace for RoboMaker CreateDeploymentJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createDeploymentJob
 */

/*!
 * Constructs a CreateDeploymentJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeploymentJobResponse::CreateDeploymentJobResponse(
        const CreateDeploymentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateDeploymentJobResponsePrivate(this), parent)
{
    setRequest(new CreateDeploymentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeploymentJobRequest * CreateDeploymentJobResponse::request() const
{
    Q_D(const CreateDeploymentJobResponse);
    return static_cast<const CreateDeploymentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateDeploymentJob \a response.
 */
void CreateDeploymentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeploymentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateDeploymentJobResponsePrivate
 * \brief The CreateDeploymentJobResponsePrivate class provides private implementation for CreateDeploymentJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateDeploymentJobResponsePrivate object with public implementation \a q.
 */
CreateDeploymentJobResponsePrivate::CreateDeploymentJobResponsePrivate(
    CreateDeploymentJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateDeploymentJob response element from \a xml.
 */
void CreateDeploymentJobResponsePrivate::parseCreateDeploymentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeploymentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
