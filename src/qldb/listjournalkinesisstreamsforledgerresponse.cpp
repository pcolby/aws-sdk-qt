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

#include "listjournalkinesisstreamsforledgerresponse.h"
#include "listjournalkinesisstreamsforledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::ListJournalKinesisStreamsForLedgerResponse
 * \brief The ListJournalKinesisStreamsForLedgerResponse class provides an interace for QLDB ListJournalKinesisStreamsForLedger responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listJournalKinesisStreamsForLedger
 */

/*!
 * Constructs a ListJournalKinesisStreamsForLedgerResponse object for \a reply to \a request, with parent \a parent.
 */
ListJournalKinesisStreamsForLedgerResponse::ListJournalKinesisStreamsForLedgerResponse(
        const ListJournalKinesisStreamsForLedgerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new ListJournalKinesisStreamsForLedgerResponsePrivate(this), parent)
{
    setRequest(new ListJournalKinesisStreamsForLedgerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJournalKinesisStreamsForLedgerRequest * ListJournalKinesisStreamsForLedgerResponse::request() const
{
    return static_cast<const ListJournalKinesisStreamsForLedgerRequest *>(QldbResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDB ListJournalKinesisStreamsForLedger \a response.
 */
void ListJournalKinesisStreamsForLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJournalKinesisStreamsForLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::ListJournalKinesisStreamsForLedgerResponsePrivate
 * \brief The ListJournalKinesisStreamsForLedgerResponsePrivate class provides private implementation for ListJournalKinesisStreamsForLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a ListJournalKinesisStreamsForLedgerResponsePrivate object with public implementation \a q.
 */
ListJournalKinesisStreamsForLedgerResponsePrivate::ListJournalKinesisStreamsForLedgerResponsePrivate(
    ListJournalKinesisStreamsForLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB ListJournalKinesisStreamsForLedger response element from \a xml.
 */
void ListJournalKinesisStreamsForLedgerResponsePrivate::parseListJournalKinesisStreamsForLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJournalKinesisStreamsForLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
