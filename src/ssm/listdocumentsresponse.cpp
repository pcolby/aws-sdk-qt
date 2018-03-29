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

#include "listdocumentsresponse.h"
#include "listdocumentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  ListDocumentsResponse
 *
 * @brief  Handles SSM ListDocuments responses.
 *
 * @see    SSMClient::listDocuments
 */

/**
 * @brief  Constructs a new ListDocumentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDocumentsResponse::ListDocumentsResponse(
        const ListDocumentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListDocumentsResponse(new ListDocumentsResponsePrivate(this), parent)
{
    setRequest(new ListDocumentsRequest(request));
    setReply(reply);
}

const ListDocumentsRequest * ListDocumentsResponse::request() const
{
    Q_D(const ListDocumentsResponse);
    return static_cast<const ListDocumentsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListDocuments response.
 *
 * @param  response  Response to parse.
 */
void ListDocumentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListDocumentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDocumentsResponsePrivate
 *
 * @brief  Private implementation for ListDocumentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDocumentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDocumentsResponse instance.
 */
ListDocumentsResponsePrivate::ListDocumentsResponsePrivate(
    ListDocumentsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM ListDocumentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDocumentsResponsePrivate::parseListDocumentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDocumentsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
