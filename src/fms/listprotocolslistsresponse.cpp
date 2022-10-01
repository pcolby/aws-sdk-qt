// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprotocolslistsresponse.h"
#include "listprotocolslistsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListProtocolsListsResponse
 * \brief The ListProtocolsListsResponse class provides an interace for Fms ListProtocolsLists responses.
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
 * \sa FmsClient::listProtocolsLists
 */

/*!
 * Constructs a ListProtocolsListsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProtocolsListsResponse::ListProtocolsListsResponse(
        const ListProtocolsListsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new ListProtocolsListsResponsePrivate(this), parent)
{
    setRequest(new ListProtocolsListsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProtocolsListsRequest * ListProtocolsListsResponse::request() const
{
    Q_D(const ListProtocolsListsResponse);
    return static_cast<const ListProtocolsListsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms ListProtocolsLists \a response.
 */
void ListProtocolsListsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProtocolsListsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::ListProtocolsListsResponsePrivate
 * \brief The ListProtocolsListsResponsePrivate class provides private implementation for ListProtocolsListsResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListProtocolsListsResponsePrivate object with public implementation \a q.
 */
ListProtocolsListsResponsePrivate::ListProtocolsListsResponsePrivate(
    ListProtocolsListsResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms ListProtocolsLists response element from \a xml.
 */
void ListProtocolsListsResponsePrivate::parseListProtocolsListsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProtocolsListsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
