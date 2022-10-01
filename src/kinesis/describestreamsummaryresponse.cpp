// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestreamsummaryresponse.h"
#include "describestreamsummaryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeStreamSummaryResponse
 * \brief The DescribeStreamSummaryResponse class provides an interace for Kinesis DescribeStreamSummary responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeStreamSummary
 */

/*!
 * Constructs a DescribeStreamSummaryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStreamSummaryResponse::DescribeStreamSummaryResponse(
        const DescribeStreamSummaryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DescribeStreamSummaryResponsePrivate(this), parent)
{
    setRequest(new DescribeStreamSummaryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStreamSummaryRequest * DescribeStreamSummaryResponse::request() const
{
    Q_D(const DescribeStreamSummaryResponse);
    return static_cast<const DescribeStreamSummaryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis DescribeStreamSummary \a response.
 */
void DescribeStreamSummaryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStreamSummaryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::DescribeStreamSummaryResponsePrivate
 * \brief The DescribeStreamSummaryResponsePrivate class provides private implementation for DescribeStreamSummaryResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DescribeStreamSummaryResponsePrivate object with public implementation \a q.
 */
DescribeStreamSummaryResponsePrivate::DescribeStreamSummaryResponsePrivate(
    DescribeStreamSummaryResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis DescribeStreamSummary response element from \a xml.
 */
void DescribeStreamSummaryResponsePrivate::parseDescribeStreamSummaryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamSummaryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
