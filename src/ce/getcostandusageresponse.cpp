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

#include "getcostandusageresponse.h"
#include "getcostandusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CostExplorer {

/**
 * @class  GetCostAndUsageResponse
 *
 * @brief  Handles CostExplorer GetCostAndUsage responses.
 *
 * @see    CostExplorerClient::getCostAndUsage
 */

/**
 * @brief  Constructs a new GetCostAndUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCostAndUsageResponse::GetCostAndUsageResponse(
        const GetCostAndUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetCostAndUsageResponsePrivate(this), parent)
{
    setRequest(new GetCostAndUsageRequest(request));
    setReply(reply);
}

const GetCostAndUsageRequest * GetCostAndUsageResponse::request() const
{
    Q_D(const GetCostAndUsageResponse);
    return static_cast<const GetCostAndUsageRequest *>(d->request);
}

/**
 * @brief  Parse a CostExplorer GetCostAndUsage response.
 *
 * @param  response  Response to parse.
 */
void GetCostAndUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCostAndUsageResponsePrivate
 *
 * @brief  Private implementation for GetCostAndUsageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCostAndUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCostAndUsageResponse instance.
 */
GetCostAndUsageResponsePrivate::GetCostAndUsageResponsePrivate(
    GetCostAndUsageQueueResponse * const q) : GetCostAndUsagePrivate(q)
{

}

/**
 * @brief  Parse an CostExplorer GetCostAndUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCostAndUsageResponsePrivate::GetCostAndUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCostAndUsageResponse"));
    /// @todo
}

} // namespace CostExplorer
} // namespace AWS
