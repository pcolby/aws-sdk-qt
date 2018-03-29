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

#include "addtagstostreamresponse.h"
#include "addtagstostreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  AddTagsToStreamResponse
 *
 * @brief  Handles Kinesis AddTagsToStream responses.
 *
 * @see    KinesisClient::addTagsToStream
 */

/**
 * @brief  Constructs a new AddTagsToStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddTagsToStreamResponse::AddTagsToStreamResponse(
        const AddTagsToStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new AddTagsToStreamResponsePrivate(this), parent)
{
    setRequest(new AddTagsToStreamRequest(request));
    setReply(reply);
}

const AddTagsToStreamRequest * AddTagsToStreamResponse::request() const
{
    Q_D(const AddTagsToStreamResponse);
    return static_cast<const AddTagsToStreamRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis AddTagsToStream response.
 *
 * @param  response  Response to parse.
 */
void AddTagsToStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddTagsToStreamResponsePrivate
 *
 * @brief  Private implementation for AddTagsToStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddTagsToStreamResponse instance.
 */
AddTagsToStreamResponsePrivate::AddTagsToStreamResponsePrivate(
    AddTagsToStreamQueueResponse * const q) : AddTagsToStreamPrivate(q)
{

}

/**
 * @brief  Parse an Kinesis AddTagsToStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddTagsToStreamResponsePrivate::AddTagsToStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddTagsToStreamResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
