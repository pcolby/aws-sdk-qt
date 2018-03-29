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

#include "batchresponse.h"
#include "batchresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/**
 * @class  BatchResponse
 *
 * @brief  Handles Batch Batch responses.
 *
 * @see    BatchClient::batch
 */

/**
 * @brief  Constructs a new BatchResponse object.
 *
 * @param  parent   This object's parent.
 */
BatchResponse::BatchResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new BatchResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  BatchResponsePrivate
 *
 * @brief  Private implementation for BatchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchResponse instance.
 */
BatchResponsePrivate::BatchResponsePrivate(
    BatchQueueResponse * const q) : BatchPrivate(q)
{

}

} // namespace Batch
} // namespace QtAws
