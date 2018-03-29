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

#include "cleardefaultauthorizerresponse.h"
#include "cleardefaultauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
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
    : ClearDefaultAuthorizerResponse(new ClearDefaultAuthorizerResponsePrivate(this), parent)
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
    Q_D(ClearDefaultAuthorizerResponse);
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
    ClearDefaultAuthorizerResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT ClearDefaultAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ClearDefaultAuthorizerResponsePrivate::parseClearDefaultAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ClearDefaultAuthorizerResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
