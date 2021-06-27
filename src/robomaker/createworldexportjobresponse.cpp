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

#include "createworldexportjobresponse.h"
#include "createworldexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateWorldExportJobResponse
 * \brief The CreateWorldExportJobResponse class provides an interace for RoboMaker CreateWorldExportJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createWorldExportJob
 */

/*!
 * Constructs a CreateWorldExportJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorldExportJobResponse::CreateWorldExportJobResponse(
        const CreateWorldExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateWorldExportJobResponsePrivate(this), parent)
{
    setRequest(new CreateWorldExportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorldExportJobRequest * CreateWorldExportJobResponse::request() const
{
    return static_cast<const CreateWorldExportJobRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateWorldExportJob \a response.
 */
void CreateWorldExportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorldExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateWorldExportJobResponsePrivate
 * \brief The CreateWorldExportJobResponsePrivate class provides private implementation for CreateWorldExportJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateWorldExportJobResponsePrivate object with public implementation \a q.
 */
CreateWorldExportJobResponsePrivate::CreateWorldExportJobResponsePrivate(
    CreateWorldExportJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateWorldExportJob response element from \a xml.
 */
void CreateWorldExportJobResponsePrivate::parseCreateWorldExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorldExportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
