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

#include "exportjournaltos3response.h"
#include "exportjournaltos3response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::ExportJournalToS3Response
 * \brief The ExportJournalToS3Response class provides an interace for QLDB ExportJournalToS3 responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::exportJournalToS3
 */

/*!
 * Constructs a ExportJournalToS3Response object for \a reply to \a request, with parent \a parent.
 */
ExportJournalToS3Response::ExportJournalToS3Response(
        const ExportJournalToS3Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new ExportJournalToS3ResponsePrivate(this), parent)
{
    setRequest(new ExportJournalToS3Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportJournalToS3Request * ExportJournalToS3Response::request() const
{
    return static_cast<const ExportJournalToS3Request *>(QldbResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDB ExportJournalToS3 \a response.
 */
void ExportJournalToS3Response::parseSuccess(QIODevice &response)
{
    //Q_D(ExportJournalToS3Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::ExportJournalToS3ResponsePrivate
 * \brief The ExportJournalToS3ResponsePrivate class provides private implementation for ExportJournalToS3Response.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a ExportJournalToS3ResponsePrivate object with public implementation \a q.
 */
ExportJournalToS3ResponsePrivate::ExportJournalToS3ResponsePrivate(
    ExportJournalToS3Response * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB ExportJournalToS3 response element from \a xml.
 */
void ExportJournalToS3ResponsePrivate::parseExportJournalToS3Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportJournalToS3Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
