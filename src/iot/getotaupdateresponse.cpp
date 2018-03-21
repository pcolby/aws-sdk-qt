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

#include "getotaupdateresponse.h"
#include "getotaupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  GetOTAUpdateResponse
 *
 * @brief  Handles IoT GetOTAUpdate responses.
 *
 * @see    IoTClient::getOTAUpdate
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOTAUpdateResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetOTAUpdateResponsePrivate(this), parent)
{
    setRequest(new GetOTAUpdateRequest(request));
    setReply(reply);
}

const GetOTAUpdateRequest * GetOTAUpdateResponse::request() const
{
    Q_D(const GetOTAUpdateResponse);
    return static_cast<const GetOTAUpdateRequest *>(d->request);
}

/**
 * @brief  Parse a IoT GetOTAUpdate response.
 *
 * @param  response  Response to parse.
 */
void GetOTAUpdateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOTAUpdateResponsePrivate
 *
 * @brief  Private implementation for GetOTAUpdateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOTAUpdateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOTAUpdateResponse instance.
 */
GetOTAUpdateResponsePrivate::GetOTAUpdateResponsePrivate(
    GetOTAUpdateQueueResponse * const q) : GetOTAUpdatePrivate(q)
{

}

/**
 * @brief  Parse an IoT GetOTAUpdateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOTAUpdateResponsePrivate::GetOTAUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOTAUpdateResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
