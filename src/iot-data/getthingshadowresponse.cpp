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

#include "getthingshadowresponse.h"
#include "getthingshadowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTDataPlane {

/**
 * @class  GetThingShadowResponse
 *
 * @brief  Handles IoTDataPlane GetThingShadow responses.
 *
 * @see    IoTDataPlaneClient::getThingShadow
 */

/**
 * @brief  Constructs a new GetThingShadowResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetThingShadowResponse::GetThingShadowResponse(
        const GetThingShadowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTDataPlaneResponse(new GetThingShadowResponsePrivate(this), parent)
{
    setRequest(new GetThingShadowRequest(request));
    setReply(reply);
}

const GetThingShadowRequest * GetThingShadowResponse::request() const
{
    Q_D(const GetThingShadowResponse);
    return static_cast<const GetThingShadowRequest *>(d->request);
}

/**
 * @brief  Parse a IoTDataPlane GetThingShadow response.
 *
 * @param  response  Response to parse.
 */
void GetThingShadowResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetThingShadowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetThingShadowResponsePrivate
 *
 * @brief  Private implementation for GetThingShadowResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetThingShadowResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetThingShadowResponse instance.
 */
GetThingShadowResponsePrivate::GetThingShadowResponsePrivate(
    GetThingShadowResponse * const q) : IoTDataPlaneResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoTDataPlane GetThingShadowResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetThingShadowResponsePrivate::GetThingShadowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetThingShadowResponse"));
    /// @todo
}

} // namespace IoTDataPlane
} // namespace QtAws
