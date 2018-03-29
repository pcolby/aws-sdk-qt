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

#include "unpeervpcresponse.h"
#include "unpeervpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  UnpeerVpcResponse
 *
 * @brief  Handles Lightsail UnpeerVpc responses.
 *
 * @see    LightsailClient::unpeerVpc
 */

/**
 * @brief  Constructs a new UnpeerVpcResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnpeerVpcResponse::UnpeerVpcResponse(
        const UnpeerVpcRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UnpeerVpcResponse(new UnpeerVpcResponsePrivate(this), parent)
{
    setRequest(new UnpeerVpcRequest(request));
    setReply(reply);
}

const UnpeerVpcRequest * UnpeerVpcResponse::request() const
{
    Q_D(const UnpeerVpcResponse);
    return static_cast<const UnpeerVpcRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail UnpeerVpc response.
 *
 * @param  response  Response to parse.
 */
void UnpeerVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(UnpeerVpcResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UnpeerVpcResponsePrivate
 *
 * @brief  Private implementation for UnpeerVpcResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnpeerVpcResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnpeerVpcResponse instance.
 */
UnpeerVpcResponsePrivate::UnpeerVpcResponsePrivate(
    UnpeerVpcResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail UnpeerVpcResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnpeerVpcResponsePrivate::parseUnpeerVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnpeerVpcResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
