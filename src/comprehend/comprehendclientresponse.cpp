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

#include "comprehendclientresponse.h"
#include "comprehendclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  ComprehendClientResponse
 *
 * @brief  Handles  ComprehendClient responses.
 *
 * @see    Client::comprehendClient
 */

/**
 * @brief  Constructs a new ComprehendClientResponse object.
 *
 * @param  parent   This object's parent.
 */
ComprehendClientResponse::ComprehendClientResponse(QObject * const parent)
    : AwsAbstractResponse(new ComprehendClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ComprehendClientResponsePrivate
 *
 * @brief  Private implementation for ComprehendClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ComprehendClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ComprehendClientResponse instance.
 */
ComprehendClientResponsePrivate::ComprehendClientResponsePrivate(
    ComprehendClientQueueResponse * const q) : ComprehendClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
