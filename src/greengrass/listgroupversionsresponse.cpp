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

#include "listgroupversionsresponse.h"
#include "listgroupversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListGroupVersionsResponse
 * \brief The ListGroupVersionsResponse class provides an interace for Greengrass ListGroupVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listGroupVersions
 */

/*!
 * Constructs a ListGroupVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupVersionsResponse::ListGroupVersionsResponse(
        const ListGroupVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListGroupVersionsResponsePrivate(this), parent)
{
    setRequest(new ListGroupVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupVersionsRequest * ListGroupVersionsResponse::request() const
{
    Q_D(const ListGroupVersionsResponse);
    return static_cast<const ListGroupVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListGroupVersions \a response.
 */
void ListGroupVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListGroupVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListGroupVersionsResponsePrivate
 * \brief The ListGroupVersionsResponsePrivate class provides private implementation for ListGroupVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListGroupVersionsResponsePrivate object with public implementation \a q.
 */
ListGroupVersionsResponsePrivate::ListGroupVersionsResponsePrivate(
    ListGroupVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListGroupVersions response element from \a xml.
 */
void ListGroupVersionsResponsePrivate::parseListGroupVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupVersionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
