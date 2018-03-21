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

#include "attachinternetgatewayresponse.h"
#include "attachinternetgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AttachInternetGatewayResponse
 *
 * @brief  Handles EC2 AttachInternetGateway responses.
 *
 * @see    EC2Client::attachInternetGateway
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachInternetGatewayResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AttachInternetGatewayResponsePrivate(this), parent)
{
    setRequest(new AttachInternetGatewayRequest(request));
    setReply(reply);
}

const AttachInternetGatewayRequest * AttachInternetGatewayResponse::request() const
{
    Q_D(const AttachInternetGatewayResponse);
    return static_cast<const AttachInternetGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AttachInternetGateway response.
 *
 * @param  response  Response to parse.
 */
void AttachInternetGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachInternetGatewayResponsePrivate
 *
 * @brief  Private implementation for AttachInternetGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachInternetGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachInternetGatewayResponse instance.
 */
AttachInternetGatewayResponsePrivate::AttachInternetGatewayResponsePrivate(
    AttachInternetGatewayQueueResponse * const q) : AttachInternetGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 AttachInternetGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachInternetGatewayResponsePrivate::AttachInternetGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachInternetGatewayResponse"));
    /// @todo
}
