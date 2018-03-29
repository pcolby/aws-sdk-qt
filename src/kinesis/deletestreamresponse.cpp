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

#include "deletestreamresponse.h"
#include "deletestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  DeleteStreamResponse
 *
 * @brief  Handles Kinesis DeleteStream responses.
 *
 * @see    KinesisClient::deleteStream
 */

/**
 * @brief  Constructs a new DeleteStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStreamResponse::DeleteStreamResponse(
        const DeleteStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DeleteStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamRequest(request));
    setReply(reply);
}

const DeleteStreamRequest * DeleteStreamResponse::request() const
{
    Q_D(const DeleteStreamResponse);
    return static_cast<const DeleteStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis DeleteStream response.
 *
 * @param  response  Response to parse.
 */
void DeleteStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStreamResponsePrivate
 *
 * @brief  Private implementation for DeleteStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStreamResponse instance.
 */
DeleteStreamResponsePrivate::DeleteStreamResponsePrivate(
    DeleteStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis DeleteStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStreamResponsePrivate::parseDeleteStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
