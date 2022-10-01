// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoredefinitionsresponse.h"
#include "listcoredefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionsResponse
 * \brief The ListCoreDefinitionsResponse class provides an interace for Greengrass ListCoreDefinitions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listCoreDefinitions
 */

/*!
 * Constructs a ListCoreDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoreDefinitionsResponse::ListCoreDefinitionsResponse(
        const ListCoreDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListCoreDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListCoreDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoreDefinitionsRequest * ListCoreDefinitionsResponse::request() const
{
    Q_D(const ListCoreDefinitionsResponse);
    return static_cast<const ListCoreDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListCoreDefinitions \a response.
 */
void ListCoreDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoreDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListCoreDefinitionsResponsePrivate
 * \brief The ListCoreDefinitionsResponsePrivate class provides private implementation for ListCoreDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListCoreDefinitionsResponsePrivate object with public implementation \a q.
 */
ListCoreDefinitionsResponsePrivate::ListCoreDefinitionsResponsePrivate(
    ListCoreDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListCoreDefinitions response element from \a xml.
 */
void ListCoreDefinitionsResponsePrivate::parseListCoreDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoreDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
