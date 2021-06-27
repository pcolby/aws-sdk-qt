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

#include "describejournalkinesisstreamresponse.h"
#include "describejournalkinesisstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::DescribeJournalKinesisStreamResponse
 * \brief The DescribeJournalKinesisStreamResponse class provides an interace for QLDB DescribeJournalKinesisStream responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::describeJournalKinesisStream
 */

/*!
 * Constructs a DescribeJournalKinesisStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJournalKinesisStreamResponse::DescribeJournalKinesisStreamResponse(
        const DescribeJournalKinesisStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new DescribeJournalKinesisStreamResponsePrivate(this), parent)
{
    setRequest(new DescribeJournalKinesisStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJournalKinesisStreamRequest * DescribeJournalKinesisStreamResponse::request() const
{
    return static_cast<const DescribeJournalKinesisStreamRequest *>(QldbResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDB DescribeJournalKinesisStream \a response.
 */
void DescribeJournalKinesisStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJournalKinesisStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::DescribeJournalKinesisStreamResponsePrivate
 * \brief The DescribeJournalKinesisStreamResponsePrivate class provides private implementation for DescribeJournalKinesisStreamResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a DescribeJournalKinesisStreamResponsePrivate object with public implementation \a q.
 */
DescribeJournalKinesisStreamResponsePrivate::DescribeJournalKinesisStreamResponsePrivate(
    DescribeJournalKinesisStreamResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB DescribeJournalKinesisStream response element from \a xml.
 */
void DescribeJournalKinesisStreamResponsePrivate::parseDescribeJournalKinesisStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJournalKinesisStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
