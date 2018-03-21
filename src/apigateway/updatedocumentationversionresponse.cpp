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

#include "updatedocumentationversionresponse.h"
#include "updatedocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateDocumentationVersionResponse
 *
 * @brief  Handles APIGateway UpdateDocumentationVersion responses.
 *
 * @see    APIGatewayClient::updateDocumentationVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDocumentationVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateDocumentationVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateDocumentationVersionRequest(request));
    setReply(reply);
}

const UpdateDocumentationVersionRequest * UpdateDocumentationVersionResponse::request() const
{
    Q_D(const UpdateDocumentationVersionResponse);
    return static_cast<const UpdateDocumentationVersionRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateDocumentationVersion response.
 *
 * @param  response  Response to parse.
 */
void UpdateDocumentationVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDocumentationVersionResponsePrivate
 *
 * @brief  Private implementation for UpdateDocumentationVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentationVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDocumentationVersionResponse instance.
 */
UpdateDocumentationVersionResponsePrivate::UpdateDocumentationVersionResponsePrivate(
    UpdateDocumentationVersionQueueResponse * const q) : UpdateDocumentationVersionPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateDocumentationVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDocumentationVersionResponsePrivate::UpdateDocumentationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDocumentationVersionResponse"));
    /// @todo
}
