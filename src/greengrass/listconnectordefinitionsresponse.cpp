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

#include "listconnectordefinitionsresponse.h"
#include "listconnectordefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionsResponse
 * \brief The ListConnectorDefinitionsResponse class provides an interace for Greengrass ListConnectorDefinitions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listConnectorDefinitions
 */

/*!
 * Constructs a ListConnectorDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConnectorDefinitionsResponse::ListConnectorDefinitionsResponse(
        const ListConnectorDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListConnectorDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListConnectorDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConnectorDefinitionsRequest * ListConnectorDefinitionsResponse::request() const
{
    Q_D(const ListConnectorDefinitionsResponse);
    return static_cast<const ListConnectorDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListConnectorDefinitions \a response.
 */
void ListConnectorDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConnectorDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionsResponsePrivate
 * \brief The ListConnectorDefinitionsResponsePrivate class provides private implementation for ListConnectorDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListConnectorDefinitionsResponsePrivate object with public implementation \a q.
 */
ListConnectorDefinitionsResponsePrivate::ListConnectorDefinitionsResponsePrivate(
    ListConnectorDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListConnectorDefinitions response element from \a xml.
 */
void ListConnectorDefinitionsResponsePrivate::parseListConnectorDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConnectorDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
