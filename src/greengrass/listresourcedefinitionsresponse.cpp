// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcedefinitionsresponse.h"
#include "listresourcedefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionsResponse
 * \brief The ListResourceDefinitionsResponse class provides an interace for Greengrass ListResourceDefinitions responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::listResourceDefinitions
 */

/*!
 * Constructs a ListResourceDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceDefinitionsResponse::ListResourceDefinitionsResponse(
        const ListResourceDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListResourceDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListResourceDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceDefinitionsRequest * ListResourceDefinitionsResponse::request() const
{
    Q_D(const ListResourceDefinitionsResponse);
    return static_cast<const ListResourceDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListResourceDefinitions \a response.
 */
void ListResourceDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListResourceDefinitionsResponsePrivate
 * \brief The ListResourceDefinitionsResponsePrivate class provides private implementation for ListResourceDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListResourceDefinitionsResponsePrivate object with public implementation \a q.
 */
ListResourceDefinitionsResponsePrivate::ListResourceDefinitionsResponsePrivate(
    ListResourceDefinitionsResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListResourceDefinitions response element from \a xml.
 */
void ListResourceDefinitionsResponsePrivate::parseListResourceDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
