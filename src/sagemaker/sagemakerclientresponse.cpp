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

#include "sagemakerclientresponse.h"
#include "sagemakerclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  SageMakerClientResponse
 *
 * @brief  Handles  SageMakerClient responses.
 *
 * @see    Client::sageMakerClient
 */

/**
 * @brief  Constructs a new SageMakerClientResponse object.
 *
 * @param  parent   This object's parent.
 */
SageMakerClientResponse::SageMakerClientResponse(QObject * const parent)
    : AwsAbstractResponse(new SageMakerClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  SageMakerClientResponsePrivate
 *
 * @brief  Private implementation for SageMakerClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SageMakerClientResponse instance.
 */
SageMakerClientResponsePrivate::SageMakerClientResponsePrivate(
    SageMakerClientQueueResponse * const q) : SageMakerClientPrivate(q)
{

}

} // namespace SageMaker
} // namespace AWS
