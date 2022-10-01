// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejournals3exportresponse.h"
#include "describejournals3exportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::DescribeJournalS3ExportResponse
 * \brief The DescribeJournalS3ExportResponse class provides an interace for Qldb DescribeJournalS3Export responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::describeJournalS3Export
 */

/*!
 * Constructs a DescribeJournalS3ExportResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJournalS3ExportResponse::DescribeJournalS3ExportResponse(
        const DescribeJournalS3ExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new DescribeJournalS3ExportResponsePrivate(this), parent)
{
    setRequest(new DescribeJournalS3ExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJournalS3ExportRequest * DescribeJournalS3ExportResponse::request() const
{
    Q_D(const DescribeJournalS3ExportResponse);
    return static_cast<const DescribeJournalS3ExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb DescribeJournalS3Export \a response.
 */
void DescribeJournalS3ExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJournalS3ExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::DescribeJournalS3ExportResponsePrivate
 * \brief The DescribeJournalS3ExportResponsePrivate class provides private implementation for DescribeJournalS3ExportResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a DescribeJournalS3ExportResponsePrivate object with public implementation \a q.
 */
DescribeJournalS3ExportResponsePrivate::DescribeJournalS3ExportResponsePrivate(
    DescribeJournalS3ExportResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb DescribeJournalS3Export response element from \a xml.
 */
void DescribeJournalS3ExportResponsePrivate::parseDescribeJournalS3ExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJournalS3ExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
