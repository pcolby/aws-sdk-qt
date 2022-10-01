// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemissionprofileresponse.h"
#include "deletemissionprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::DeleteMissionProfileResponse
 * \brief The DeleteMissionProfileResponse class provides an interace for GroundStation DeleteMissionProfile responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::deleteMissionProfile
 */

/*!
 * Constructs a DeleteMissionProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMissionProfileResponse::DeleteMissionProfileResponse(
        const DeleteMissionProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new DeleteMissionProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteMissionProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMissionProfileRequest * DeleteMissionProfileResponse::request() const
{
    Q_D(const DeleteMissionProfileResponse);
    return static_cast<const DeleteMissionProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation DeleteMissionProfile \a response.
 */
void DeleteMissionProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMissionProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::DeleteMissionProfileResponsePrivate
 * \brief The DeleteMissionProfileResponsePrivate class provides private implementation for DeleteMissionProfileResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a DeleteMissionProfileResponsePrivate object with public implementation \a q.
 */
DeleteMissionProfileResponsePrivate::DeleteMissionProfileResponsePrivate(
    DeleteMissionProfileResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation DeleteMissionProfile response element from \a xml.
 */
void DeleteMissionProfileResponsePrivate::parseDeleteMissionProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMissionProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
