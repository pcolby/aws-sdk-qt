/*
    Copyright 2013-2019 Paul Colby

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

#include "listdevicedefinitionsresponse.h"
#include "listdevicedefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionsResponse
 * \brief The ListDeviceDefinitionsResponse class provides an interace for Greengrass ListDeviceDefinitions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listDeviceDefinitions
 */

/*!
 * Constructs a ListDeviceDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDeviceDefinitionsResponse::ListDeviceDefinitionsResponse(
        const ListDeviceDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListDeviceDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListDeviceDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDeviceDefinitionsRequest * ListDeviceDefinitionsResponse::request() const
{
    Q_D(const ListDeviceDefinitionsResponse);
    return static_cast<const ListDeviceDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListDeviceDefinitions \a response.
 */
void ListDeviceDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDeviceDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListDeviceDefinitionsResponsePrivate
 * \brief The ListDeviceDefinitionsResponsePrivate class provides private implementation for ListDeviceDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListDeviceDefinitionsResponsePrivate object with public implementation \a q.
 */
ListDeviceDefinitionsResponsePrivate::ListDeviceDefinitionsResponsePrivate(
    ListDeviceDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListDeviceDefinitions response element from \a xml.
 */
void ListDeviceDefinitionsResponsePrivate::parseListDeviceDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDeviceDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
