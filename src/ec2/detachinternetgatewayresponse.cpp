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

#include "detachinternetgatewayresponse.h"
#include "detachinternetgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DetachInternetGatewayResponse
 *
 * @brief  Handles EC2 DetachInternetGateway responses.
 *
 * @see    EC2Client::detachInternetGateway
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachInternetGatewayResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DetachInternetGatewayResponsePrivate(this), parent)
{
    setRequest(new DetachInternetGatewayRequest(request));
    setReply(reply);
}

const DetachInternetGatewayRequest * DetachInternetGatewayResponse::request() const
{
    Q_D(const DetachInternetGatewayResponse);
    return static_cast<const DetachInternetGatewayRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DetachInternetGateway response.
 *
 * @param  response  Response to parse.
 */
void DetachInternetGatewayResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachInternetGatewayResponsePrivate
 *
 * @brief  Private implementation for DetachInternetGatewayResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachInternetGatewayResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachInternetGatewayResponse instance.
 */
DetachInternetGatewayResponsePrivate::DetachInternetGatewayResponsePrivate(
    DetachInternetGatewayQueueResponse * const q) : DetachInternetGatewayPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DetachInternetGatewayResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachInternetGatewayResponsePrivate::DetachInternetGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachInternetGatewayResponse"));
    /// @todo
}
