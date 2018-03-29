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

#include "getdocumentationpartsresponse.h"
#include "getdocumentationpartsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetDocumentationPartsResponse
 *
 * @brief  Handles APIGateway GetDocumentationParts responses.
 *
 * @see    APIGatewayClient::getDocumentationParts
 */

/**
 * @brief  Constructs a new GetDocumentationPartsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentationPartsResponse::GetDocumentationPartsResponse(
        const GetDocumentationPartsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDocumentationPartsResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationPartsRequest(request));
    setReply(reply);
}

const GetDocumentationPartsRequest * GetDocumentationPartsResponse::request() const
{
    Q_D(const GetDocumentationPartsResponse);
    return static_cast<const GetDocumentationPartsRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetDocumentationParts response.
 *
 * @param  response  Response to parse.
 */
void GetDocumentationPartsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDocumentationPartsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDocumentationPartsResponsePrivate
 *
 * @brief  Private implementation for GetDocumentationPartsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationPartsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDocumentationPartsResponse instance.
 */
GetDocumentationPartsResponsePrivate::GetDocumentationPartsResponsePrivate(
    GetDocumentationPartsResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetDocumentationPartsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDocumentationPartsResponsePrivate::GetDocumentationPartsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationPartsResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
