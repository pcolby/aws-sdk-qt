/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listloggerdefinitionversionsresponse.h"
#include "listloggerdefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionVersionsResponse
 * \brief The ListLoggerDefinitionVersionsResponse class provides an interace for Greengrass ListLoggerDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listLoggerDefinitionVersions
 */

/*!
 * Constructs a ListLoggerDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLoggerDefinitionVersionsResponse::ListLoggerDefinitionVersionsResponse(
        const ListLoggerDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListLoggerDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListLoggerDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLoggerDefinitionVersionsRequest * ListLoggerDefinitionVersionsResponse::request() const
{
    Q_D(const ListLoggerDefinitionVersionsResponse);
    return static_cast<const ListLoggerDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListLoggerDefinitionVersions \a response.
 */
void ListLoggerDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListLoggerDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionVersionsResponsePrivate
 * \brief The ListLoggerDefinitionVersionsResponsePrivate class provides private implementation for ListLoggerDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListLoggerDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListLoggerDefinitionVersionsResponsePrivate::ListLoggerDefinitionVersionsResponsePrivate(
    ListLoggerDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListLoggerDefinitionVersions response element from \a xml.
 */
void ListLoggerDefinitionVersionsResponsePrivate::parseListLoggerDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLoggerDefinitionVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
