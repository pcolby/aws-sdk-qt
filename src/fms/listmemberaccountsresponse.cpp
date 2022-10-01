// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmemberaccountsresponse.h"
#include "listmemberaccountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::ListMemberAccountsResponse
 * \brief The ListMemberAccountsResponse class provides an interace for Fms ListMemberAccounts responses.
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
 * \sa FmsClient::listMemberAccounts
 */

/*!
 * Constructs a ListMemberAccountsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMemberAccountsResponse::ListMemberAccountsResponse(
        const ListMemberAccountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new ListMemberAccountsResponsePrivate(this), parent)
{
    setRequest(new ListMemberAccountsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMemberAccountsRequest * ListMemberAccountsResponse::request() const
{
    Q_D(const ListMemberAccountsResponse);
    return static_cast<const ListMemberAccountsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fms ListMemberAccounts \a response.
 */
void ListMemberAccountsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMemberAccountsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::ListMemberAccountsResponsePrivate
 * \brief The ListMemberAccountsResponsePrivate class provides private implementation for ListMemberAccountsResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a ListMemberAccountsResponsePrivate object with public implementation \a q.
 */
ListMemberAccountsResponsePrivate::ListMemberAccountsResponsePrivate(
    ListMemberAccountsResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms ListMemberAccounts response element from \a xml.
 */
void ListMemberAccountsResponsePrivate::parseListMemberAccountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMemberAccountsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
