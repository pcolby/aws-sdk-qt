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

#include "listsubscriptiondefinitionsresponse.h"
#include "listsubscriptiondefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListSubscriptionDefinitionsResponse
 * \brief The ListSubscriptionDefinitionsResponse class provides an interace for Greengrass ListSubscriptionDefinitions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listSubscriptionDefinitions
 */

/*!
 * Constructs a ListSubscriptionDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSubscriptionDefinitionsResponse::ListSubscriptionDefinitionsResponse(
        const ListSubscriptionDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListSubscriptionDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListSubscriptionDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSubscriptionDefinitionsRequest * ListSubscriptionDefinitionsResponse::request() const
{
    Q_D(const ListSubscriptionDefinitionsResponse);
    return static_cast<const ListSubscriptionDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListSubscriptionDefinitions \a response.
 */
void ListSubscriptionDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSubscriptionDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListSubscriptionDefinitionsResponsePrivate
 * \brief The ListSubscriptionDefinitionsResponsePrivate class provides private implementation for ListSubscriptionDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListSubscriptionDefinitionsResponsePrivate object with public implementation \a q.
 */
ListSubscriptionDefinitionsResponsePrivate::ListSubscriptionDefinitionsResponsePrivate(
    ListSubscriptionDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListSubscriptionDefinitions response element from \a xml.
 */
void ListSubscriptionDefinitionsResponsePrivate::parseListSubscriptionDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscriptionDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
