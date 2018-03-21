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

#include "createdocumentresponse.h"
#include "createdocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  CreateDocumentResponse
 *
 * @brief  Handles SSM CreateDocument responses.
 *
 * @see    SSMClient::createDocument
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDocumentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CreateDocumentResponsePrivate(this), parent)
{
    setRequest(new CreateDocumentRequest(request));
    setReply(reply);
}

const CreateDocumentRequest * CreateDocumentResponse::request() const
{
    Q_D(const CreateDocumentResponse);
    return static_cast<const CreateDocumentRequest *>(d->request);
}

/**
 * @brief  Parse a SSM CreateDocument response.
 *
 * @param  response  Response to parse.
 */
void CreateDocumentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDocumentResponsePrivate
 *
 * @brief  Private implementation for CreateDocumentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDocumentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDocumentResponse instance.
 */
CreateDocumentResponsePrivate::CreateDocumentResponsePrivate(
    CreateDocumentQueueResponse * const q) : CreateDocumentPrivate(q)
{

}

/**
 * @brief  Parse an SSM CreateDocumentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDocumentResponsePrivate::CreateDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDocumentResponse"));
    /// @todo
}
