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

#include "resourcegroupstaggingapiresponse.h"
#include "resourcegroupstaggingapiresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTaggingApi {

/*!
 * \class QtAws::ResourceGroupsTaggingApi::ResourceGroupsTaggingApiResponse
 * \brief The ResourceGroupsTaggingApiResponse class provides an interface for ResourceGroupsTaggingApi responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 */

/*!
 * Constructs a ResourceGroupsTaggingApiResponse object with parent \a parent.
 */
ResourceGroupsTaggingApiResponse::ResourceGroupsTaggingApiResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ResourceGroupsTaggingApiResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ResourceGroupsTaggingApiResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ResourceGroupsTaggingApiResponsePrivate.
 */
ResourceGroupsTaggingApiResponse::ResourceGroupsTaggingApiResponse(ResourceGroupsTaggingApiResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ResourceGroupsTaggingApiResponse::parseFailure(QIODevice &response)
{
    //Q_D(ResourceGroupsTaggingApiResponse);
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
 * \class QtAws::ResourceGroupsTaggingApi::ResourceGroupsTaggingApiResponsePrivate
 * \brief The ResourceGroupsTaggingApiResponsePrivate class provides private implementation for ResourceGroupsTaggingApiResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 */

/*!
 * Constructs a ResourceGroupsTaggingApiResponsePrivate object with public implementation \a q.
 */
ResourceGroupsTaggingApiResponsePrivate::ResourceGroupsTaggingApiResponsePrivate(
    ResourceGroupsTaggingApiResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ResourceGroupsTaggingApi
} // namespace QtAws
