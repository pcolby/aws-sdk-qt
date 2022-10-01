// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestreamconsumerresponse.h"
#include "describestreamconsumerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DescribeStreamConsumerResponse
 * \brief The DescribeStreamConsumerResponse class provides an interace for Kinesis DescribeStreamConsumer responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::describeStreamConsumer
 */

/*!
 * Constructs a DescribeStreamConsumerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStreamConsumerResponse::DescribeStreamConsumerResponse(
        const DescribeStreamConsumerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DescribeStreamConsumerResponsePrivate(this), parent)
{
    setRequest(new DescribeStreamConsumerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStreamConsumerRequest * DescribeStreamConsumerResponse::request() const
{
    Q_D(const DescribeStreamConsumerResponse);
    return static_cast<const DescribeStreamConsumerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis DescribeStreamConsumer \a response.
 */
void DescribeStreamConsumerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStreamConsumerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::DescribeStreamConsumerResponsePrivate
 * \brief The DescribeStreamConsumerResponsePrivate class provides private implementation for DescribeStreamConsumerResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DescribeStreamConsumerResponsePrivate object with public implementation \a q.
 */
DescribeStreamConsumerResponsePrivate::DescribeStreamConsumerResponsePrivate(
    DescribeStreamConsumerResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis DescribeStreamConsumer response element from \a xml.
 */
void DescribeStreamConsumerResponsePrivate::parseDescribeStreamConsumerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamConsumerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
