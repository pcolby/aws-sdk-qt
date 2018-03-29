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

#include "getdocumentpathresponse.h"
#include "getdocumentpathresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  GetDocumentPathResponse
 *
 * @brief  Handles WorkDocs GetDocumentPath responses.
 *
 * @see    WorkDocsClient::getDocumentPath
 */

/**
 * @brief  Constructs a new GetDocumentPathResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentPathResponse::GetDocumentPathResponse(
        const GetDocumentPathRequest &request,
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
    Q_D(GetDocumentPathResponse);
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
    GetDocumentPathResponse * const q) : WorkDocsResponsePrivate(q)
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

} // namespace WorkDocs
} // namespace QtAws
