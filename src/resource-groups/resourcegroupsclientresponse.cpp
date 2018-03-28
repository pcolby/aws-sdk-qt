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

#include "resourcegroupsclientresponse.h"
#include "resourcegroupsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace ResourceGroups {

/**
 * @class  ResourceGroupsClientResponse
 *
 * @brief  Handles ResourceGroups ResourceGroupsClient responses.
 *
 * @see    ResourceGroupsClient::resourceGroupsClient
 */

/**
 * @brief  Constructs a new ResourceGroupsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
ResourceGroupsClientResponse::ResourceGroupsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new ResourceGroupsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ResourceGroupsClientResponsePrivate
 *
 * @brief  Private implementation for ResourceGroupsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResourceGroupsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResourceGroupsClientResponse instance.
 */
ResourceGroupsClientResponsePrivate::ResourceGroupsClientResponsePrivate(
    ResourceGroupsClientQueueResponse * const q) : ResourceGroupsClientPrivate(q)
{

}

} // namespace ResourceGroups
} // namespace AWS
