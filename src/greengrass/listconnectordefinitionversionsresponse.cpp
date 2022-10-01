// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconnectordefinitionversionsresponse.h"
#include "listconnectordefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionVersionsResponse
 * \brief The ListConnectorDefinitionVersionsResponse class provides an interace for Greengrass ListConnectorDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listConnectorDefinitionVersions
 */

/*!
 * Constructs a ListConnectorDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConnectorDefinitionVersionsResponse::ListConnectorDefinitionVersionsResponse(
        const ListConnectorDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListConnectorDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListConnectorDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConnectorDefinitionVersionsRequest * ListConnectorDefinitionVersionsResponse::request() const
{
    Q_D(const ListConnectorDefinitionVersionsResponse);
    return static_cast<const ListConnectorDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListConnectorDefinitionVersions \a response.
 */
void ListConnectorDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConnectorDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListConnectorDefinitionVersionsResponsePrivate
 * \brief The ListConnectorDefinitionVersionsResponsePrivate class provides private implementation for ListConnectorDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListConnectorDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListConnectorDefinitionVersionsResponsePrivate::ListConnectorDefinitionVersionsResponsePrivate(
    ListConnectorDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListConnectorDefinitionVersions response element from \a xml.
 */
void ListConnectorDefinitionVersionsResponsePrivate::parseListConnectorDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConnectorDefinitionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
