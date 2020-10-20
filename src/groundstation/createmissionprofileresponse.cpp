/*
    Copyright 2013-2020 Paul Colby

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

#include "createmissionprofileresponse.h"
#include "createmissionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CreateMissionProfileResponse
 * \brief The CreateMissionProfileResponse class provides an interace for GroundStation CreateMissionProfile responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::createMissionProfile
 */

/*!
 * Constructs a CreateMissionProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMissionProfileResponse::CreateMissionProfileResponse(
        const CreateMissionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new CreateMissionProfileResponsePrivate(this), parent)
{
    setRequest(new CreateMissionProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMissionProfileRequest * CreateMissionProfileResponse::request() const
{
    Q_D(const CreateMissionProfileResponse);
    return static_cast<const CreateMissionProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation CreateMissionProfile \a response.
 */
void CreateMissionProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMissionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::CreateMissionProfileResponsePrivate
 * \brief The CreateMissionProfileResponsePrivate class provides private implementation for CreateMissionProfileResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CreateMissionProfileResponsePrivate object with public implementation \a q.
 */
CreateMissionProfileResponsePrivate::CreateMissionProfileResponsePrivate(
    CreateMissionProfileResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation CreateMissionProfile response element from \a xml.
 */
void CreateMissionProfileResponsePrivate::parseCreateMissionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMissionProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
