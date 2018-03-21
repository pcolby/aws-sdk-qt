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

#include "cloudtrailclientresponse.h"
#include "cloudtrailclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  CloudTrailClientResponse
 *
 * @brief  Handles  CloudTrailClient responses.
 *
 * @see    Client::cloudTrailClient
 */

/**
 * @brief  Constructs a new CloudTrailClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudTrailClientResponse::CloudTrailClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CloudTrailClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudTrailClientResponsePrivate
 *
 * @brief  Private implementation for CloudTrailClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudTrailClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudTrailClientResponse instance.
 */
CloudTrailClientResponsePrivate::CloudTrailClientResponsePrivate(
    CloudTrailClientQueueResponse * const q) : CloudTrailClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
