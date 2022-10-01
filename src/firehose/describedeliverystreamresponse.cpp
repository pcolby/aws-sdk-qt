// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedeliverystreamresponse.h"
#include "describedeliverystreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::DescribeDeliveryStreamResponse
 * \brief The DescribeDeliveryStreamResponse class provides an interace for Firehose DescribeDeliveryStream responses.
 *
 * \inmodule QtAwsFirehose
 *
 *  <fullname>Amazon Kinesis Data Firehose API Reference</fullname>
 * 
 *  Amazon Kinesis Data Firehose is a fully managed service that delivers real-time streaming data to destinations such as
 *  Amazon Simple Storage Service (Amazon S3), Amazon Elasticsearch Service (Amazon ES), Amazon Redshift, and
 *
 * \sa FirehoseClient::describeDeliveryStream
 */

/*!
 * Constructs a DescribeDeliveryStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeliveryStreamResponse::DescribeDeliveryStreamResponse(
        const DescribeDeliveryStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new DescribeDeliveryStreamResponsePrivate(this), parent)
{
    setRequest(new DescribeDeliveryStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeliveryStreamRequest * DescribeDeliveryStreamResponse::request() const
{
    Q_D(const DescribeDeliveryStreamResponse);
    return static_cast<const DescribeDeliveryStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Firehose DescribeDeliveryStream \a response.
 */
void DescribeDeliveryStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeliveryStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Firehose::DescribeDeliveryStreamResponsePrivate
 * \brief The DescribeDeliveryStreamResponsePrivate class provides private implementation for DescribeDeliveryStreamResponse.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a DescribeDeliveryStreamResponsePrivate object with public implementation \a q.
 */
DescribeDeliveryStreamResponsePrivate::DescribeDeliveryStreamResponsePrivate(
    DescribeDeliveryStreamResponse * const q) : FirehoseResponsePrivate(q)
{

}

/*!
 * Parses a Firehose DescribeDeliveryStream response element from \a xml.
 */
void DescribeDeliveryStreamResponsePrivate::parseDescribeDeliveryStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeliveryStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Firehose
} // namespace QtAws
