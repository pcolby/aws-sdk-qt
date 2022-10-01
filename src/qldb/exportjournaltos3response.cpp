// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportjournaltos3response.h"
#include "exportjournaltos3response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::ExportJournalToS3Response
 * \brief The ExportJournalToS3Response class provides an interace for Qldb ExportJournalToS3 responses.
 *
 * \inmodule QtAwsQldb
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
    Q_D(const ExportJournalToS3Response);
    return static_cast<const ExportJournalToS3Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb ExportJournalToS3 \a response.
 */
void ExportJournalToS3Response::parseSuccess(QIODevice &response)
{
    //Q_D(ExportJournalToS3Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::ExportJournalToS3ResponsePrivate
 * \brief The ExportJournalToS3ResponsePrivate class provides private implementation for ExportJournalToS3Response.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a ExportJournalToS3ResponsePrivate object with public implementation \a q.
 */
ExportJournalToS3ResponsePrivate::ExportJournalToS3ResponsePrivate(
    ExportJournalToS3Response * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb ExportJournalToS3 response element from \a xml.
 */
void ExportJournalToS3ResponsePrivate::parseExportJournalToS3Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportJournalToS3Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
