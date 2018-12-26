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

#include "listcoredefinitionversionsresponse.h"
#include "listcoredefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionVersionsResponse
 * \brief The ListCoreDefinitionVersionsResponse class provides an interace for Greengrass ListCoreDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listCoreDefinitionVersions
 */

/*!
 * Constructs a ListCoreDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoreDefinitionVersionsResponse::ListCoreDefinitionVersionsResponse(
        const ListCoreDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListCoreDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListCoreDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoreDefinitionVersionsRequest * ListCoreDefinitionVersionsResponse::request() const
{
    Q_D(const ListCoreDefinitionVersionsResponse);
    return static_cast<const ListCoreDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListCoreDefinitionVersions \a response.
 */
void ListCoreDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoreDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionVersionsResponsePrivate
 * \brief The ListCoreDefinitionVersionsResponsePrivate class provides private implementation for ListCoreDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListCoreDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListCoreDefinitionVersionsResponsePrivate::ListCoreDefinitionVersionsResponsePrivate(
    ListCoreDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListCoreDefinitionVersions response element from \a xml.
 */
void ListCoreDefinitionVersionsResponsePrivate::parseListCoreDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoreDefinitionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
