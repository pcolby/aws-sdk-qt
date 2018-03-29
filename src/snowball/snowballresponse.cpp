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

#include "snowballresponse.h"
#include "snowballresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/**
 * @class  SnowballResponse
 *
 * @brief  Handles Snowball Snowball responses.
 *
 * @see    SnowballClient::snowball
 */

/**
 * @brief  Constructs a new SnowballResponse object.
 *
 * @param  parent   This object's parent.
 */
SnowballResponse::SnowballResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SnowballResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  SnowballResponsePrivate
 *
 * @brief  Private implementation for SnowballResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SnowballResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SnowballResponse instance.
 */
SnowballResponsePrivate::SnowballResponsePrivate(
    SnowballQueueResponse * const q) : SnowballPrivate(q)
{

}

} // namespace Snowball
} // namespace QtAws
