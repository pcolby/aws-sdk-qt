/*
    Copyright 2013-2018 Paul Colby

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
    Q_D(DescribeDeliveryStreamResponse);
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
    /// @todo
}

} // namespace Firehose
} // namespace QtAws
