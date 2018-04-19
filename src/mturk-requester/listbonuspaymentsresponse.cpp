/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listbonuspaymentsresponse.h"
#include "listbonuspaymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListBonusPaymentsResponse
 * \brief The ListBonusPaymentsResponse class provides an interace for MTurk ListBonusPayments responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listBonusPayments
 */

/*!
 * Constructs a ListBonusPaymentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBonusPaymentsResponse::ListBonusPaymentsResponse(
        const ListBonusPaymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListBonusPaymentsResponsePrivate(this), parent)
{
    setRequest(new ListBonusPaymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBonusPaymentsRequest * ListBonusPaymentsResponse::request() const
{
    Q_D(const ListBonusPaymentsResponse);
    return static_cast<const ListBonusPaymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListBonusPayments \a response.
 */
void ListBonusPaymentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBonusPaymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListBonusPaymentsResponsePrivate
 * \brief The ListBonusPaymentsResponsePrivate class provides private implementation for ListBonusPaymentsResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListBonusPaymentsResponsePrivate object with public implementation \a q.
 */
ListBonusPaymentsResponsePrivate::ListBonusPaymentsResponsePrivate(
    ListBonusPaymentsResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListBonusPayments response element from \a xml.
 */
void ListBonusPaymentsResponsePrivate::parseListBonusPaymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBonusPaymentsResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace QtAws
