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

#include "listjournals3exportsforledgerresponse.h"
#include "listjournals3exportsforledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::ListJournalS3ExportsForLedgerResponse
 * \brief The ListJournalS3ExportsForLedgerResponse class provides an interace for QLDB ListJournalS3ExportsForLedger responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listJournalS3ExportsForLedger
 */

/*!
 * Constructs a ListJournalS3ExportsForLedgerResponse object for \a reply to \a request, with parent \a parent.
 */
ListJournalS3ExportsForLedgerResponse::ListJournalS3ExportsForLedgerResponse(
        const ListJournalS3ExportsForLedgerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new ListJournalS3ExportsForLedgerResponsePrivate(this), parent)
{
    setRequest(new ListJournalS3ExportsForLedgerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJournalS3ExportsForLedgerRequest * ListJournalS3ExportsForLedgerResponse::request() const
{
    return static_cast<const ListJournalS3ExportsForLedgerRequest *>(QldbResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDB ListJournalS3ExportsForLedger \a response.
 */
void ListJournalS3ExportsForLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJournalS3ExportsForLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::ListJournalS3ExportsForLedgerResponsePrivate
 * \brief The ListJournalS3ExportsForLedgerResponsePrivate class provides private implementation for ListJournalS3ExportsForLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a ListJournalS3ExportsForLedgerResponsePrivate object with public implementation \a q.
 */
ListJournalS3ExportsForLedgerResponsePrivate::ListJournalS3ExportsForLedgerResponsePrivate(
    ListJournalS3ExportsForLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB ListJournalS3ExportsForLedger response element from \a xml.
 */
void ListJournalS3ExportsForLedgerResponsePrivate::parseListJournalS3ExportsForLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJournalS3ExportsForLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
