/*
    Copyright 2013-2021 Paul Colby

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

#include "resourcegroupstaggingresponse.h"
#include "resourcegroupstaggingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTagging {

/*!
 * \class QtAws::ResourceGroupsTagging::ResourceGroupsTaggingResponse
 * \brief The ResourceGroupsTaggingResponse class provides an interface for ResourceGroupsTagging responses.
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a ResourceGroupsTaggingResponse object with parent \a parent.
 */
ResourceGroupsTaggingResponse::ResourceGroupsTaggingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ResourceGroupsTaggingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ResourceGroupsTaggingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsTaggingResponsePrivate.
 */
ResourceGroupsTaggingResponse::ResourceGroupsTaggingResponse(ResourceGroupsTaggingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ResourceGroupsTaggingResponse::parseFailure(QIODevice &response)
{
    //Q_D(ResourceGroupsTaggingResponse);
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
 * \class QtAws::ResourceGroupsTagging::ResourceGroupsTaggingResponsePrivate
 * \brief The ResourceGroupsTaggingResponsePrivate class provides private implementation for ResourceGroupsTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTagging
 */

/*!
 * Constructs a ResourceGroupsTaggingResponsePrivate object with public implementation \a q.
 */
ResourceGroupsTaggingResponsePrivate::ResourceGroupsTaggingResponsePrivate(
    ResourceGroupsTaggingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ResourceGroupsTagging
} // namespace QtAws
