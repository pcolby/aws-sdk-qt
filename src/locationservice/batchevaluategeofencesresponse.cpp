/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchevaluategeofencesresponse.h"
#include "batchevaluategeofencesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::BatchEvaluateGeofencesResponse
 * \brief The BatchEvaluateGeofencesResponse class provides an interace for LocationService BatchEvaluateGeofences responses.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::batchEvaluateGeofences
 */

/*!
 * Constructs a BatchEvaluateGeofencesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchEvaluateGeofencesResponse::BatchEvaluateGeofencesResponse(
        const BatchEvaluateGeofencesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LocationServiceResponse(new BatchEvaluateGeofencesResponsePrivate(this), parent)
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
 * Parses a successful LocationService BatchEvaluateGeofences \a response.
 */
void BatchEvaluateGeofencesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchEvaluateGeofencesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LocationService::BatchEvaluateGeofencesResponsePrivate
 * \brief The BatchEvaluateGeofencesResponsePrivate class provides private implementation for BatchEvaluateGeofencesResponse.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a BatchEvaluateGeofencesResponsePrivate object with public implementation \a q.
 */
BatchEvaluateGeofencesResponsePrivate::BatchEvaluateGeofencesResponsePrivate(
    BatchEvaluateGeofencesResponse * const q) : LocationServiceResponsePrivate(q)
{

}

/*!
 * Parses a LocationService BatchEvaluateGeofences response element from \a xml.
 */
void BatchEvaluateGeofencesResponsePrivate::parseBatchEvaluateGeofencesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchEvaluateGeofencesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LocationService
} // namespace QtAws
