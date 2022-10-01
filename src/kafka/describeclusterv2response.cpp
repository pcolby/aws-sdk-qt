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

#include "describeclusterv2response.h"
#include "describeclusterv2response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DescribeClusterV2Response
 * \brief The DescribeClusterV2Response class provides an interace for Kafka DescribeClusterV2 responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::describeClusterV2
 */

/*!
 * Constructs a DescribeClusterV2Response object for \a reply to \a request, with parent \a parent.
 */
DescribeClusterV2Response::DescribeClusterV2Response(
        const DescribeClusterV2Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new DescribeClusterV2ResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterV2Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClusterV2Request * DescribeClusterV2Response::request() const
{
    Q_D(const DescribeClusterV2Response);
    return static_cast<const DescribeClusterV2Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka DescribeClusterV2 \a response.
 */
void DescribeClusterV2Response::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClusterV2Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::DescribeClusterV2ResponsePrivate
 * \brief The DescribeClusterV2ResponsePrivate class provides private implementation for DescribeClusterV2Response.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DescribeClusterV2ResponsePrivate object with public implementation \a q.
 */
DescribeClusterV2ResponsePrivate::DescribeClusterV2ResponsePrivate(
    DescribeClusterV2Response * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka DescribeClusterV2 response element from \a xml.
 */
void DescribeClusterV2ResponsePrivate::parseDescribeClusterV2Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterV2Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
