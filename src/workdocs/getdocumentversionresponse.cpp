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

#include "getdocumentversionresponse.h"
#include "getdocumentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  GetDocumentVersionResponse
 *
 * @brief  Handles WorkDocs GetDocumentVersion responses.
 *
 * @see    WorkDocsClient::getDocumentVersion
 */

/**
 * @brief  Constructs a new GetDocumentVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDocumentVersionResponse::GetDocumentVersionResponse(
        const GetDocumentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new GetDocumentVersionResponsePrivate(this), parent)
{
    setRequest(new GetDocumentVersionRequest(request));
    setReply(reply);
}

const GetDocumentVersionRequest * GetDocumentVersionResponse::request() const
{
    Q_D(const GetDocumentVersionResponse);
    return static_cast<const GetDocumentVersionRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs GetDocumentVersion response.
 *
 * @param  response  Response to parse.
 */
void GetDocumentVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDocumentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDocumentVersionResponsePrivate
 *
 * @brief  Private implementation for GetDocumentVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDocumentVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDocumentVersionResponse instance.
 */
GetDocumentVersionResponsePrivate::GetDocumentVersionResponsePrivate(
    GetDocumentVersionResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs GetDocumentVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDocumentVersionResponsePrivate::GetDocumentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDocumentVersionResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
