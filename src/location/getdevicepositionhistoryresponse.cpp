// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdevicepositionhistoryresponse.h"
#include "getdevicepositionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::GetDevicePositionHistoryResponse
 * \brief The GetDevicePositionHistoryResponse class provides an interace for Location GetDevicePositionHistory responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::getDevicePositionHistory
 */

/*!
 * Constructs a GetDevicePositionHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicePositionHistoryResponse::GetDevicePositionHistoryResponse(
        const GetDevicePositionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new GetDevicePositionHistoryResponsePrivate(this), parent)
{
    setRequest(new GetDevicePositionHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicePositionHistoryRequest * GetDevicePositionHistoryResponse::request() const
{
    Q_D(const GetDevicePositionHistoryResponse);
    return static_cast<const GetDevicePositionHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location GetDevicePositionHistory \a response.
 */
void GetDevicePositionHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevicePositionHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::GetDevicePositionHistoryResponsePrivate
 * \brief The GetDevicePositionHistoryResponsePrivate class provides private implementation for GetDevicePositionHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a GetDevicePositionHistoryResponsePrivate object with public implementation \a q.
 */
GetDevicePositionHistoryResponsePrivate::GetDevicePositionHistoryResponsePrivate(
    GetDevicePositionHistoryResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location GetDevicePositionHistory response element from \a xml.
 */
void GetDevicePositionHistoryResponsePrivate::parseGetDevicePositionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePositionHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
