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

#include "updateconfigresponse.h"
#include "updateconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::UpdateConfigResponse
 * \brief The UpdateConfigResponse class provides an interace for GroundStation UpdateConfig responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::updateConfig
 */

/*!
 * Constructs a UpdateConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigResponse::UpdateConfigResponse(
        const UpdateConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new UpdateConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigRequest * UpdateConfigResponse::request() const
{
    return static_cast<const UpdateConfigRequest *>(GroundStationResponse::request());
}

/*!
 * \reimp
 * Parses a successful GroundStation UpdateConfig \a response.
 */
void UpdateConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::UpdateConfigResponsePrivate
 * \brief The UpdateConfigResponsePrivate class provides private implementation for UpdateConfigResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a UpdateConfigResponsePrivate object with public implementation \a q.
 */
UpdateConfigResponsePrivate::UpdateConfigResponsePrivate(
    UpdateConfigResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation UpdateConfig response element from \a xml.
 */
void UpdateConfigResponsePrivate::parseUpdateConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
