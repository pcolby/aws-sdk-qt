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

#include "listobjectattributesresponse.h"
#include "listobjectattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ListObjectAttributesResponse
 *
 * @brief  Handles CloudDirectory ListObjectAttributes responses.
 *
 * @see    CloudDirectoryClient::listObjectAttributes
 */

/**
 * @brief  Constructs a new ListObjectAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListObjectAttributesResponse::ListObjectAttributesResponse(
        const ListObjectAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectAttributesResponsePrivate(this), parent)
{
    setRequest(new ListObjectAttributesRequest(request));
    setReply(reply);
}

const ListObjectAttributesRequest * ListObjectAttributesResponse::request() const
{
    Q_D(const ListObjectAttributesResponse);
    return static_cast<const ListObjectAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListObjectAttributes response.
 *
 * @param  response  Response to parse.
 */
void ListObjectAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListObjectAttributesResponsePrivate
 *
 * @brief  Private implementation for ListObjectAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListObjectAttributesResponse instance.
 */
ListObjectAttributesResponsePrivate::ListObjectAttributesResponsePrivate(
    ListObjectAttributesQueueResponse * const q) : ListObjectAttributesPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListObjectAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListObjectAttributesResponsePrivate::ListObjectAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectAttributesResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
