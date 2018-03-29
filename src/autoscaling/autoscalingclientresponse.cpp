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

#include "autoscalingclientresponse.h"
#include "autoscalingclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  AutoScalingClientResponse
 *
 * @brief  Handles AutoScaling AutoScalingClient responses.
 *
 * @see    AutoScalingClient::autoScalingClient
 */

/**
 * @brief  Constructs a new AutoScalingClientResponse object.
 *
 * @param  parent   This object's parent.
 */
AutoScalingClientResponse::AutoScalingClientResponse(QObject * const parent)
    : AwsAbstractResponse(new AutoScalingClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  AutoScalingClientResponsePrivate
 *
 * @brief  Private implementation for AutoScalingClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AutoScalingClientResponse instance.
 */
AutoScalingClientResponsePrivate::AutoScalingClientResponsePrivate(
    AutoScalingClientQueueResponse * const q) : AutoScalingClientPrivate(q)
{

}

} // namespace AutoScaling
} // namespace AWS
