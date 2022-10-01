// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestreamresponse.h"
#include "describestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeStreamResponse
 * \brief The DescribeStreamResponse class provides an interace for Kinesis DescribeStream responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeStream
 */

/*!
 * Constructs a DescribeStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStreamResponse::DescribeStreamResponse(
        const DescribeStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DescribeStreamResponsePrivate(this), parent)
{
    setRequest(new DescribeStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStreamRequest * DescribeStreamResponse::request() const
{
    Q_D(const DescribeStreamResponse);
    return static_cast<const DescribeStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis DescribeStream \a response.
 */
void DescribeStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::DescribeStreamResponsePrivate
 * \brief The DescribeStreamResponsePrivate class provides private implementation for DescribeStreamResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DescribeStreamResponsePrivate object with public implementation \a q.
 */
DescribeStreamResponsePrivate::DescribeStreamResponsePrivate(
    DescribeStreamResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis DescribeStream response element from \a xml.
 */
void DescribeStreamResponsePrivate::parseDescribeStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
