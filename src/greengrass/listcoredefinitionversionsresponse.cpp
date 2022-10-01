// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoredefinitionversionsresponse.h"
#include "listcoredefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionVersionsResponse
 * \brief The ListCoreDefinitionVersionsResponse class provides an interace for Greengrass ListCoreDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listCoreDefinitionVersions
 */

/*!
 * Constructs a ListCoreDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoreDefinitionVersionsResponse::ListCoreDefinitionVersionsResponse(
        const ListCoreDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListCoreDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListCoreDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoreDefinitionVersionsRequest * ListCoreDefinitionVersionsResponse::request() const
{
    Q_D(const ListCoreDefinitionVersionsResponse);
    return static_cast<const ListCoreDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListCoreDefinitionVersions \a response.
 */
void ListCoreDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoreDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionVersionsResponsePrivate
 * \brief The ListCoreDefinitionVersionsResponsePrivate class provides private implementation for ListCoreDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListCoreDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListCoreDefinitionVersionsResponsePrivate::ListCoreDefinitionVersionsResponsePrivate(
    ListCoreDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListCoreDefinitionVersions response element from \a xml.
 */
void ListCoreDefinitionVersionsResponsePrivate::parseListCoreDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoreDefinitionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
