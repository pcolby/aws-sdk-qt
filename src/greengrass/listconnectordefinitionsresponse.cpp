// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
