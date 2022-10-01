// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcedefinitionversionsresponse.h"
#include "listresourcedefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionVersionsResponse
 * \brief The ListResourceDefinitionVersionsResponse class provides an interace for Greengrass ListResourceDefinitionVersions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listResourceDefinitionVersions
 */

/*!
 * Constructs a ListResourceDefinitionVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceDefinitionVersionsResponse::ListResourceDefinitionVersionsResponse(
        const ListResourceDefinitionVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListResourceDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListResourceDefinitionVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceDefinitionVersionsRequest * ListResourceDefinitionVersionsResponse::request() const
{
    Q_D(const ListResourceDefinitionVersionsResponse);
    return static_cast<const ListResourceDefinitionVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListResourceDefinitionVersions \a response.
 */
void ListResourceDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceDefinitionVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionVersionsResponsePrivate
 * \brief The ListResourceDefinitionVersionsResponsePrivate class provides private implementation for ListResourceDefinitionVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListResourceDefinitionVersionsResponsePrivate object with public implementation \a q.
 */
ListResourceDefinitionVersionsResponsePrivate::ListResourceDefinitionVersionsResponsePrivate(
    ListResourceDefinitionVersionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListResourceDefinitionVersions response element from \a xml.
 */
void ListResourceDefinitionVersionsResponsePrivate::parseListResourceDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceDefinitionVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
