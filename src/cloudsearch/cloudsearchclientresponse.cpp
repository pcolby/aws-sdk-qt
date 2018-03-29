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

#include "cloudsearchclientresponse.h"
#include "cloudsearchclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  CloudSearchClientResponse
 *
 * @brief  Handles CloudSearch CloudSearchClient responses.
 *
 * @see    CloudSearchClient::cloudSearchClient
 */

/**
 * @brief  Constructs a new CloudSearchClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudSearchClientResponse::CloudSearchClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CloudSearchClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudSearchClientResponsePrivate
 *
 * @brief  Private implementation for CloudSearchClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudSearchClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudSearchClientResponse instance.
 */
CloudSearchClientResponsePrivate::CloudSearchClientResponsePrivate(
    CloudSearchClientQueueResponse * const q) : CloudSearchClientPrivate(q)
{

}

} // namespace CloudSearch
} // namespace QtAws
