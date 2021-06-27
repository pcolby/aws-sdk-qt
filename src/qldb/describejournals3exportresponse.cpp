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

#include "describejournals3exportresponse.h"
#include "describejournals3exportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::DescribeJournalS3ExportResponse
 * \brief The DescribeJournalS3ExportResponse class provides an interace for QLDB DescribeJournalS3Export responses.
 *
 * \inmodule QtAwsQLDB
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
    return static_cast<const DescribeJournalS3ExportRequest *>(QldbResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDB DescribeJournalS3Export \a response.
 */
void DescribeJournalS3ExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJournalS3ExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::DescribeJournalS3ExportResponsePrivate
 * \brief The DescribeJournalS3ExportResponsePrivate class provides private implementation for DescribeJournalS3ExportResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a DescribeJournalS3ExportResponsePrivate object with public implementation \a q.
 */
DescribeJournalS3ExportResponsePrivate::DescribeJournalS3ExportResponsePrivate(
    DescribeJournalS3ExportResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB DescribeJournalS3Export response element from \a xml.
 */
void DescribeJournalS3ExportResponsePrivate::parseDescribeJournalS3ExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJournalS3ExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
