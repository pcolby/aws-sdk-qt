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

#include "cleardefaultauthorizerresponse.h"
#include "cleardefaultauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ClearDefaultAuthorizerResponse
 *
 * @brief  Handles IoT ClearDefaultAuthorizer responses.
 *
 * @see    IoTClient::clearDefaultAuthorizer
 */

/**
 * @brief  Constructs a new ClearDefaultAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ClearDefaultAuthorizerResponse::ClearDefaultAuthorizerResponse(
        const ClearDefaultAuthorizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ClearDefaultAuthorizerResponsePrivate(this), parent)
{
    setRequest(new ClearDefaultAuthorizerRequest(request));
    setReply(reply);
}

const ClearDefaultAuthorizerRequest * ClearDefaultAuthorizerResponse::request() const
{
    Q_D(const ClearDefaultAuthorizerResponse);
    return static_cast<const ClearDefaultAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ClearDefaultAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void ClearDefaultAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ClearDefaultAuthorizerResponsePrivate
 *
 * @brief  Private implementation for ClearDefaultAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ClearDefaultAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ClearDefaultAuthorizerResponse instance.
 */
ClearDefaultAuthorizerResponsePrivate::ClearDefaultAuthorizerResponsePrivate(
    ClearDefaultAuthorizerQueueResponse * const q) : ClearDefaultAuthorizerPrivate(q)
{

}

/**
 * @brief  Parse an IoT ClearDefaultAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ClearDefaultAuthorizerResponsePrivate::ClearDefaultAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ClearDefaultAuthorizerResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
