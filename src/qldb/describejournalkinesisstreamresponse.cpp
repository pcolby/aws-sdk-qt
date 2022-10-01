// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejournalkinesisstreamresponse.h"
#include "describejournalkinesisstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::DescribeJournalKinesisStreamResponse
 * \brief The DescribeJournalKinesisStreamResponse class provides an interace for Qldb DescribeJournalKinesisStream responses.
 *
 * \inmodule QtAwsQldb
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
    Q_D(const DescribeJournalKinesisStreamResponse);
    return static_cast<const DescribeJournalKinesisStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb DescribeJournalKinesisStream \a response.
 */
void DescribeJournalKinesisStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJournalKinesisStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::DescribeJournalKinesisStreamResponsePrivate
 * \brief The DescribeJournalKinesisStreamResponsePrivate class provides private implementation for DescribeJournalKinesisStreamResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a DescribeJournalKinesisStreamResponsePrivate object with public implementation \a q.
 */
DescribeJournalKinesisStreamResponsePrivate::DescribeJournalKinesisStreamResponsePrivate(
    DescribeJournalKinesisStreamResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb DescribeJournalKinesisStream response element from \a xml.
 */
void DescribeJournalKinesisStreamResponsePrivate::parseDescribeJournalKinesisStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJournalKinesisStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
