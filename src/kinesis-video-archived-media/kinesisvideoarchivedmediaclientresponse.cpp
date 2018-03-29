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

#include "kinesisvideoarchivedmediaclientresponse.h"
#include "kinesisvideoarchivedmediaclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisVideoArchivedMedia {

/**
 * @class  KinesisVideoArchivedMediaClientResponse
 *
 * @brief  Handles KinesisVideoArchivedMedia KinesisVideoArchivedMediaClient responses.
 *
 * @see    KinesisVideoArchivedMediaClient::kinesisVideoArchivedMediaClient
 */

/**
 * @brief  Constructs a new KinesisVideoArchivedMediaClientResponse object.
 *
 * @param  parent   This object's parent.
 */
KinesisVideoArchivedMediaClientResponse::KinesisVideoArchivedMediaClientResponse(QObject * const parent)
    : AwsAbstractResponse(new KinesisVideoArchivedMediaClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  KinesisVideoArchivedMediaClientResponsePrivate
 *
 * @brief  Private implementation for KinesisVideoArchivedMediaClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisVideoArchivedMediaClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public KinesisVideoArchivedMediaClientResponse instance.
 */
KinesisVideoArchivedMediaClientResponsePrivate::KinesisVideoArchivedMediaClientResponsePrivate(
    KinesisVideoArchivedMediaClientQueueResponse * const q) : KinesisVideoArchivedMediaClientPrivate(q)
{

}

} // namespace KinesisVideoArchivedMedia
} // namespace AWS
