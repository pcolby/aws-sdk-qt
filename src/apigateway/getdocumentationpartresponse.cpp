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

#include "getdocumentationpartresponse.h"
#include "getdocumentationpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetDocumentationPartResponse
 *
 * @brief  Handles APIGateway GetDocumentationPart responses.
 *
 * @see    APIGatewayClient::getDocumentationPart
 */

/**
 * @brief  Constructs a new GetDocumentationPartResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentationPartResponse::GetDocumentationPartResponse(
        const GetDocumentationPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDocumentationPartResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationPartRequest(request));
    setReply(reply);
}

const GetDocumentationPartRequest * GetDocumentationPartResponse::request() const
{
    Q_D(const GetDocumentationPartResponse);
    return static_cast<const GetDocumentationPartRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetDocumentationPart response.
 *
 * @param  response  Response to parse.
 */
void GetDocumentationPartResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDocumentationPartResponsePrivate
 *
 * @brief  Private implementation for GetDocumentationPartResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationPartResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDocumentationPartResponse instance.
 */
GetDocumentationPartResponsePrivate::GetDocumentationPartResponsePrivate(
    GetDocumentationPartQueueResponse * const q) : GetDocumentationPartPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetDocumentationPartResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDocumentationPartResponsePrivate::GetDocumentationPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationPartResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
