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

#include "sagemakerclientresponse.h"
#include "sagemakerclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  SageMakerClientResponse
 *
 * @brief  Handles SageMaker SageMakerClient responses.
 *
 * @see    SageMakerClient::sageMakerClient
 */

/**
 * @brief  Constructs a new SageMakerClientResponse object.
 *
 * @param  parent   This object's parent.
 */
SageMakerClientResponse::SageMakerClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SageMakerClientResponsePrivate(this), parent)
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
} // namespace QtAws
