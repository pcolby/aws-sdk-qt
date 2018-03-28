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

#include "cloudfrontclientresponse.h"
#include "cloudfrontclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  CloudFrontClientResponse
 *
 * @brief  Handles CloudFront CloudFrontClient responses.
 *
 * @see    CloudFrontClient::cloudFrontClient
 */

/**
 * @brief  Constructs a new CloudFrontClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudFrontClientResponse::CloudFrontClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CloudFrontClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudFrontClientResponsePrivate
 *
 * @brief  Private implementation for CloudFrontClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudFrontClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudFrontClientResponse instance.
 */
CloudFrontClientResponsePrivate::CloudFrontClientResponsePrivate(
    CloudFrontClientQueueResponse * const q) : CloudFrontClientPrivate(q)
{

}

} // namespace CloudFront
} // namespace AWS
