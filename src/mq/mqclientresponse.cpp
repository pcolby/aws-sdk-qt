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

#include "mqclientresponse.h"
#include "mqclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace MQ {

/**
 * @class  MqClientResponse
 *
 * @brief  Handles  MqClient responses.
 *
 * @see    Client::mqClient
 */

/**
 * @brief  Constructs a new MqClientResponse object.
 *
 * @param  parent   This object's parent.
 */
MqClientResponse::MqClientResponse(QObject * const parent)
    : AwsAbstractResponse(new MqClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MqClientResponsePrivate
 *
 * @brief  Private implementation for MqClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MqClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MqClientResponse instance.
 */
MqClientResponsePrivate::MqClientResponsePrivate(
    MqClientQueueResponse * const q) : MqClientPrivate(q)
{

}

} // namespace MQ
} // namespace AWS
