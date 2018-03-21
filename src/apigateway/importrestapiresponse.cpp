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

#include "importrestapiresponse.h"
#include "importrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  ImportRestApiResponse
 *
 * @brief  Handles APIGateway ImportRestApi responses.
 *
 * @see    APIGatewayClient::importRestApi
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportRestApiResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new ImportRestApiResponsePrivate(this), parent)
{
    setRequest(new ImportRestApiRequest(request));
    setReply(reply);
}

const ImportRestApiRequest * ImportRestApiResponse::request() const
{
    Q_D(const ImportRestApiResponse);
    return static_cast<const ImportRestApiRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway ImportRestApi response.
 *
 * @param  response  Response to parse.
 */
void ImportRestApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportRestApiResponsePrivate
 *
 * @brief  Private implementation for ImportRestApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportRestApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportRestApiResponse instance.
 */
ImportRestApiResponsePrivate::ImportRestApiResponsePrivate(
    ImportRestApiQueueResponse * const q) : ImportRestApiPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway ImportRestApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportRestApiResponsePrivate::ImportRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportRestApiResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
