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

#include "listattachedindicesresponse.h"
#include "listattachedindicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListAttachedIndicesResponse
 *
 * @brief  Handles CloudDirectory ListAttachedIndices responses.
 *
 * @see    CloudDirectoryClient::listAttachedIndices
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttachedIndicesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListAttachedIndicesResponsePrivate(this), parent)
{
    setRequest(new ListAttachedIndicesRequest(request));
    setReply(reply);
}

const ListAttachedIndicesRequest * ListAttachedIndicesResponse::request() const
{
    Q_D(const ListAttachedIndicesResponse);
    return static_cast<const ListAttachedIndicesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListAttachedIndices response.
 *
 * @param  response  Response to parse.
 */
void ListAttachedIndicesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAttachedIndicesResponsePrivate
 *
 * @brief  Private implementation for ListAttachedIndicesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedIndicesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAttachedIndicesResponse instance.
 */
ListAttachedIndicesResponsePrivate::ListAttachedIndicesResponsePrivate(
    ListAttachedIndicesQueueResponse * const q) : ListAttachedIndicesPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListAttachedIndicesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAttachedIndicesResponsePrivate::ListAttachedIndicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachedIndicesResponse"));
    /// @todo
}
