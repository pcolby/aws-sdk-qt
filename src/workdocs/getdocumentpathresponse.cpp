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

#include "getdocumentpathresponse.h"
#include "getdocumentpathresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  GetDocumentPathResponse
 *
 * @brief  Handles WorkDocs GetDocumentPath responses.
 *
 * @see    WorkDocsClient::getDocumentPath
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentPathResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new GetDocumentPathResponsePrivate(this), parent)
{
    setRequest(new GetDocumentPathRequest(request));
    setReply(reply);
}

const GetDocumentPathRequest * GetDocumentPathResponse::request() const
{
    Q_D(const GetDocumentPathResponse);
    return static_cast<const GetDocumentPathRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs GetDocumentPath response.
 *
 * @param  response  Response to parse.
 */
void GetDocumentPathResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDocumentPathResponsePrivate
 *
 * @brief  Private implementation for GetDocumentPathResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentPathResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDocumentPathResponse instance.
 */
GetDocumentPathResponsePrivate::GetDocumentPathResponsePrivate(
    GetDocumentPathQueueResponse * const q) : GetDocumentPathPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs GetDocumentPathResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDocumentPathResponsePrivate::GetDocumentPathResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentPathResponse"));
    /// @todo
}
