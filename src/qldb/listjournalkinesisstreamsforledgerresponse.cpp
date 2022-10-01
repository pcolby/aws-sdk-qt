// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjournalkinesisstreamsforledgerresponse.h"
#include "listjournalkinesisstreamsforledgerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ListJournalKinesisStreamsForLedgerResponse
 * \brief The ListJournalKinesisStreamsForLedgerResponse class provides an interace for Qldb ListJournalKinesisStreamsForLedger responses.
 *
 * \inmodule QtAwsQldb
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
    Q_D(const ListJournalKinesisStreamsForLedgerResponse);
    return static_cast<const ListJournalKinesisStreamsForLedgerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb ListJournalKinesisStreamsForLedger \a response.
 */
void ListJournalKinesisStreamsForLedgerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJournalKinesisStreamsForLedgerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::ListJournalKinesisStreamsForLedgerResponsePrivate
 * \brief The ListJournalKinesisStreamsForLedgerResponsePrivate class provides private implementation for ListJournalKinesisStreamsForLedgerResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ListJournalKinesisStreamsForLedgerResponsePrivate object with public implementation \a q.
 */
ListJournalKinesisStreamsForLedgerResponsePrivate::ListJournalKinesisStreamsForLedgerResponsePrivate(
    ListJournalKinesisStreamsForLedgerResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb ListJournalKinesisStreamsForLedger response element from \a xml.
 */
void ListJournalKinesisStreamsForLedgerResponsePrivate::parseListJournalKinesisStreamsForLedgerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJournalKinesisStreamsForLedgerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
