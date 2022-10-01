// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjournals3exportsresponse.h"
#include "listjournals3exportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ListJournalS3ExportsResponse
 * \brief The ListJournalS3ExportsResponse class provides an interace for Qldb ListJournalS3Exports responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::listJournalS3Exports
 */

/*!
 * Constructs a ListJournalS3ExportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListJournalS3ExportsResponse::ListJournalS3ExportsResponse(
        const ListJournalS3ExportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new ListJournalS3ExportsResponsePrivate(this), parent)
{
    setRequest(new ListJournalS3ExportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJournalS3ExportsRequest * ListJournalS3ExportsResponse::request() const
{
    Q_D(const ListJournalS3ExportsResponse);
    return static_cast<const ListJournalS3ExportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb ListJournalS3Exports \a response.
 */
void ListJournalS3ExportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJournalS3ExportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::ListJournalS3ExportsResponsePrivate
 * \brief The ListJournalS3ExportsResponsePrivate class provides private implementation for ListJournalS3ExportsResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ListJournalS3ExportsResponsePrivate object with public implementation \a q.
 */
ListJournalS3ExportsResponsePrivate::ListJournalS3ExportsResponsePrivate(
    ListJournalS3ExportsResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb ListJournalS3Exports response element from \a xml.
 */
void ListJournalS3ExportsResponsePrivate::parseListJournalS3ExportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJournalS3ExportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
