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

#include "listindexresponse.h"
#include "listindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListIndexResponse
 *
 * @brief  Handles CloudDirectory ListIndex responses.
 *
 * @see    CloudDirectoryClient::listIndex
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIndexResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListIndexResponsePrivate(this), parent)
{
    setRequest(new ListIndexRequest(request));
    setReply(reply);
}

const ListIndexRequest * ListIndexResponse::request() const
{
    Q_D(const ListIndexResponse);
    return static_cast<const ListIndexRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListIndex response.
 *
 * @param  response  Response to parse.
 */
void ListIndexResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIndexResponsePrivate
 *
 * @brief  Private implementation for ListIndexResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIndexResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIndexResponse instance.
 */
ListIndexResponsePrivate::ListIndexResponsePrivate(
    ListIndexQueueResponse * const q) : ListIndexPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListIndexResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIndexResponsePrivate::ListIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIndexResponse"));
    /// @todo
}
