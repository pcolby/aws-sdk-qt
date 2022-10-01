// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetdevicepositionresponse.h"
#include "batchgetdevicepositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchGetDevicePositionResponse
 * \brief The BatchGetDevicePositionResponse class provides an interace for Location BatchGetDevicePosition responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchGetDevicePosition
 */

/*!
 * Constructs a BatchGetDevicePositionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetDevicePositionResponse::BatchGetDevicePositionResponse(
        const BatchGetDevicePositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new BatchGetDevicePositionResponsePrivate(this), parent)
{
    setRequest(new BatchGetDevicePositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetDevicePositionRequest * BatchGetDevicePositionResponse::request() const
{
    Q_D(const BatchGetDevicePositionResponse);
    return static_cast<const BatchGetDevicePositionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location BatchGetDevicePosition \a response.
 */
void BatchGetDevicePositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetDevicePositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::BatchGetDevicePositionResponsePrivate
 * \brief The BatchGetDevicePositionResponsePrivate class provides private implementation for BatchGetDevicePositionResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchGetDevicePositionResponsePrivate object with public implementation \a q.
 */
BatchGetDevicePositionResponsePrivate::BatchGetDevicePositionResponsePrivate(
    BatchGetDevicePositionResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location BatchGetDevicePosition response element from \a xml.
 */
void BatchGetDevicePositionResponsePrivate::parseBatchGetDevicePositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetDevicePositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
