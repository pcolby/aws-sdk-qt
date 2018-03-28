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

#include "ecrclientresponse.h"
#include "ecrclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  EcrClientResponse
 *
 * @brief  Handles  EcrClient responses.
 *
 * @see    Client::ecrClient
 */

/**
 * @brief  Constructs a new EcrClientResponse object.
 *
 * @param  parent   This object's parent.
 */
EcrClientResponse::EcrClientResponse(QObject * const parent)
    : AwsAbstractResponse(new EcrClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  EcrClientResponsePrivate
 *
 * @brief  Private implementation for EcrClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EcrClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EcrClientResponse instance.
 */
EcrClientResponsePrivate::EcrClientResponsePrivate(
    EcrClientQueueResponse * const q) : EcrClientPrivate(q)
{

}

} // namespace ECR
} // namespace AWS
