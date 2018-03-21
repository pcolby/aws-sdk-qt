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

#include "listschemaextensionsresponse.h"
#include "listschemaextensionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  ListSchemaExtensionsResponse
 *
 * @brief  Handles DirectoryService ListSchemaExtensions responses.
 *
 * @see    DirectoryServiceClient::listSchemaExtensions
 */

/**
 * @brief  Constructs a new ListSchemaExtensionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSchemaExtensionsResponse::ListSchemaExtensionsResponse(
        const ListSchemaExtensionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new ListSchemaExtensionsResponsePrivate(this), parent)
{
    setRequest(new ListSchemaExtensionsRequest(request));
    setReply(reply);
}

const ListSchemaExtensionsRequest * ListSchemaExtensionsResponse::request() const
{
    Q_D(const ListSchemaExtensionsResponse);
    return static_cast<const ListSchemaExtensionsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService ListSchemaExtensions response.
 *
 * @param  response  Response to parse.
 */
void ListSchemaExtensionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSchemaExtensionsResponsePrivate
 *
 * @brief  Private implementation for ListSchemaExtensionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSchemaExtensionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSchemaExtensionsResponse instance.
 */
ListSchemaExtensionsResponsePrivate::ListSchemaExtensionsResponsePrivate(
    ListSchemaExtensionsQueueResponse * const q) : ListSchemaExtensionsPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService ListSchemaExtensionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSchemaExtensionsResponsePrivate::ListSchemaExtensionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchemaExtensionsResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
