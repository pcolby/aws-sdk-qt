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

#include "updatemissionprofileresponse.h"
#include "updatemissionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::UpdateMissionProfileResponse
 * \brief The UpdateMissionProfileResponse class provides an interace for GroundStation UpdateMissionProfile responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::updateMissionProfile
 */

/*!
 * Constructs a UpdateMissionProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMissionProfileResponse::UpdateMissionProfileResponse(
        const UpdateMissionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new UpdateMissionProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateMissionProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMissionProfileRequest * UpdateMissionProfileResponse::request() const
{
    Q_D(const UpdateMissionProfileResponse);
    return static_cast<const UpdateMissionProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation UpdateMissionProfile \a response.
 */
void UpdateMissionProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMissionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::UpdateMissionProfileResponsePrivate
 * \brief The UpdateMissionProfileResponsePrivate class provides private implementation for UpdateMissionProfileResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a UpdateMissionProfileResponsePrivate object with public implementation \a q.
 */
UpdateMissionProfileResponsePrivate::UpdateMissionProfileResponsePrivate(
    UpdateMissionProfileResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation UpdateMissionProfile response element from \a xml.
 */
void UpdateMissionProfileResponsePrivate::parseUpdateMissionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMissionProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
