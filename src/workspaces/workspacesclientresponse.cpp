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

#include "workspacesclientresponse.h"
#include "workspacesclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkSpaces {

/**
 * @class  WorkSpacesClientResponse
 *
 * @brief  Handles WorkSpaces WorkSpacesClient responses.
 *
 * @see    WorkSpacesClient::workSpacesClient
 */

/**
 * @brief  Constructs a new WorkSpacesClientResponse object.
 *
 * @param  parent   This object's parent.
 */
WorkSpacesClientResponse::WorkSpacesClientResponse(QObject * const parent)
    : AwsAbstractResponse(new WorkSpacesClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  WorkSpacesClientResponsePrivate
 *
 * @brief  Private implementation for WorkSpacesClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WorkSpacesClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public WorkSpacesClientResponse instance.
 */
WorkSpacesClientResponsePrivate::WorkSpacesClientResponsePrivate(
    WorkSpacesClientQueueResponse * const q) : WorkSpacesClientPrivate(q)
{

}

} // namespace WorkSpaces
} // namespace AWS
