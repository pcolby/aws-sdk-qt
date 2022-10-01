// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconfigurationresponse.h"
#include "describeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeConfigurationResponse
 * \brief The DescribeConfigurationResponse class provides an interace for Mq DescribeConfiguration responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeConfiguration
 */

/*!
 * Constructs a DescribeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeConfigurationResponse::DescribeConfigurationResponse(
        const DescribeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DescribeConfigurationResponsePrivate(this), parent)
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
 * Parses a successful Mq DescribeConfiguration \a response.
 */
void DescribeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::DescribeConfigurationResponsePrivate
 * \brief The DescribeConfigurationResponsePrivate class provides private implementation for DescribeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeConfigurationResponsePrivate::DescribeConfigurationResponsePrivate(
    DescribeConfigurationResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq DescribeConfiguration response element from \a xml.
 */
void DescribeConfigurationResponsePrivate::parseDescribeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
