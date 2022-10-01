// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicepositionresponse.h"
#include "getdevicepositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetDevicePositionResponse
 * \brief The GetDevicePositionResponse class provides an interace for Location GetDevicePosition responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getDevicePosition
 */

/*!
 * Constructs a GetDevicePositionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicePositionResponse::GetDevicePositionResponse(
        const GetDevicePositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new GetDevicePositionResponsePrivate(this), parent)
{
    setRequest(new GetDevicePositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicePositionRequest * GetDevicePositionResponse::request() const
{
    Q_D(const GetDevicePositionResponse);
    return static_cast<const GetDevicePositionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location GetDevicePosition \a response.
 */
void GetDevicePositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevicePositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::GetDevicePositionResponsePrivate
 * \brief The GetDevicePositionResponsePrivate class provides private implementation for GetDevicePositionResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetDevicePositionResponsePrivate object with public implementation \a q.
 */
GetDevicePositionResponsePrivate::GetDevicePositionResponsePrivate(
    GetDevicePositionResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location GetDevicePosition response element from \a xml.
 */
void GetDevicePositionResponsePrivate::parseGetDevicePositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
