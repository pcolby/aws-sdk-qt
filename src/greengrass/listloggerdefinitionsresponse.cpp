// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ListLoggerDefinitionsResponse);
    return static_cast<const ListLoggerDefinitionsRequest *>(d->request);
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
