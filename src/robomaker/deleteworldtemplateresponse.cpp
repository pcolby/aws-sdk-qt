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

#include "deleteworldtemplateresponse.h"
#include "deleteworldtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteWorldTemplateResponse
 * \brief The DeleteWorldTemplateResponse class provides an interace for RoboMaker DeleteWorldTemplate responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteWorldTemplate
 */

/*!
 * Constructs a DeleteWorldTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorldTemplateResponse::DeleteWorldTemplateResponse(
        const DeleteWorldTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeleteWorldTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteWorldTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorldTemplateRequest * DeleteWorldTemplateResponse::request() const
{
    return static_cast<const DeleteWorldTemplateRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeleteWorldTemplate \a response.
 */
void DeleteWorldTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorldTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeleteWorldTemplateResponsePrivate
 * \brief The DeleteWorldTemplateResponsePrivate class provides private implementation for DeleteWorldTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteWorldTemplateResponsePrivate object with public implementation \a q.
 */
DeleteWorldTemplateResponsePrivate::DeleteWorldTemplateResponsePrivate(
    DeleteWorldTemplateResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeleteWorldTemplate response element from \a xml.
 */
void DeleteWorldTemplateResponsePrivate::parseDeleteWorldTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorldTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
