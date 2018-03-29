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

#include "batchdeleteconnectionresponse.h"
#include "batchdeleteconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  BatchDeleteConnectionResponse
 *
 * @brief  Handles Glue BatchDeleteConnection responses.
 *
 * @see    GlueClient::batchDeleteConnection
 */

/**
 * @brief  Constructs a new BatchDeleteConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDeleteConnectionResponse::BatchDeleteConnectionResponse(
        const BatchDeleteConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new BatchDeleteConnectionResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteConnectionRequest(request));
    setReply(reply);
}

const BatchDeleteConnectionRequest * BatchDeleteConnectionResponse::request() const
{
    Q_D(const BatchDeleteConnectionResponse);
    return static_cast<const BatchDeleteConnectionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue BatchDeleteConnection response.
 *
 * @param  response  Response to parse.
 */
void BatchDeleteConnectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDeleteConnectionResponsePrivate
 *
 * @brief  Private implementation for BatchDeleteConnectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteConnectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDeleteConnectionResponse instance.
 */
BatchDeleteConnectionResponsePrivate::BatchDeleteConnectionResponsePrivate(
    BatchDeleteConnectionQueueResponse * const q) : BatchDeleteConnectionPrivate(q)
{

}

/**
 * @brief  Parse an Glue BatchDeleteConnectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDeleteConnectionResponsePrivate::BatchDeleteConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteConnectionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
