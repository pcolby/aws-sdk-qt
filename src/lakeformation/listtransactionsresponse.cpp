/*
    Copyright 2013-2021 Paul Colby

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

#include "listtransactionsresponse.h"
#include "listtransactionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::ListTransactionsResponse
 * \brief The ListTransactionsResponse class provides an interace for LakeFormation ListTransactions responses.
 *
 * \inmodule QtAwsLakeFormation
 *
 *  <fullname>Lake Formation</fullname>
 * 
 *  Defines the public endpoint for the Lake Formation
 *
 * \sa LakeFormationClient::listTransactions
 */

/*!
 * Constructs a ListTransactionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTransactionsResponse::ListTransactionsResponse(
        const ListTransactionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LakeFormationResponse(new ListTransactionsResponsePrivate(this), parent)
{
    setRequest(new ListTransactionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTransactionsRequest * ListTransactionsResponse::request() const
{
    Q_D(const ListTransactionsResponse);
    return static_cast<const ListTransactionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LakeFormation ListTransactions \a response.
 */
void ListTransactionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTransactionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LakeFormation::ListTransactionsResponsePrivate
 * \brief The ListTransactionsResponsePrivate class provides private implementation for ListTransactionsResponse.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a ListTransactionsResponsePrivate object with public implementation \a q.
 */
ListTransactionsResponsePrivate::ListTransactionsResponsePrivate(
    ListTransactionsResponse * const q) : LakeFormationResponsePrivate(q)
{

}

/*!
 * Parses a LakeFormation ListTransactions response element from \a xml.
 */
void ListTransactionsResponsePrivate::parseListTransactionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTransactionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LakeFormation
} // namespace QtAws
