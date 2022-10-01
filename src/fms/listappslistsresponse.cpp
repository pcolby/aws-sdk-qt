// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappslistsresponse.h"
#include "listappslistsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListAppsListsResponse
 * \brief The ListAppsListsResponse class provides an interace for Fms ListAppsLists responses.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::listAppsLists
 */

/*!
 * Constructs a ListAppsListsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppsListsResponse::ListAppsListsResponse(
        const ListAppsListsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new ListAppsListsResponsePrivate(this), parent)
{
    setRequest(new ListAppsListsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppsListsRequest * ListAppsListsResponse::request() const
{
    Q_D(const ListAppsListsResponse);
    return static_cast<const ListAppsListsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms ListAppsLists \a response.
 */
void ListAppsListsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppsListsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::ListAppsListsResponsePrivate
 * \brief The ListAppsListsResponsePrivate class provides private implementation for ListAppsListsResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListAppsListsResponsePrivate object with public implementation \a q.
 */
ListAppsListsResponsePrivate::ListAppsListsResponsePrivate(
    ListAppsListsResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms ListAppsLists response element from \a xml.
 */
void ListAppsListsResponsePrivate::parseListAppsListsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppsListsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
