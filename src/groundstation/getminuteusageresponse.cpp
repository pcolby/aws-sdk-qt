// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getminuteusageresponse.h"
#include "getminuteusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetMinuteUsageResponse
 * \brief The GetMinuteUsageResponse class provides an interace for GroundStation GetMinuteUsage responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getMinuteUsage
 */

/*!
 * Constructs a GetMinuteUsageResponse object for \a reply to \a request, with parent \a parent.
 */
GetMinuteUsageResponse::GetMinuteUsageResponse(
        const GetMinuteUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new GetMinuteUsageResponsePrivate(this), parent)
{
    setRequest(new GetMinuteUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMinuteUsageRequest * GetMinuteUsageResponse::request() const
{
    Q_D(const GetMinuteUsageResponse);
    return static_cast<const GetMinuteUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation GetMinuteUsage \a response.
 */
void GetMinuteUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMinuteUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::GetMinuteUsageResponsePrivate
 * \brief The GetMinuteUsageResponsePrivate class provides private implementation for GetMinuteUsageResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetMinuteUsageResponsePrivate object with public implementation \a q.
 */
GetMinuteUsageResponsePrivate::GetMinuteUsageResponsePrivate(
    GetMinuteUsageResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation GetMinuteUsage response element from \a xml.
 */
void GetMinuteUsageResponsePrivate::parseGetMinuteUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMinuteUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
