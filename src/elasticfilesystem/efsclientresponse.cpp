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

#include "efsclientresponse.h"
#include "efsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace EFS {

/**
 * @class  EfsClientResponse
 *
 * @brief  Handles EFS EfsClient responses.
 *
 * @see    EFSClient::efsClient
 */

/**
 * @brief  Constructs a new EfsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
EfsClientResponse::EfsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new EfsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  EfsClientResponsePrivate
 *
 * @brief  Private implementation for EfsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EfsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EfsClientResponse instance.
 */
EfsClientResponsePrivate::EfsClientResponsePrivate(
    EfsClientQueueResponse * const q) : EfsClientPrivate(q)
{

}

} // namespace EFS
} // namespace AWS
