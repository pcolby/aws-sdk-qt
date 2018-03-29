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

#include "listdocumentversionsresponse.h"
#include "listdocumentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  ListDocumentVersionsResponse
 *
 * @brief  Handles SSM ListDocumentVersions responses.
 *
 * @see    SSMClient::listDocumentVersions
 */

/**
 * @brief  Constructs a new ListDocumentVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDocumentVersionsResponse::ListDocumentVersionsResponse(
        const ListDocumentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ListDocumentVersionsResponsePrivate(this), parent)
{
    setRequest(new ListDocumentVersionsRequest(request));
    setReply(reply);
}

const ListDocumentVersionsRequest * ListDocumentVersionsResponse::request() const
{
    Q_D(const ListDocumentVersionsResponse);
    return static_cast<const ListDocumentVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListDocumentVersions response.
 *
 * @param  response  Response to parse.
 */
void ListDocumentVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDocumentVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDocumentVersionsResponsePrivate
 *
 * @brief  Private implementation for ListDocumentVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDocumentVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDocumentVersionsResponse instance.
 */
ListDocumentVersionsResponsePrivate::ListDocumentVersionsResponsePrivate(
    ListDocumentVersionsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM ListDocumentVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDocumentVersionsResponsePrivate::ListDocumentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDocumentVersionsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
