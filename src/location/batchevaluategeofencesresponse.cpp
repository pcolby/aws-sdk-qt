// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchevaluategeofencesresponse.h"
#include "batchevaluategeofencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Location {

/*!
 * \class QtAws::Location::BatchEvaluateGeofencesResponse
 * \brief The BatchEvaluateGeofencesResponse class provides an interace for Location BatchEvaluateGeofences responses.
 *
 * \inmodule QtAwsLocation
 *
 *  "Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationClient::batchEvaluateGeofences
 */

/*!
 * Constructs a BatchEvaluateGeofencesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchEvaluateGeofencesResponse::BatchEvaluateGeofencesResponse(
        const BatchEvaluateGeofencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationResponse(new BatchEvaluateGeofencesResponsePrivate(this), parent)
{
    setRequest(new BatchEvaluateGeofencesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchEvaluateGeofencesRequest * BatchEvaluateGeofencesResponse::request() const
{
    Q_D(const BatchEvaluateGeofencesResponse);
    return static_cast<const BatchEvaluateGeofencesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Location BatchEvaluateGeofences \a response.
 */
void BatchEvaluateGeofencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchEvaluateGeofencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Location::BatchEvaluateGeofencesResponsePrivate
 * \brief The BatchEvaluateGeofencesResponsePrivate class provides private implementation for BatchEvaluateGeofencesResponse.
 * \internal
 *
 * \inmodule QtAwsLocation
 */

/*!
 * Constructs a BatchEvaluateGeofencesResponsePrivate object with public implementation \a q.
 */
BatchEvaluateGeofencesResponsePrivate::BatchEvaluateGeofencesResponsePrivate(
    BatchEvaluateGeofencesResponse * const q) : LocationResponsePrivate(q)
{

}

/*!
 * Parses a Location BatchEvaluateGeofences response element from \a xml.
 */
void BatchEvaluateGeofencesResponsePrivate::parseBatchEvaluateGeofencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchEvaluateGeofencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Location
} // namespace QtAws
