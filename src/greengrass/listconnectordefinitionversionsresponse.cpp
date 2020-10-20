/*
    Copyright 2013-2020 Paul Colby

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

#include "listconnectordefinitionversionsresponse.h"
#include "listconnectordefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionVersionsResponse
 * \brief The ListConnectorDefinitionVersionsResponse class provides an interace for Greengrass ListConnectorDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listConnectorDefinitionVersions
 */

/*!
 * Constructs a ListConnectorDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConnectorDefinitionVersionsResponse::ListConnectorDefinitionVersionsResponse(
        const ListConnectorDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListConnectorDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListConnectorDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConnectorDefinitionVersionsRequest * ListConnectorDefinitionVersionsResponse::request() const
{
    Q_D(const ListConnectorDefinitionVersionsResponse);
    return static_cast<const ListConnectorDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListConnectorDefinitionVersions \a response.
 */
void ListConnectorDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConnectorDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionVersionsResponsePrivate
 * \brief The ListConnectorDefinitionVersionsResponsePrivate class provides private implementation for ListConnectorDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListConnectorDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListConnectorDefinitionVersionsResponsePrivate::ListConnectorDefinitionVersionsResponsePrivate(
    ListConnectorDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListConnectorDefinitionVersions response element from \a xml.
 */
void ListConnectorDefinitionVersionsResponsePrivate::parseListConnectorDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConnectorDefinitionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
