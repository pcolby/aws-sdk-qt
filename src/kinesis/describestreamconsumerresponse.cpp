/*
    Copyright 2013-2019 Paul Colby

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
