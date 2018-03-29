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

#include "opsworkscmclientresponse.h"
#include "opsworkscmclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  OpsWorksCMClientResponse
 *
 * @brief  Handles OpsWorksCM OpsWorksCMClient responses.
 *
 * @see    OpsWorksCMClient::opsWorksCMClient
 */

/**
 * @brief  Constructs a new OpsWorksCMClientResponse object.
 *
 * @param  parent   This object's parent.
 */
OpsWorksCMClientResponse::OpsWorksCMClientResponse(QObject * const parent)
    : AwsAbstractResponse(new OpsWorksCMClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  OpsWorksCMClientResponsePrivate
 *
 * @brief  Private implementation for OpsWorksCMClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new OpsWorksCMClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public OpsWorksCMClientResponse instance.
 */
OpsWorksCMClientResponsePrivate::OpsWorksCMClientResponsePrivate(
    OpsWorksCMClientQueueResponse * const q) : OpsWorksCMClientPrivate(q)
{

}

} // namespace OpsWorksCM
} // namespace AWS
