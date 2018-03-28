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

#include "glacierclientresponse.h"
#include "glacierclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  GlacierClientResponse
 *
 * @brief  Handles Glacier GlacierClient responses.
 *
 * @see    GlacierClient::glacierClient
 */

/**
 * @brief  Constructs a new GlacierClientResponse object.
 *
 * @param  parent   This object's parent.
 */
GlacierClientResponse::GlacierClientResponse(QObject * const parent)
    : AwsAbstractResponse(new GlacierClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  GlacierClientResponsePrivate
 *
 * @brief  Private implementation for GlacierClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GlacierClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GlacierClientResponse instance.
 */
GlacierClientResponsePrivate::GlacierClientResponsePrivate(
    GlacierClientQueueResponse * const q) : GlacierClientPrivate(q)
{

}

} // namespace Glacier
} // namespace AWS
