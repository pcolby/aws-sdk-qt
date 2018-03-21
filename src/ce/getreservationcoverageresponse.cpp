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

#include "getreservationcoverageresponse.h"
#include "getreservationcoverageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CostExplorer {

/**
 * @class  GetReservationCoverageResponse
 *
 * @brief  Handles CostExplorer GetReservationCoverage responses.
 *
 * @see    CostExplorerClient::getReservationCoverage
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReservationCoverageResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetReservationCoverageResponsePrivate(this), parent)
{
    setRequest(new GetReservationCoverageRequest(request));
    setReply(reply);
}

const GetReservationCoverageRequest * GetReservationCoverageResponse::request() const
{
    Q_D(const GetReservationCoverageResponse);
    return static_cast<const GetReservationCoverageRequest *>(d->request);
}

/**
 * @brief  Parse a CostExplorer GetReservationCoverage response.
 *
 * @param  response  Response to parse.
 */
void GetReservationCoverageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetReservationCoverageResponsePrivate
 *
 * @brief  Private implementation for GetReservationCoverageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReservationCoverageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetReservationCoverageResponse instance.
 */
GetReservationCoverageResponsePrivate::GetReservationCoverageResponsePrivate(
    GetReservationCoverageQueueResponse * const q) : GetReservationCoveragePrivate(q)
{

}

/**
 * @brief  Parse an CostExplorer GetReservationCoverageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReservationCoverageResponsePrivate::GetReservationCoverageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReservationCoverageResponse"));
    /// @todo
}
