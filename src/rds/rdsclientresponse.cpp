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

#include "rdsclientresponse.h"
#include "rdsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  RdsClientResponse
 *
 * @brief  Handles  RdsClient responses.
 *
 * @see    Client::rdsClient
 */

/**
 * @brief  Constructs a new RdsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
RdsClientResponse::RdsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new RdsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  RdsClientResponsePrivate
 *
 * @brief  Private implementation for RdsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RdsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RdsClientResponse instance.
 */
RdsClientResponsePrivate::RdsClientResponsePrivate(
    RdsClientQueueResponse * const q) : RdsClientPrivate(q)
{

}

} // namespace RDS
} // namespace AWS
