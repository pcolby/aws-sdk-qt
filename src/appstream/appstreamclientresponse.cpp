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

#include "appstreamclientresponse.h"
#include "appstreamclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  AppStreamClientResponse
 *
 * @brief  Handles  AppStreamClient responses.
 *
 * @see    Client::appStreamClient
 */

/**
 * @brief  Constructs a new AppStreamClientResponse object.
 *
 * @param  parent   This object's parent.
 */
AppStreamClientResponse::AppStreamClientResponse(QObject * const parent)
    : AwsAbstractResponse(new AppStreamClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  AppStreamClientResponsePrivate
 *
 * @brief  Private implementation for AppStreamClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AppStreamClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AppStreamClientResponse instance.
 */
AppStreamClientResponsePrivate::AppStreamClientResponsePrivate(
    AppStreamClientQueueResponse * const q) : AppStreamClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
