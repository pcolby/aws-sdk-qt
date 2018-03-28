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

#include "applicationautoscalingclientresponse.h"
#include "applicationautoscalingclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  ApplicationAutoScalingClientResponse
 *
 * @brief  Handles ApplicationAutoScaling ApplicationAutoScalingClient responses.
 *
 * @see    ApplicationAutoScalingClient::applicationAutoScalingClient
 */

/**
 * @brief  Constructs a new ApplicationAutoScalingClientResponse object.
 *
 * @param  parent   This object's parent.
 */
ApplicationAutoScalingClientResponse::ApplicationAutoScalingClientResponse(QObject * const parent)
    : AwsAbstractResponse(new ApplicationAutoScalingClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ApplicationAutoScalingClientResponsePrivate
 *
 * @brief  Private implementation for ApplicationAutoScalingClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplicationAutoScalingClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ApplicationAutoScalingClientResponse instance.
 */
ApplicationAutoScalingClientResponsePrivate::ApplicationAutoScalingClientResponsePrivate(
    ApplicationAutoScalingClientQueueResponse * const q) : ApplicationAutoScalingClientPrivate(q)
{

}

} // namespace ApplicationAutoScaling
} // namespace AWS
