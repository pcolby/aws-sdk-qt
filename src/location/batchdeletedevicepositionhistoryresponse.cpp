// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletedevicepositionhistoryresponse.h"
#include "batchdeletedevicepositionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchDeleteDevicePositionHistoryResponse
 * \brief The BatchDeleteDevicePositionHistoryResponse class provides an interace for Location BatchDeleteDevicePositionHistory responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchDeleteDevicePositionHistory
 */

/*!
 * Constructs a BatchDeleteDevicePositionHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteDevicePositionHistoryResponse::BatchDeleteDevicePositionHistoryResponse(
        const BatchDeleteDevicePositionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new BatchDeleteDevicePositionHistoryResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteDevicePositionHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteDevicePositionHistoryRequest * BatchDeleteDevicePositionHistoryResponse::request() const
{
    Q_D(const BatchDeleteDevicePositionHistoryResponse);
    return static_cast<const BatchDeleteDevicePositionHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location BatchDeleteDevicePositionHistory \a response.
 */
void BatchDeleteDevicePositionHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteDevicePositionHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::BatchDeleteDevicePositionHistoryResponsePrivate
 * \brief The BatchDeleteDevicePositionHistoryResponsePrivate class provides private implementation for BatchDeleteDevicePositionHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchDeleteDevicePositionHistoryResponsePrivate object with public implementation \a q.
 */
BatchDeleteDevicePositionHistoryResponsePrivate::BatchDeleteDevicePositionHistoryResponsePrivate(
    BatchDeleteDevicePositionHistoryResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location BatchDeleteDevicePositionHistory response element from \a xml.
 */
void BatchDeleteDevicePositionHistoryResponsePrivate::parseBatchDeleteDevicePositionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteDevicePositionHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
