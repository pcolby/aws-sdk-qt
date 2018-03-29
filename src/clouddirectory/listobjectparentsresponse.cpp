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

#include "listobjectparentsresponse.h"
#include "listobjectparentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListObjectParentsResponse
 *
 * @brief  Handles CloudDirectory ListObjectParents responses.
 *
 * @see    CloudDirectoryClient::listObjectParents
 */

/**
 * @brief  Constructs a new ListObjectParentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListObjectParentsResponse::ListObjectParentsResponse(
        const ListObjectParentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectParentsResponsePrivate(this), parent)
{
    setRequest(new ListObjectParentsRequest(request));
    setReply(reply);
}

const ListObjectParentsRequest * ListObjectParentsResponse::request() const
{
    Q_D(const ListObjectParentsResponse);
    return static_cast<const ListObjectParentsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListObjectParents response.
 *
 * @param  response  Response to parse.
 */
void ListObjectParentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListObjectParentsResponsePrivate
 *
 * @brief  Private implementation for ListObjectParentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectParentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListObjectParentsResponse instance.
 */
ListObjectParentsResponsePrivate::ListObjectParentsResponsePrivate(
    ListObjectParentsQueueResponse * const q) : ListObjectParentsPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListObjectParentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListObjectParentsResponsePrivate::ListObjectParentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectParentsResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
