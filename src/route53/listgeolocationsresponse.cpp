/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listgeolocationsresponse.h"
#include "listgeolocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  ListGeoLocationsResponse
 *
 * @brief  Handles Route53 ListGeoLocations responses.
 *
 * @see    Route53Client::listGeoLocations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGeoLocationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListGeoLocationsResponsePrivate(this), parent)
{
    setRequest(new ListGeoLocationsRequest(request));
    setReply(reply);
}

const ListGeoLocationsRequest * ListGeoLocationsResponse::request() const
{
    Q_D(const ListGeoLocationsResponse);
    return static_cast<const ListGeoLocationsRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListGeoLocations response.
 *
 * @param  response  Response to parse.
 */
void ListGeoLocationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGeoLocationsResponsePrivate
 *
 * @brief  Private implementation for ListGeoLocationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGeoLocationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGeoLocationsResponse instance.
 */
ListGeoLocationsResponsePrivate::ListGeoLocationsResponsePrivate(
    ListGeoLocationsQueueResponse * const q) : ListGeoLocationsPrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListGeoLocationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGeoLocationsResponsePrivate::ListGeoLocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGeoLocationsResponse"));
    /// @todo
}
