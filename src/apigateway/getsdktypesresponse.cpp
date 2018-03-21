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

#include "getsdktypesresponse.h"
#include "getsdktypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetSdkTypesResponse
 *
 * @brief  Handles APIGateway GetSdkTypes responses.
 *
 * @see    APIGatewayClient::getSdkTypes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSdkTypesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetSdkTypesResponsePrivate(this), parent)
{
    setRequest(new GetSdkTypesRequest(request));
    setReply(reply);
}

const GetSdkTypesRequest * GetSdkTypesResponse::request() const
{
    Q_D(const GetSdkTypesResponse);
    return static_cast<const GetSdkTypesRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetSdkTypes response.
 *
 * @param  response  Response to parse.
 */
void GetSdkTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSdkTypesResponsePrivate
 *
 * @brief  Private implementation for GetSdkTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSdkTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSdkTypesResponse instance.
 */
GetSdkTypesResponsePrivate::GetSdkTypesResponsePrivate(
    GetSdkTypesQueueResponse * const q) : GetSdkTypesPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetSdkTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSdkTypesResponsePrivate::GetSdkTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSdkTypesResponse"));
    /// @todo
}
