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

#include "updatedocumentationpartresponse.h"
#include "updatedocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  UpdateDocumentationPartResponse
 *
 * @brief  Handles APIGateway UpdateDocumentationPart responses.
 *
 * @see    APIGatewayClient::updateDocumentationPart
 */

/**
 * @brief  Constructs a new UpdateDocumentationPartResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDocumentationPartResponse::UpdateDocumentationPartResponse(
        const UpdateDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new UpdateDocumentationPartRequest(request));
    setReply(reply);
}

const UpdateDocumentationPartRequest * UpdateDocumentationPartResponse::request() const
{
    Q_D(const UpdateDocumentationPartResponse);
    return static_cast<const UpdateDocumentationPartRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateDocumentationPart response.
 *
 * @param  response  Response to parse.
 */
void UpdateDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDocumentationPartResponsePrivate
 *
 * @brief  Private implementation for UpdateDocumentationPartResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentationPartResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDocumentationPartResponse instance.
 */
UpdateDocumentationPartResponsePrivate::UpdateDocumentationPartResponsePrivate(
    UpdateDocumentationPartQueueResponse * const q) : UpdateDocumentationPartPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateDocumentationPartResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDocumentationPartResponsePrivate::UpdateDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDocumentationPartResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
