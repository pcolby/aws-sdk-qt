// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationresponse.h"
#include "describeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::DescribeConfigurationResponse
 * \brief The DescribeConfigurationResponse class provides an interace for Kafka DescribeConfiguration responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::describeConfiguration
 */

/*!
 * Constructs a DescribeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConfigurationResponse::DescribeConfigurationResponse(
        const DescribeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new DescribeConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeConfigurationRequest * DescribeConfigurationResponse::request() const
{
    Q_D(const DescribeConfigurationResponse);
    return static_cast<const DescribeConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka DescribeConfiguration \a response.
 */
void DescribeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::DescribeConfigurationResponsePrivate
 * \brief The DescribeConfigurationResponsePrivate class provides private implementation for DescribeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a DescribeConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeConfigurationResponsePrivate::DescribeConfigurationResponsePrivate(
    DescribeConfigurationResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka DescribeConfiguration response element from \a xml.
 */
void DescribeConfigurationResponsePrivate::parseDescribeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
