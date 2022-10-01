// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(ListBonusPaymentsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
