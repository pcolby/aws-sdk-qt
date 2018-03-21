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

#include "deleterestapiresponse.h"
#include "deleterestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteRestApiResponse
 *
 * @brief  Handles APIGateway DeleteRestApi responses.
 *
 * @see    APIGatewayClient::deleteRestApi
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRestApiResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteRestApiResponsePrivate(this), parent)
{
    setRequest(new DeleteRestApiRequest(request));
    setReply(reply);
}

const DeleteRestApiRequest * DeleteRestApiResponse::request() const
{
    Q_D(const DeleteRestApiResponse);
    return static_cast<const DeleteRestApiRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteRestApi response.
 *
 * @param  response  Response to parse.
 */
void DeleteRestApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRestApiResponsePrivate
 *
 * @brief  Private implementation for DeleteRestApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRestApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRestApiResponse instance.
 */
DeleteRestApiResponsePrivate::DeleteRestApiResponsePrivate(
    DeleteRestApiQueueResponse * const q) : DeleteRestApiPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteRestApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRestApiResponsePrivate::DeleteRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRestApiResponse"));
    /// @todo
}
