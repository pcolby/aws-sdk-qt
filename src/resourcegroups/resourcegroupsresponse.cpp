/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "resourcegroupsresponse.h"
#include "resourcegroupsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroups {

/*!
 * \class QtAws::ResourceGroups::ResourceGroupsResponse
 * \brief The ResourceGroupsResponse class provides an interface for ResourceGroups responses.
 *
 * \inmodule QtAwsResourceGroups
 */

/*!
 * Constructs a ResourceGroupsResponse object with parent \a parent.
 */
ResourceGroupsResponse::ResourceGroupsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ResourceGroupsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ResourceGroupsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsResponsePrivate.
 */
ResourceGroupsResponse::ResourceGroupsResponse(ResourceGroupsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ResourceGroupsResponse::parseFailure(QIODevice &response)
{
    //Q_D(ResourceGroupsResponse);
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
 * \class QtAws::ResourceGroups::ResourceGroupsResponsePrivate
 * \brief The ResourceGroupsResponsePrivate class provides private implementation for ResourceGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroups
 */

/*!
 * Constructs a ResourceGroupsResponsePrivate object with public implementation \a q.
 */
ResourceGroupsResponsePrivate::ResourceGroupsResponsePrivate(
    ResourceGroupsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
