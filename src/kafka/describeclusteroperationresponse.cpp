// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
