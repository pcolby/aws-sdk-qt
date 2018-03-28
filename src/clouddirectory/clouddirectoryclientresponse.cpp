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

#include "clouddirectoryclientresponse.h"
#include "clouddirectoryclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CloudDirectoryClientResponse
 *
 * @brief  Handles CloudDirectory CloudDirectoryClient responses.
 *
 * @see    CloudDirectoryClient::cloudDirectoryClient
 */

/**
 * @brief  Constructs a new CloudDirectoryClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudDirectoryClientResponse::CloudDirectoryClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CloudDirectoryClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudDirectoryClientResponsePrivate
 *
 * @brief  Private implementation for CloudDirectoryClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudDirectoryClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudDirectoryClientResponse instance.
 */
CloudDirectoryClientResponsePrivate::CloudDirectoryClientResponsePrivate(
    CloudDirectoryClientQueueResponse * const q) : CloudDirectoryClientPrivate(q)
{

}

} // namespace CloudDirectory
} // namespace AWS
