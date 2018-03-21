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

#include "kinesisanalyticsclientresponse.h"
#include "kinesisanalyticsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  KinesisAnalyticsClientResponse
 *
 * @brief  Handles  KinesisAnalyticsClient responses.
 *
 * @see    Client::kinesisAnalyticsClient
 */

/**
 * @brief  Constructs a new KinesisAnalyticsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
KinesisAnalyticsClientResponse::KinesisAnalyticsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new KinesisAnalyticsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  KinesisAnalyticsClientResponsePrivate
 *
 * @brief  Private implementation for KinesisAnalyticsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisAnalyticsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public KinesisAnalyticsClientResponse instance.
 */
KinesisAnalyticsClientResponsePrivate::KinesisAnalyticsClientResponsePrivate(
    KinesisAnalyticsClientQueueResponse * const q) : KinesisAnalyticsClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
