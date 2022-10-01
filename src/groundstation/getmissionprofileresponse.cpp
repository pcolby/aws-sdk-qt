// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmissionprofileresponse.h"
#include "getmissionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetMissionProfileResponse
 * \brief The GetMissionProfileResponse class provides an interace for GroundStation GetMissionProfile responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getMissionProfile
 */

/*!
 * Constructs a GetMissionProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetMissionProfileResponse::GetMissionProfileResponse(
        const GetMissionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new GetMissionProfileResponsePrivate(this), parent)
{
    setRequest(new GetMissionProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMissionProfileRequest * GetMissionProfileResponse::request() const
{
    Q_D(const GetMissionProfileResponse);
    return static_cast<const GetMissionProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation GetMissionProfile \a response.
 */
void GetMissionProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMissionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::GetMissionProfileResponsePrivate
 * \brief The GetMissionProfileResponsePrivate class provides private implementation for GetMissionProfileResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetMissionProfileResponsePrivate object with public implementation \a q.
 */
GetMissionProfileResponsePrivate::GetMissionProfileResponsePrivate(
    GetMissionProfileResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation GetMissionProfile response element from \a xml.
 */
void GetMissionProfileResponsePrivate::parseGetMissionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMissionProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
