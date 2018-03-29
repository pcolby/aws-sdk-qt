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

#include "sagemakerruntimeclientresponse.h"
#include "sagemakerruntimeclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMakerRuntime {

/**
 * @class  SageMakerRuntimeClientResponse
 *
 * @brief  Handles SageMakerRuntime SageMakerRuntimeClient responses.
 *
 * @see    SageMakerRuntimeClient::sageMakerRuntimeClient
 */

/**
 * @brief  Constructs a new SageMakerRuntimeClientResponse object.
 *
 * @param  parent   This object's parent.
 */
SageMakerRuntimeClientResponse::SageMakerRuntimeClientResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new SageMakerRuntimeClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  SageMakerRuntimeClientResponsePrivate
 *
 * @brief  Private implementation for SageMakerRuntimeClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerRuntimeClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SageMakerRuntimeClientResponse instance.
 */
SageMakerRuntimeClientResponsePrivate::SageMakerRuntimeClientResponsePrivate(
    SageMakerRuntimeClientQueueResponse * const q) : SageMakerRuntimeClientPrivate(q)
{

}

} // namespace SageMakerRuntime
} // namespace QtAws
