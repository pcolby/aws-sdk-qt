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

#include "kinesisvideomediaclientresponse.h"
#include "kinesisvideomediaclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideoMedia {

/**
 * @class  KinesisVideoMediaClientResponse
 *
 * @brief  Handles KinesisVideoMedia KinesisVideoMediaClient responses.
 *
 * @see    KinesisVideoMediaClient::kinesisVideoMediaClient
 */

/**
 * @brief  Constructs a new KinesisVideoMediaClientResponse object.
 *
 * @param  parent   This object's parent.
 */
KinesisVideoMediaClientResponse::KinesisVideoMediaClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new KinesisVideoMediaClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  KinesisVideoMediaClientResponsePrivate
 *
 * @brief  Private implementation for KinesisVideoMediaClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisVideoMediaClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public KinesisVideoMediaClientResponse instance.
 */
KinesisVideoMediaClientResponsePrivate::KinesisVideoMediaClientResponsePrivate(
    KinesisVideoMediaClientQueueResponse * const q) : KinesisVideoMediaClientPrivate(q)
{

}

} // namespace KinesisVideoMedia
} // namespace QtAws
