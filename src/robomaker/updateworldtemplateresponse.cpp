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

#include "updateworldtemplateresponse.h"
#include "updateworldtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateWorldTemplateResponse
 * \brief The UpdateWorldTemplateResponse class provides an interace for RoboMaker UpdateWorldTemplate responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateWorldTemplate
 */

/*!
 * Constructs a UpdateWorldTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorldTemplateResponse::UpdateWorldTemplateResponse(
        const UpdateWorldTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new UpdateWorldTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateWorldTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorldTemplateRequest * UpdateWorldTemplateResponse::request() const
{
    Q_D(const UpdateWorldTemplateResponse);
    return static_cast<const UpdateWorldTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker UpdateWorldTemplate \a response.
 */
void UpdateWorldTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorldTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::UpdateWorldTemplateResponsePrivate
 * \brief The UpdateWorldTemplateResponsePrivate class provides private implementation for UpdateWorldTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateWorldTemplateResponsePrivate object with public implementation \a q.
 */
UpdateWorldTemplateResponsePrivate::UpdateWorldTemplateResponsePrivate(
    UpdateWorldTemplateResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker UpdateWorldTemplate response element from \a xml.
 */
void UpdateWorldTemplateResponsePrivate::parseUpdateWorldTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorldTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
