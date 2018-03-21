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

#include "attachtoindexresponse.h"
#include "attachtoindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  AttachToIndexResponse
 *
 * @brief  Handles CloudDirectory AttachToIndex responses.
 *
 * @see    CloudDirectoryClient::attachToIndex
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachToIndexResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new AttachToIndexResponsePrivate(this), parent)
{
    setRequest(new AttachToIndexRequest(request));
    setReply(reply);
}

const AttachToIndexRequest * AttachToIndexResponse::request() const
{
    Q_D(const AttachToIndexResponse);
    return static_cast<const AttachToIndexRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory AttachToIndex response.
 *
 * @param  response  Response to parse.
 */
void AttachToIndexResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachToIndexResponsePrivate
 *
 * @brief  Private implementation for AttachToIndexResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachToIndexResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachToIndexResponse instance.
 */
AttachToIndexResponsePrivate::AttachToIndexResponsePrivate(
    AttachToIndexQueueResponse * const q) : AttachToIndexPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory AttachToIndexResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachToIndexResponsePrivate::AttachToIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachToIndexResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
