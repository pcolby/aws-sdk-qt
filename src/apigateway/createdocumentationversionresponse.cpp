/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createdocumentationversionresponse.h"
#include "createdocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  CreateDocumentationVersionResponse
 *
 * @brief  Handles APIGateway CreateDocumentationVersion responses.
 *
 * @see    APIGatewayClient::createDocumentationVersion
 */

/**
 * @brief  Constructs a new CreateDocumentationVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDocumentationVersionResponse::CreateDocumentationVersionResponse(
        const CreateDocumentationVersionRequest &request,
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
    CreateDocumentationVersionResponse * const q) : APIGatewayResponsePrivate(q)
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

} // namespace APIGateway
} // namespace QtAws
