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

#include "ecsclientresponse.h"
#include "ecsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  EcsClientResponse
 *
 * @brief  Handles ECS EcsClient responses.
 *
 * @see    ECSClient::ecsClient
 */

/**
 * @brief  Constructs a new EcsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
EcsClientResponse::EcsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new EcsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  EcsClientResponsePrivate
 *
 * @brief  Private implementation for EcsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EcsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EcsClientResponse instance.
 */
EcsClientResponsePrivate::EcsClientResponsePrivate(
    EcsClientQueueResponse * const q) : EcsClientPrivate(q)
{

}

} // namespace ECS
} // namespace AWS
