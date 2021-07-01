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

#include "createworldtemplateresponse.h"
#include "createworldtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateWorldTemplateResponse
 * \brief The CreateWorldTemplateResponse class provides an interace for RoboMaker CreateWorldTemplate responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createWorldTemplate
 */

/*!
 * Constructs a CreateWorldTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorldTemplateResponse::CreateWorldTemplateResponse(
        const CreateWorldTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateWorldTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateWorldTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorldTemplateRequest * CreateWorldTemplateResponse::request() const
{
    Q_D(const CreateWorldTemplateResponse);
    return static_cast<const CreateWorldTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateWorldTemplate \a response.
 */
void CreateWorldTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorldTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateWorldTemplateResponsePrivate
 * \brief The CreateWorldTemplateResponsePrivate class provides private implementation for CreateWorldTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateWorldTemplateResponsePrivate object with public implementation \a q.
 */
CreateWorldTemplateResponsePrivate::CreateWorldTemplateResponsePrivate(
    CreateWorldTemplateResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateWorldTemplate response element from \a xml.
 */
void CreateWorldTemplateResponsePrivate::parseCreateWorldTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorldTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
