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

#include "daxclientresponse.h"
#include "daxclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace DAX {

/**
 * @class  DaxClientResponse
 *
 * @brief  Handles  DaxClient responses.
 *
 * @see    Client::daxClient
 */

/**
 * @brief  Constructs a new DaxClientResponse object.
 *
 * @param  parent   This object's parent.
 */
DaxClientResponse::DaxClientResponse(QObject * const parent)
    : AwsAbstractResponse(new DaxClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  DaxClientResponsePrivate
 *
 * @brief  Private implementation for DaxClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DaxClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DaxClientResponse instance.
 */
DaxClientResponsePrivate::DaxClientResponsePrivate(
    DaxClientQueueResponse * const q) : DaxClientPrivate(q)
{

}

} // namespace DAX
} // namespace AWS
