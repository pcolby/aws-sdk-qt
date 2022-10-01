// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
