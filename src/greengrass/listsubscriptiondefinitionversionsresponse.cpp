// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsubscriptiondefinitionversionsresponse.h"
#include "listsubscriptiondefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListSubscriptionDefinitionVersionsResponse
 * \brief The ListSubscriptionDefinitionVersionsResponse class provides an interace for Greengrass ListSubscriptionDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listSubscriptionDefinitionVersions
 */

/*!
 * Constructs a ListSubscriptionDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSubscriptionDefinitionVersionsResponse::ListSubscriptionDefinitionVersionsResponse(
        const ListSubscriptionDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListSubscriptionDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListSubscriptionDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSubscriptionDefinitionVersionsRequest * ListSubscriptionDefinitionVersionsResponse::request() const
{
    Q_D(const ListSubscriptionDefinitionVersionsResponse);
    return static_cast<const ListSubscriptionDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListSubscriptionDefinitionVersions \a response.
 */
void ListSubscriptionDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSubscriptionDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListSubscriptionDefinitionVersionsResponsePrivate
 * \brief The ListSubscriptionDefinitionVersionsResponsePrivate class provides private implementation for ListSubscriptionDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListSubscriptionDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListSubscriptionDefinitionVersionsResponsePrivate::ListSubscriptionDefinitionVersionsResponsePrivate(
    ListSubscriptionDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListSubscriptionDefinitionVersions response element from \a xml.
 */
void ListSubscriptionDefinitionVersionsResponsePrivate::parseListSubscriptionDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSubscriptionDefinitionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
