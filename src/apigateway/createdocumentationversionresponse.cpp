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

#include "createdocumentationversionresponse.h"
#include "createdocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateDocumentationVersionResponse
 *
 * @brief  Handles APIGateway CreateDocumentationVersion responses.
 *
 * @see    APIGatewayClient::createDocumentationVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDocumentationVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateDocumentationVersionResponsePrivate(this), parent)
{
    setRequest(new CreateDocumentationVersionRequest(request));
    setReply(reply);
}

const CreateDocumentationVersionRequest * CreateDocumentationVersionResponse::request() const
{
    Q_D(const CreateDocumentationVersionResponse);
    return static_cast<const CreateDocumentationVersionRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateDocumentationVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateDocumentationVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDocumentationVersionResponsePrivate
 *
 * @brief  Private implementation for CreateDocumentationVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDocumentationVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDocumentationVersionResponse instance.
 */
CreateDocumentationVersionResponsePrivate::CreateDocumentationVersionResponsePrivate(
    CreateDocumentationVersionQueueResponse * const q) : CreateDocumentationVersionPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateDocumentationVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDocumentationVersionResponsePrivate::CreateDocumentationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDocumentationVersionResponse"));
    /// @todo
}
