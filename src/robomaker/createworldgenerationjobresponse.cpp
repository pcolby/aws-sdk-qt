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

#include "createworldgenerationjobresponse.h"
#include "createworldgenerationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateWorldGenerationJobResponse
 * \brief The CreateWorldGenerationJobResponse class provides an interace for RoboMaker CreateWorldGenerationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createWorldGenerationJob
 */

/*!
 * Constructs a CreateWorldGenerationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorldGenerationJobResponse::CreateWorldGenerationJobResponse(
        const CreateWorldGenerationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateWorldGenerationJobResponsePrivate(this), parent)
{
    setRequest(new CreateWorldGenerationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorldGenerationJobRequest * CreateWorldGenerationJobResponse::request() const
{
    Q_D(const CreateWorldGenerationJobResponse);
    return static_cast<const CreateWorldGenerationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateWorldGenerationJob \a response.
 */
void CreateWorldGenerationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorldGenerationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateWorldGenerationJobResponsePrivate
 * \brief The CreateWorldGenerationJobResponsePrivate class provides private implementation for CreateWorldGenerationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateWorldGenerationJobResponsePrivate object with public implementation \a q.
 */
CreateWorldGenerationJobResponsePrivate::CreateWorldGenerationJobResponsePrivate(
    CreateWorldGenerationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateWorldGenerationJob response element from \a xml.
 */
void CreateWorldGenerationJobResponsePrivate::parseCreateWorldGenerationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorldGenerationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
