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

#include "describeclusteroperationresponse.h"
#include "describeclusteroperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DescribeClusterOperationResponse
 * \brief The DescribeClusterOperationResponse class provides an interace for Kafka DescribeClusterOperation responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::describeClusterOperation
 */

/*!
 * Constructs a DescribeClusterOperationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClusterOperationResponse::DescribeClusterOperationResponse(
        const DescribeClusterOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new DescribeClusterOperationResponsePrivate(this), parent)
{
    setRequest(new DescribeClusterOperationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClusterOperationRequest * DescribeClusterOperationResponse::request() const
{
    Q_D(const DescribeClusterOperationResponse);
    return static_cast<const DescribeClusterOperationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka DescribeClusterOperation \a response.
 */
void DescribeClusterOperationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClusterOperationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::DescribeClusterOperationResponsePrivate
 * \brief The DescribeClusterOperationResponsePrivate class provides private implementation for DescribeClusterOperationResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DescribeClusterOperationResponsePrivate object with public implementation \a q.
 */
DescribeClusterOperationResponsePrivate::DescribeClusterOperationResponsePrivate(
    DescribeClusterOperationResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka DescribeClusterOperation response element from \a xml.
 */
void DescribeClusterOperationResponsePrivate::parseDescribeClusterOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClusterOperationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
