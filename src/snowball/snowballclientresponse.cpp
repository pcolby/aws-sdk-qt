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

#include "snowballclientresponse.h"
#include "snowballclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace Snowball {

/**
 * @class  SnowballClientResponse
 *
 * @brief  Handles Snowball SnowballClient responses.
 *
 * @see    SnowballClient::snowballClient
 */

/**
 * @brief  Constructs a new SnowballClientResponse object.
 *
 * @param  parent   This object's parent.
 */
SnowballClientResponse::SnowballClientResponse(QObject * const parent)
    : AwsAbstractResponse(new SnowballClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  SnowballClientResponsePrivate
 *
 * @brief  Private implementation for SnowballClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SnowballClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SnowballClientResponse instance.
 */
SnowballClientResponsePrivate::SnowballClientResponsePrivate(
    SnowballClientQueueResponse * const q) : SnowballClientPrivate(q)
{

}

} // namespace Snowball
} // namespace AWS
