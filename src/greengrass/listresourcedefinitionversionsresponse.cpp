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

#include "listresourcedefinitionversionsresponse.h"
#include "listresourcedefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionVersionsResponse
 * \brief The ListResourceDefinitionVersionsResponse class provides an interace for Greengrass ListResourceDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listResourceDefinitionVersions
 */

/*!
 * Constructs a ListResourceDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceDefinitionVersionsResponse::ListResourceDefinitionVersionsResponse(
        const ListResourceDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListResourceDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListResourceDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceDefinitionVersionsRequest * ListResourceDefinitionVersionsResponse::request() const
{
    Q_D(const ListResourceDefinitionVersionsResponse);
    return static_cast<const ListResourceDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListResourceDefinitionVersions \a response.
 */
void ListResourceDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListResourceDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionVersionsResponsePrivate
 * \brief The ListResourceDefinitionVersionsResponsePrivate class provides private implementation for ListResourceDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListResourceDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListResourceDefinitionVersionsResponsePrivate::ListResourceDefinitionVersionsResponsePrivate(
    ListResourceDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListResourceDefinitionVersions response element from \a xml.
 */
void ListResourceDefinitionVersionsResponsePrivate::parseListResourceDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceDefinitionVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
