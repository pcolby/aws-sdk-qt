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

#include "getdimensionvaluesresponse.h"
#include "getdimensionvaluesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostExplorer {

/**
 * @class  GetDimensionValuesResponse
 *
 * @brief  Handles CostExplorer GetDimensionValues responses.
 *
 * @see    CostExplorerClient::getDimensionValues
 */

/**
 * @brief  Constructs a new GetDimensionValuesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDimensionValuesResponse::GetDimensionValuesResponse(
        const GetDimensionValuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostExplorerResponse(new GetDimensionValuesResponsePrivate(this), parent)
{
    setRequest(new GetDimensionValuesRequest(request));
    setReply(reply);
}

const GetDimensionValuesRequest * GetDimensionValuesResponse::request() const
{
    Q_D(const GetDimensionValuesResponse);
    return static_cast<const GetDimensionValuesRequest *>(d->request);
}

/**
 * @brief  Parse a CostExplorer GetDimensionValues response.
 *
 * @param  response  Response to parse.
 */
void GetDimensionValuesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDimensionValuesResponsePrivate
 *
 * @brief  Private implementation for GetDimensionValuesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDimensionValuesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDimensionValuesResponse instance.
 */
GetDimensionValuesResponsePrivate::GetDimensionValuesResponsePrivate(
    GetDimensionValuesQueueResponse * const q) : GetDimensionValuesPrivate(q)
{

}

/**
 * @brief  Parse an CostExplorer GetDimensionValuesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDimensionValuesResponsePrivate::GetDimensionValuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDimensionValuesResponse"));
    /// @todo
}

} // namespace CostExplorer
} // namespace QtAws
