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

#include "putrestapiresponse.h"
#include "putrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  PutRestApiResponse
 *
 * @brief  Handles APIGateway PutRestApi responses.
 *
 * @see    APIGatewayClient::putRestApi
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRestApiResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new PutRestApiResponsePrivate(this), parent)
{
    setRequest(new PutRestApiRequest(request));
    setReply(reply);
}

const PutRestApiRequest * PutRestApiResponse::request() const
{
    Q_D(const PutRestApiResponse);
    return static_cast<const PutRestApiRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway PutRestApi response.
 *
 * @param  response  Response to parse.
 */
void PutRestApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutRestApiResponsePrivate
 *
 * @brief  Private implementation for PutRestApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRestApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRestApiResponse instance.
 */
PutRestApiResponsePrivate::PutRestApiResponsePrivate(
    PutRestApiQueueResponse * const q) : PutRestApiPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway PutRestApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRestApiResponsePrivate::PutRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRestApiResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
