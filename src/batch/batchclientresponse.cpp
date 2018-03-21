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

#include "batchclientresponse.h"
#include "batchclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  BatchClientResponse
 *
 * @brief  Handles  BatchClient responses.
 *
 * @see    Client::batchClient
 */

/**
 * @brief  Constructs a new BatchClientResponse object.
 *
 * @param  parent   This object's parent.
 */
BatchClientResponse::BatchClientResponse(QObject * const parent)
    : AwsAbstractResponse(new BatchClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  BatchClientResponsePrivate
 *
 * @brief  Private implementation for BatchClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchClientResponse instance.
 */
BatchClientResponsePrivate::BatchClientResponsePrivate(
    BatchClientQueueResponse * const q) : BatchClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
