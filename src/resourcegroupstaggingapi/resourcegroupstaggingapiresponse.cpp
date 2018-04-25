/*
    Copyright 2013-2018 Paul Colby

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

#include "resourcegroupstaggingapiresponse.h"
#include "resourcegroupstaggingapiresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIResponse
 * \brief The ResourceGroupsTaggingAPIResponse class provides an interface for ResourceGroupsTaggingAPI responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a ResourceGroupsTaggingAPIResponse object with parent \a parent.
 */
ResourceGroupsTaggingAPIResponse::ResourceGroupsTaggingAPIResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ResourceGroupsTaggingAPIResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ResourceGroupsTaggingAPIResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsTaggingAPIResponsePrivate.
 */
ResourceGroupsTaggingAPIResponse::ResourceGroupsTaggingAPIResponse(ResourceGroupsTaggingAPIResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ResourceGroupsTaggingAPIResponse::parseFailure(QIODevice &response)
{
    Q_D(ResourceGroupsTaggingAPIResponse);
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
 * \class QtAws::ResourceGroupsTaggingAPI::ResourceGroupsTaggingAPIResponsePrivate
 * \brief The ResourceGroupsTaggingAPIResponsePrivate class provides private implementation for ResourceGroupsTaggingAPIResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a ResourceGroupsTaggingAPIResponsePrivate object with public implementation \a q.
 */
ResourceGroupsTaggingAPIResponsePrivate::ResourceGroupsTaggingAPIResponsePrivate(
    ResourceGroupsTaggingAPIResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
