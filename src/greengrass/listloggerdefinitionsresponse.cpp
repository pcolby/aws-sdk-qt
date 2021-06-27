/*
    Copyright 2013-2021 Paul Colby

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

#include "listloggerdefinitionsresponse.h"
#include "listloggerdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionsResponse
 * \brief The ListLoggerDefinitionsResponse class provides an interace for Greengrass ListLoggerDefinitions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listLoggerDefinitions
 */

/*!
 * Constructs a ListLoggerDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLoggerDefinitionsResponse::ListLoggerDefinitionsResponse(
        const ListLoggerDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListLoggerDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListLoggerDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLoggerDefinitionsRequest * ListLoggerDefinitionsResponse::request() const
{
    return static_cast<const ListLoggerDefinitionsRequest *>(GreengrassResponse::request());
}

/*!
 * \reimp
 * Parses a successful Greengrass ListLoggerDefinitions \a response.
 */
void ListLoggerDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLoggerDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionsResponsePrivate
 * \brief The ListLoggerDefinitionsResponsePrivate class provides private implementation for ListLoggerDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListLoggerDefinitionsResponsePrivate object with public implementation \a q.
 */
ListLoggerDefinitionsResponsePrivate::ListLoggerDefinitionsResponsePrivate(
    ListLoggerDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListLoggerDefinitions response element from \a xml.
 */
void ListLoggerDefinitionsResponsePrivate::parseListLoggerDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLoggerDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
