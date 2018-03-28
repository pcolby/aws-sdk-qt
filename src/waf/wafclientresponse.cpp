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

#include "wafclientresponse.h"
#include "wafclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  WafClientResponse
 *
 * @brief  Handles WAF WafClient responses.
 *
 * @see    WAFClient::wafClient
 */

/**
 * @brief  Constructs a new WafClientResponse object.
 *
 * @param  parent   This object's parent.
 */
WafClientResponse::WafClientResponse(QObject * const parent)
    : AwsAbstractResponse(new WafClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  WafClientResponsePrivate
 *
 * @brief  Private implementation for WafClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WafClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public WafClientResponse instance.
 */
WafClientResponsePrivate::WafClientResponsePrivate(
    WafClientQueueResponse * const q) : WafClientPrivate(q)
{

}

} // namespace WAF
} // namespace AWS
