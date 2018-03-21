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

#include "getdocumentationversionsresponse.h"
#include "getdocumentationversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetDocumentationVersionsResponse
 *
 * @brief  Handles APIGateway GetDocumentationVersions responses.
 *
 * @see    APIGatewayClient::getDocumentationVersions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentationVersionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDocumentationVersionsResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationVersionsRequest(request));
    setReply(reply);
}

const GetDocumentationVersionsRequest * GetDocumentationVersionsResponse::request() const
{
    Q_D(const GetDocumentationVersionsResponse);
    return static_cast<const GetDocumentationVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetDocumentationVersions response.
 *
 * @param  response  Response to parse.
 */
void GetDocumentationVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDocumentationVersionsResponsePrivate
 *
 * @brief  Private implementation for GetDocumentationVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDocumentationVersionsResponse instance.
 */
GetDocumentationVersionsResponsePrivate::GetDocumentationVersionsResponsePrivate(
    GetDocumentationVersionsQueueResponse * const q) : GetDocumentationVersionsPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetDocumentationVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDocumentationVersionsResponsePrivate::GetDocumentationVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationVersionsResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
