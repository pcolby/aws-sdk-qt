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

#include "putintegrationresponseresponse.h"
#include "putintegrationresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  PutIntegrationResponseResponse
 *
 * @brief  Handles APIGateway PutIntegrationResponse responses.
 *
 * @see    APIGatewayClient::putIntegrationResponse
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutIntegrationResponseResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutIntegrationResponseResponsePrivate(this), parent)
{
    setRequest(new PutIntegrationResponseRequest(request));
    setReply(reply);
}

const PutIntegrationResponseRequest * PutIntegrationResponseResponse::request() const
{
    Q_D(const PutIntegrationResponseResponse);
    return static_cast<const PutIntegrationResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway PutIntegrationResponse response.
 *
 * @param  response  Response to parse.
 */
void PutIntegrationResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutIntegrationResponseResponsePrivate
 *
 * @brief  Private implementation for PutIntegrationResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutIntegrationResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutIntegrationResponseResponse instance.
 */
PutIntegrationResponseResponsePrivate::PutIntegrationResponseResponsePrivate(
    PutIntegrationResponseQueueResponse * const q) : PutIntegrationResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway PutIntegrationResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutIntegrationResponseResponsePrivate::PutIntegrationResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntegrationResponseResponse"));
    /// @todo
}
