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

#include "getdocumentresponse.h"
#include "getdocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  GetDocumentResponse
 *
 * @brief  Handles SSM GetDocument responses.
 *
 * @see    SSMClient::getDocument
 */

/**
 * @brief  Constructs a new GetDocumentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentResponse::GetDocumentResponse(
        const GetDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetDocumentResponsePrivate(this), parent)
{
    setRequest(new GetDocumentRequest(request));
    setReply(reply);
}

const GetDocumentRequest * GetDocumentResponse::request() const
{
    Q_D(const GetDocumentResponse);
    return static_cast<const GetDocumentRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetDocument response.
 *
 * @param  response  Response to parse.
 */
void GetDocumentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDocumentResponsePrivate
 *
 * @brief  Private implementation for GetDocumentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDocumentResponse instance.
 */
GetDocumentResponsePrivate::GetDocumentResponsePrivate(
    GetDocumentQueueResponse * const q) : GetDocumentPrivate(q)
{

}

/**
 * @brief  Parse an SSM GetDocumentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDocumentResponsePrivate::GetDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
