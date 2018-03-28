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

#include "healthclientresponse.h"
#include "healthclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace Health {

/**
 * @class  HealthClientResponse
 *
 * @brief  Handles  HealthClient responses.
 *
 * @see    Client::healthClient
 */

/**
 * @brief  Constructs a new HealthClientResponse object.
 *
 * @param  parent   This object's parent.
 */
HealthClientResponse::HealthClientResponse(QObject * const parent)
    : AwsAbstractResponse(new HealthClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  HealthClientResponsePrivate
 *
 * @brief  Private implementation for HealthClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new HealthClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public HealthClientResponse instance.
 */
HealthClientResponsePrivate::HealthClientResponsePrivate(
    HealthClientQueueResponse * const q) : HealthClientPrivate(q)
{

}

} // namespace Health
} // namespace AWS
