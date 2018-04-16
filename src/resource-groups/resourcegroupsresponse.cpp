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

/*!
 * \class QtAws::ResourceGroups::ResourceGroupsResponse
 *
 * \brief The ResourceGroupsResponse class is the base class for all ResourceGroups responses.
 *
 * \ingroup ResourceGroups
 */

/*!
 * @brief  Constructs a new ResourceGroupsResponse object.
 *
 * @param  parent   This object's parent.
 */
ResourceGroupsResponse::ResourceGroupsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ResourceGroupsResponsePrivate(this), parent)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ResourceGroupsResponse object.
 *
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsResponsePrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 * @param  parent  This object's parent.
 */
ResourceGroupsResponse::ResourceGroupsResponse(ResourceGroupsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void ResourceGroupsResponse::parseFailure(QIODevice &response)
{
    Q_D(ResourceGroupsResponse);
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

/*!
 * @internal
 *
 * @class  ResourceGroupsResponsePrivate
 *
 * @brief  Private implementation for ResourceGroupsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ResourceGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResourceGroupsResponse instance.
 */
ResourceGroupsResponsePrivate::ResourceGroupsResponsePrivate(
    ResourceGroupsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
