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

#include "appstreamresponse.h"
#include "appstreamresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/**
 * @class  AppStreamResponse
 *
 * @brief  Handles AppStream AppStream responses.
 *
 * @see    AppStreamClient::appStream
 */

/**
 * @brief  Constructs a new AppStreamResponse object.
 *
 * @param  parent   This object's parent.
 */
AppStreamResponse::AppStreamResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AppStreamResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  AppStreamResponsePrivate
 *
 * @brief  Private implementation for AppStreamResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AppStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AppStreamResponse instance.
 */
AppStreamResponsePrivate::AppStreamResponsePrivate(
    AppStreamQueueResponse * const q) : AppStreamPrivate(q)
{

}

} // namespace AppStream
} // namespace QtAws
