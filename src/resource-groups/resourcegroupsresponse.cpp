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

#include "resourcegroupsresponse.h"
#include "resourcegroupsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  ResourceGroupsResponse
 *
 * @brief  Handles ResourceGroups ResourceGroups responses.
 *
 * @see    ResourceGroupsClient::resourceGroups
 */

/**
 * @brief  Constructs a new ResourceGroupsResponse object.
 *
 * @param  parent   This object's parent.
 */
ResourceGroupsResponse::ResourceGroupsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ResourceGroupsResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void ResourceGroupsResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  ResourceGroupsResponsePrivate
 *
 * @brief  Private implementation for ResourceGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResourceGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResourceGroupsResponse instance.
 */
ResourceGroupsResponsePrivate::ResourceGroupsResponsePrivate(
    ResourceGroupsQueueResponse * const q) : ResourceGroupsPrivate(q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
