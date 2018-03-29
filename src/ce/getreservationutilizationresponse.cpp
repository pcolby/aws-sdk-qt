/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getreservationutilizationresponse.h"
#include "getreservationutilizationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CostExplorer {

/**
 * @class  GetReservationUtilizationResponse
 *
 * @brief  Handles CostExplorer GetReservationUtilization responses.
 *
 * @see    CostExplorerClient::getReservationUtilization
 */

/**
 * @brief  Constructs a new GetReservationUtilizationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetReservationUtilizationResponse::GetReservationUtilizationResponse(
        const GetReservationUtilizationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetReservationUtilizationResponsePrivate(this), parent)
{
    setRequest(new GetReservationUtilizationRequest(request));
    setReply(reply);
}

const GetReservationUtilizationRequest * GetReservationUtilizationResponse::request() const
{
    Q_D(const GetReservationUtilizationResponse);
    return static_cast<const GetReservationUtilizationRequest *>(d->request);
}

/**
 * @brief  Parse a CostExplorer GetReservationUtilization response.
 *
 * @param  response  Response to parse.
 */
void GetReservationUtilizationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetReservationUtilizationResponsePrivate
 *
 * @brief  Private implementation for GetReservationUtilizationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetReservationUtilizationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetReservationUtilizationResponse instance.
 */
GetReservationUtilizationResponsePrivate::GetReservationUtilizationResponsePrivate(
    GetReservationUtilizationQueueResponse * const q) : GetReservationUtilizationPrivate(q)
{

}

/**
 * @brief  Parse an CostExplorer GetReservationUtilizationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetReservationUtilizationResponsePrivate::GetReservationUtilizationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReservationUtilizationResponse"));
    /// @todo
}

} // namespace CostExplorer
} // namespace AWS
