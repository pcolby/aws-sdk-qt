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

#include "listobjectchildrenresponse.h"
#include "listobjectchildrenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListObjectChildrenResponse
 *
 * @brief  Handles CloudDirectory ListObjectChildren responses.
 *
 * @see    CloudDirectoryClient::listObjectChildren
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListObjectChildrenResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListObjectChildrenResponsePrivate(this), parent)
{
    setRequest(new ListObjectChildrenRequest(request));
    setReply(reply);
}

const ListObjectChildrenRequest * ListObjectChildrenResponse::request() const
{
    Q_D(const ListObjectChildrenResponse);
    return static_cast<const ListObjectChildrenRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListObjectChildren response.
 *
 * @param  response  Response to parse.
 */
void ListObjectChildrenResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListObjectChildrenResponsePrivate
 *
 * @brief  Private implementation for ListObjectChildrenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListObjectChildrenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListObjectChildrenResponse instance.
 */
ListObjectChildrenResponsePrivate::ListObjectChildrenResponsePrivate(
    ListObjectChildrenQueueResponse * const q) : ListObjectChildrenPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListObjectChildrenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListObjectChildrenResponsePrivate::ListObjectChildrenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListObjectChildrenResponse"));
    /// @todo
}
