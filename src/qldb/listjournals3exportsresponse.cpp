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

#include "listjournals3exportsresponse.h"
#include "listjournals3exportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::ListJournalS3ExportsResponse
 * \brief The ListJournalS3ExportsResponse class provides an interace for QLDB ListJournalS3Exports responses.
 *
 * \inmodule QtAwsQLDB
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
    return static_cast<const ListJournalS3ExportsRequest *>(QldbResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDB ListJournalS3Exports \a response.
 */
void ListJournalS3ExportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJournalS3ExportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::ListJournalS3ExportsResponsePrivate
 * \brief The ListJournalS3ExportsResponsePrivate class provides private implementation for ListJournalS3ExportsResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a ListJournalS3ExportsResponsePrivate object with public implementation \a q.
 */
ListJournalS3ExportsResponsePrivate::ListJournalS3ExportsResponsePrivate(
    ListJournalS3ExportsResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB ListJournalS3Exports response element from \a xml.
 */
void ListJournalS3ExportsResponsePrivate::parseListJournalS3ExportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJournalS3ExportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
