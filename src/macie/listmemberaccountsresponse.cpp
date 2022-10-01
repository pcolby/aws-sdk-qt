// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmemberaccountsresponse.h"
#include "listmemberaccountsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::ListMemberAccountsResponse
 * \brief The ListMemberAccountsResponse class provides an interace for Macie ListMemberAccounts responses.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
 *
 * \sa MacieClient::listMemberAccounts
 */

/*!
 * Constructs a ListMemberAccountsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMemberAccountsResponse::ListMemberAccountsResponse(
        const ListMemberAccountsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MacieResponse(new ListMemberAccountsResponsePrivate(this), parent)
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
 * Parses a successful Macie ListMemberAccounts \a response.
 */
void ListMemberAccountsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMemberAccountsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie::ListMemberAccountsResponsePrivate
 * \brief The ListMemberAccountsResponsePrivate class provides private implementation for ListMemberAccountsResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a ListMemberAccountsResponsePrivate object with public implementation \a q.
 */
ListMemberAccountsResponsePrivate::ListMemberAccountsResponsePrivate(
    ListMemberAccountsResponse * const q) : MacieResponsePrivate(q)
{

}

/*!
 * Parses a Macie ListMemberAccounts response element from \a xml.
 */
void ListMemberAccountsResponsePrivate::parseListMemberAccountsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMemberAccountsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie
} // namespace QtAws
