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

#include "s3clientresponse.h"
#include "s3clientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  S3ClientResponse
 *
 * @brief  Handles  S3Client responses.
 *
 * @see    Client::s3Client
 */

/**
 * @brief  Constructs a new S3ClientResponse object.
 *
 * @param  parent   This object's parent.
 */
S3ClientResponse::S3ClientResponse(QObject * const parent)
    : AwsAbstractResponse(new S3ClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  S3ClientResponsePrivate
 *
 * @brief  Private implementation for S3ClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new S3ClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public S3ClientResponse instance.
 */
S3ClientResponsePrivate::S3ClientResponsePrivate(
    S3ClientQueueResponse * const q) : S3ClientPrivate(q)
{

}

} // namespace S3
} // namespace AWS
