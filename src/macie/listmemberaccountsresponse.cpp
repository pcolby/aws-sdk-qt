/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>Amazon Macie</fullname>
 * 
 *  Amazon Macie is a security service that uses machine learning to automatically discover, classify, and protect sensitive
 *  data in AWS. Macie recognizes sensitive data such as personally identifiable information (PII) or intellectual property,
 *  and provides you with dashboards and alerts that give visibility into how this data is being accessed or moved. For more
 *  information, see the <a href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Macie User
 *  Guide</a>.
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
    /// @todo
}

} // namespace Macie
} // namespace QtAws
