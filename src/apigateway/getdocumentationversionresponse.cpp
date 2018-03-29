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

#include "getdocumentationversionresponse.h"
#include "getdocumentationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetDocumentationVersionResponse
 *
 * @brief  Handles APIGateway GetDocumentationVersion responses.
 *
 * @see    APIGatewayClient::getDocumentationVersion
 */

/**
 * @brief  Constructs a new GetDocumentationVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentationVersionResponse::GetDocumentationVersionResponse(
        const GetDocumentationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDocumentationVersionResponsePrivate(this), parent)
{
    setRequest(new GetDocumentationVersionRequest(request));
    setReply(reply);
}

const GetDocumentationVersionRequest * GetDocumentationVersionResponse::request() const
{
    Q_D(const GetDocumentationVersionResponse);
    return static_cast<const GetDocumentationVersionRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetDocumentationVersion response.
 *
 * @param  response  Response to parse.
 */
void GetDocumentationVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDocumentationVersionResponsePrivate
 *
 * @brief  Private implementation for GetDocumentationVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentationVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDocumentationVersionResponse instance.
 */
GetDocumentationVersionResponsePrivate::GetDocumentationVersionResponsePrivate(
    GetDocumentationVersionQueueResponse * const q) : GetDocumentationVersionPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetDocumentationVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDocumentationVersionResponsePrivate::GetDocumentationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentationVersionResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
