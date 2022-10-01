// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchupdatedevicepositionresponse.h"
#include "batchupdatedevicepositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchUpdateDevicePositionResponse
 * \brief The BatchUpdateDevicePositionResponse class provides an interace for Location BatchUpdateDevicePosition responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchUpdateDevicePosition
 */

/*!
 * Constructs a BatchUpdateDevicePositionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchUpdateDevicePositionResponse::BatchUpdateDevicePositionResponse(
        const BatchUpdateDevicePositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new BatchUpdateDevicePositionResponsePrivate(this), parent)
{
    setRequest(new BatchUpdateDevicePositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchUpdateDevicePositionRequest * BatchUpdateDevicePositionResponse::request() const
{
    Q_D(const BatchUpdateDevicePositionResponse);
    return static_cast<const BatchUpdateDevicePositionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location BatchUpdateDevicePosition \a response.
 */
void BatchUpdateDevicePositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchUpdateDevicePositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::BatchUpdateDevicePositionResponsePrivate
 * \brief The BatchUpdateDevicePositionResponsePrivate class provides private implementation for BatchUpdateDevicePositionResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchUpdateDevicePositionResponsePrivate object with public implementation \a q.
 */
BatchUpdateDevicePositionResponsePrivate::BatchUpdateDevicePositionResponsePrivate(
    BatchUpdateDevicePositionResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location BatchUpdateDevicePosition response element from \a xml.
 */
void BatchUpdateDevicePositionResponsePrivate::parseBatchUpdateDevicePositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchUpdateDevicePositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
