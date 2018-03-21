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

#include "putmethodresponseresponse.h"
#include "putmethodresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  PutMethodResponseResponse
 *
 * @brief  Handles APIGateway PutMethodResponse responses.
 *
 * @see    APIGatewayClient::putMethodResponse
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutMethodResponseResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutMethodResponseResponsePrivate(this), parent)
{
    setRequest(new PutMethodResponseRequest(request));
    setReply(reply);
}

const PutMethodResponseRequest * PutMethodResponseResponse::request() const
{
    Q_D(const PutMethodResponseResponse);
    return static_cast<const PutMethodResponseRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway PutMethodResponse response.
 *
 * @param  response  Response to parse.
 */
void PutMethodResponseResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutMethodResponseResponsePrivate
 *
 * @brief  Private implementation for PutMethodResponseResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMethodResponseResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutMethodResponseResponse instance.
 */
PutMethodResponseResponsePrivate::PutMethodResponseResponsePrivate(
    PutMethodResponseQueueResponse * const q) : PutMethodResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway PutMethodResponseResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutMethodResponseResponsePrivate::PutMethodResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMethodResponseResponse"));
    /// @todo
}
