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

#include "autoscalingplansclientresponse.h"
#include "autoscalingplansclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScalingPlans {

/**
 * @class  AutoScalingPlansClientResponse
 *
 * @brief  Handles  AutoScalingPlansClient responses.
 *
 * @see    Client::autoScalingPlansClient
 */

/**
 * @brief  Constructs a new AutoScalingPlansClientResponse object.
 *
 * @param  parent   This object's parent.
 */
AutoScalingPlansClientResponse::AutoScalingPlansClientResponse(QObject * const parent)
    : AwsAbstractResponse(new AutoScalingPlansClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  AutoScalingPlansClientResponsePrivate
 *
 * @brief  Private implementation for AutoScalingPlansClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingPlansClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AutoScalingPlansClientResponse instance.
 */
AutoScalingPlansClientResponsePrivate::AutoScalingPlansClientResponsePrivate(
    AutoScalingPlansClientQueueResponse * const q) : AutoScalingPlansClientPrivate(q)
{

}

} // namespace AutoScalingPlans
} // namespace AWS
