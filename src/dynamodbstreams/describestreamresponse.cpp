// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestreamresponse.h"
#include "describestreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDbStreams {

/*!
 * \class QtAws::DynamoDbStreams::DescribeStreamResponse
 * \brief The DescribeStreamResponse class provides an interace for DynamoDbStreams DescribeStream responses.
 *
 * \inmodule QtAwsDynamoDbStreams
 *
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB Streams provides API actions for accessing streams and processing stream records. To learn more about
 *  application development with Streams, see <a
 *  href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Streams.html">Capturing Table Activity with
 *  DynamoDB Streams</a> in the Amazon DynamoDB Developer
 *
 * \sa DynamoDbStreamsClient::describeStream
 */

/*!
 * Constructs a DescribeStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStreamResponse::DescribeStreamResponse(
        const DescribeStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDbStreamsResponse(new DescribeStreamResponsePrivate(this), parent)
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
 * Parses a successful DynamoDbStreams DescribeStream \a response.
 */
void DescribeStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDbStreams::DescribeStreamResponsePrivate
 * \brief The DescribeStreamResponsePrivate class provides private implementation for DescribeStreamResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDbStreams
 */

/*!
 * Constructs a DescribeStreamResponsePrivate object with public implementation \a q.
 */
DescribeStreamResponsePrivate::DescribeStreamResponsePrivate(
    DescribeStreamResponse * const q) : DynamoDbStreamsResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDbStreams DescribeStream response element from \a xml.
 */
void DescribeStreamResponsePrivate::parseDescribeStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDbStreams
} // namespace QtAws
