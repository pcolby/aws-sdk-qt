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

#include "sqsclientresponse.h"
#include "sqsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace SQS {

/**
 * @class  SqsClientResponse
 *
 * @brief  Handles SQS SqsClient responses.
 *
 * @see    SQSClient::sqsClient
 */

/**
 * @brief  Constructs a new SqsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
SqsClientResponse::SqsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new SqsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  SqsClientResponsePrivate
 *
 * @brief  Private implementation for SqsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsClientResponse instance.
 */
SqsClientResponsePrivate::SqsClientResponsePrivate(
    SqsClientQueueResponse * const q) : SqsClientPrivate(q)
{

}

} // namespace SQS
} // namespace AWS
