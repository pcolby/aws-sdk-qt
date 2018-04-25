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

#include "listfunctiondefinitionversionsresponse.h"
#include "listfunctiondefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionVersionsResponse
 * \brief The ListFunctionDefinitionVersionsResponse class provides an interace for Greengrass ListFunctionDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listFunctionDefinitionVersions
 */

/*!
 * Constructs a ListFunctionDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFunctionDefinitionVersionsResponse::ListFunctionDefinitionVersionsResponse(
        const ListFunctionDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListFunctionDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFunctionDefinitionVersionsRequest * ListFunctionDefinitionVersionsResponse::request() const
{
    Q_D(const ListFunctionDefinitionVersionsResponse);
    return static_cast<const ListFunctionDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListFunctionDefinitionVersions \a response.
 */
void ListFunctionDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListFunctionDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListFunctionDefinitionVersionsResponsePrivate
 * \brief The ListFunctionDefinitionVersionsResponsePrivate class provides private implementation for ListFunctionDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListFunctionDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListFunctionDefinitionVersionsResponsePrivate::ListFunctionDefinitionVersionsResponsePrivate(
    ListFunctionDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListFunctionDefinitionVersions response element from \a xml.
 */
void ListFunctionDefinitionVersionsResponsePrivate::parseListFunctionDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionDefinitionVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
