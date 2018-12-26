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

#include "listdevicedefinitionversionsresponse.h"
#include "listdevicedefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionVersionsResponse
 * \brief The ListDeviceDefinitionVersionsResponse class provides an interace for Greengrass ListDeviceDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listDeviceDefinitionVersions
 */

/*!
 * Constructs a ListDeviceDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceDefinitionVersionsResponse::ListDeviceDefinitionVersionsResponse(
        const ListDeviceDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListDeviceDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListDeviceDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceDefinitionVersionsRequest * ListDeviceDefinitionVersionsResponse::request() const
{
    Q_D(const ListDeviceDefinitionVersionsResponse);
    return static_cast<const ListDeviceDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListDeviceDefinitionVersions \a response.
 */
void ListDeviceDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionVersionsResponsePrivate
 * \brief The ListDeviceDefinitionVersionsResponsePrivate class provides private implementation for ListDeviceDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeviceDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListDeviceDefinitionVersionsResponsePrivate::ListDeviceDefinitionVersionsResponsePrivate(
    ListDeviceDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListDeviceDefinitionVersions response element from \a xml.
 */
void ListDeviceDefinitionVersionsResponsePrivate::parseListDeviceDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceDefinitionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
