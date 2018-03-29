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

#include "kinesisvideoclientresponse.h"
#include "kinesisvideoclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/**
 * @class  KinesisVideoClientResponse
 *
 * @brief  Handles KinesisVideo KinesisVideoClient responses.
 *
 * @see    KinesisVideoClient::kinesisVideoClient
 */

/**
 * @brief  Constructs a new KinesisVideoClientResponse object.
 *
 * @param  parent   This object's parent.
 */
KinesisVideoClientResponse::KinesisVideoClientResponse(QObject * const parent)
    : AwsAbstractResponse(new KinesisVideoClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  KinesisVideoClientResponsePrivate
 *
 * @brief  Private implementation for KinesisVideoClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisVideoClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public KinesisVideoClientResponse instance.
 */
KinesisVideoClientResponsePrivate::KinesisVideoClientResponsePrivate(
    KinesisVideoClientQueueResponse * const q) : KinesisVideoClientPrivate(q)
{

}

} // namespace KinesisVideo
} // namespace QtAws
