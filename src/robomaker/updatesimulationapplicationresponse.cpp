/*
    Copyright 2013-2019 Paul Colby

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

#include "updatesimulationapplicationresponse.h"
#include "updatesimulationapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateSimulationApplicationResponse
 * \brief The UpdateSimulationApplicationResponse class provides an interace for RoboMaker UpdateSimulationApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateSimulationApplication
 */

/*!
 * Constructs a UpdateSimulationApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSimulationApplicationResponse::UpdateSimulationApplicationResponse(
        const UpdateSimulationApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new UpdateSimulationApplicationResponsePrivate(this), parent)
{
    setRequest(new UpdateSimulationApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSimulationApplicationRequest * UpdateSimulationApplicationResponse::request() const
{
    Q_D(const UpdateSimulationApplicationResponse);
    return static_cast<const UpdateSimulationApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker UpdateSimulationApplication \a response.
 */
void UpdateSimulationApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSimulationApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::UpdateSimulationApplicationResponsePrivate
 * \brief The UpdateSimulationApplicationResponsePrivate class provides private implementation for UpdateSimulationApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateSimulationApplicationResponsePrivate object with public implementation \a q.
 */
UpdateSimulationApplicationResponsePrivate::UpdateSimulationApplicationResponsePrivate(
    UpdateSimulationApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker UpdateSimulationApplication response element from \a xml.
 */
void UpdateSimulationApplicationResponsePrivate::parseUpdateSimulationApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSimulationApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
