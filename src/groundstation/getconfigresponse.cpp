// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconfigresponse.h"
#include "getconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetConfigResponse
 * \brief The GetConfigResponse class provides an interace for GroundStation GetConfig responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getConfig
 */

/*!
 * Constructs a GetConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetConfigResponse::GetConfigResponse(
        const GetConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new GetConfigResponsePrivate(this), parent)
{
    setRequest(new GetConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConfigRequest * GetConfigResponse::request() const
{
    Q_D(const GetConfigResponse);
    return static_cast<const GetConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation GetConfig \a response.
 */
void GetConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::GetConfigResponsePrivate
 * \brief The GetConfigResponsePrivate class provides private implementation for GetConfigResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetConfigResponsePrivate object with public implementation \a q.
 */
GetConfigResponsePrivate::GetConfigResponsePrivate(
    GetConfigResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation GetConfig response element from \a xml.
 */
void GetConfigResponsePrivate::parseGetConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
