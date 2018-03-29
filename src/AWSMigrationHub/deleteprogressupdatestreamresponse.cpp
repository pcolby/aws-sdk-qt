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

#include "deleteprogressupdatestreamresponse.h"
#include "deleteprogressupdatestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MigrationHub {

/**
 * @class  DeleteProgressUpdateStreamResponse
 *
 * @brief  Handles MigrationHub DeleteProgressUpdateStream responses.
 *
 * @see    MigrationHubClient::deleteProgressUpdateStream
 */

/**
 * @brief  Constructs a new DeleteProgressUpdateStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteProgressUpdateStreamResponse::DeleteProgressUpdateStreamResponse(
        const DeleteProgressUpdateStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new DeleteProgressUpdateStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteProgressUpdateStreamRequest(request));
    setReply(reply);
}

const DeleteProgressUpdateStreamRequest * DeleteProgressUpdateStreamResponse::request() const
{
    Q_D(const DeleteProgressUpdateStreamResponse);
    return static_cast<const DeleteProgressUpdateStreamRequest *>(d->request);
}

/**
 * @brief  Parse a MigrationHub DeleteProgressUpdateStream response.
 *
 * @param  response  Response to parse.
 */
void DeleteProgressUpdateStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteProgressUpdateStreamResponsePrivate
 *
 * @brief  Private implementation for DeleteProgressUpdateStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteProgressUpdateStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteProgressUpdateStreamResponse instance.
 */
DeleteProgressUpdateStreamResponsePrivate::DeleteProgressUpdateStreamResponsePrivate(
    DeleteProgressUpdateStreamQueueResponse * const q) : DeleteProgressUpdateStreamPrivate(q)
{

}

/**
 * @brief  Parse an MigrationHub DeleteProgressUpdateStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteProgressUpdateStreamResponsePrivate::DeleteProgressUpdateStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProgressUpdateStreamResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace AWS
