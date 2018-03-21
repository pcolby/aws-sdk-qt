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

#include "getoperationsresponse.h"
#include "getoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetOperationsResponse
 *
 * @brief  Handles Lightsail GetOperations responses.
 *
 * @see    LightsailClient::getOperations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOperationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetOperationsResponsePrivate(this), parent)
{
    setRequest(new GetOperationsRequest(request));
    setReply(reply);
}

const GetOperationsRequest * GetOperationsResponse::request() const
{
    Q_D(const GetOperationsResponse);
    return static_cast<const GetOperationsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetOperations response.
 *
 * @param  response  Response to parse.
 */
void GetOperationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOperationsResponsePrivate
 *
 * @brief  Private implementation for GetOperationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOperationsResponse instance.
 */
GetOperationsResponsePrivate::GetOperationsResponsePrivate(
    GetOperationsQueueResponse * const q) : GetOperationsPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetOperationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOperationsResponsePrivate::GetOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOperationsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
