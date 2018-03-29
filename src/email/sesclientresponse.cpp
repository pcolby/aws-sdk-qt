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

#include "sesclientresponse.h"
#include "sesclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  SesClientResponse
 *
 * @brief  Handles SES SesClient responses.
 *
 * @see    SESClient::sesClient
 */

/**
 * @brief  Constructs a new SesClientResponse object.
 *
 * @param  parent   This object's parent.
 */
SesClientResponse::SesClientResponse(QObject * const parent)
    : AwsAbstractResponse(new SesClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  SesClientResponsePrivate
 *
 * @brief  Private implementation for SesClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SesClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SesClientResponse instance.
 */
SesClientResponsePrivate::SesClientResponsePrivate(
    SesClientQueueResponse * const q) : SesClientPrivate(q)
{

}

} // namespace SES
} // namespace AWS
