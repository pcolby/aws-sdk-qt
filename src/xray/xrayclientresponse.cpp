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

#include "xrayclientresponse.h"
#include "xrayclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace XRay {

/**
 * @class  XRayClientResponse
 *
 * @brief  Handles  XRayClient responses.
 *
 * @see    Client::xRayClient
 */

/**
 * @brief  Constructs a new XRayClientResponse object.
 *
 * @param  parent   This object's parent.
 */
XRayClientResponse::XRayClientResponse(QObject * const parent)
    : AwsAbstractResponse(new XRayClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  XRayClientResponsePrivate
 *
 * @brief  Private implementation for XRayClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new XRayClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public XRayClientResponse instance.
 */
XRayClientResponsePrivate::XRayClientResponsePrivate(
    XRayClientQueueResponse * const q) : XRayClientPrivate(q)
{

}

} // namespace XRay
} // namespace AWS
