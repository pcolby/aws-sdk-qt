// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdiscoverersresponse.h"
#include "listdiscoverersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListDiscoverersResponse
 * \brief The ListDiscoverersResponse class provides an interace for Schemas ListDiscoverers responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listDiscoverers
 */

/*!
 * Constructs a ListDiscoverersResponse object for \a reply to \a request, with parent \a parent.
 */
ListDiscoverersResponse::ListDiscoverersResponse(
        const ListDiscoverersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new ListDiscoverersResponsePrivate(this), parent)
{
    setRequest(new ListDiscoverersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDiscoverersRequest * ListDiscoverersResponse::request() const
{
    Q_D(const ListDiscoverersResponse);
    return static_cast<const ListDiscoverersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas ListDiscoverers \a response.
 */
void ListDiscoverersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDiscoverersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::ListDiscoverersResponsePrivate
 * \brief The ListDiscoverersResponsePrivate class provides private implementation for ListDiscoverersResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListDiscoverersResponsePrivate object with public implementation \a q.
 */
ListDiscoverersResponsePrivate::ListDiscoverersResponsePrivate(
    ListDiscoverersResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas ListDiscoverers response element from \a xml.
 */
void ListDiscoverersResponsePrivate::parseListDiscoverersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDiscoverersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
