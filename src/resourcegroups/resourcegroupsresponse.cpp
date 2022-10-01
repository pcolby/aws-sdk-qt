// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
