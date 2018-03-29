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

#include "cloudfrontclientresponse.h"
#include "cloudfrontclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
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
    : QtAws::Core::AwsAbstractResponse(new CloudFrontClientResponsePrivate(this), parent)
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
} // namespace QtAws
