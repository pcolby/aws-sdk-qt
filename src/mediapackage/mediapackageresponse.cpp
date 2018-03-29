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

#include "mediapackageresponse.h"
#include "mediapackageresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/**
 * @class  MediaPackageResponse
 *
 * @brief  Handles MediaPackage MediaPackage responses.
 *
 * @see    MediaPackageClient::mediaPackage
 */

/**
 * @brief  Constructs a new MediaPackageResponse object.
 *
 * @param  parent   This object's parent.
 */
MediaPackageResponse::MediaPackageResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MediaPackageResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  MediaPackageResponsePrivate
 *
 * @brief  Private implementation for MediaPackageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaPackageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MediaPackageResponse instance.
 */
MediaPackageResponsePrivate::MediaPackageResponsePrivate(
    MediaPackageQueueResponse * const q) : MediaPackagePrivate(q)
{

}

} // namespace MediaPackage
} // namespace QtAws
