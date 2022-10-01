// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebrokerinstanceoptionsresponse.h"
#include "describebrokerinstanceoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeBrokerInstanceOptionsResponse
 * \brief The DescribeBrokerInstanceOptionsResponse class provides an interace for Mq DescribeBrokerInstanceOptions responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeBrokerInstanceOptions
 */

/*!
 * Constructs a DescribeBrokerInstanceOptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBrokerInstanceOptionsResponse::DescribeBrokerInstanceOptionsResponse(
        const DescribeBrokerInstanceOptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DescribeBrokerInstanceOptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeBrokerInstanceOptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBrokerInstanceOptionsRequest * DescribeBrokerInstanceOptionsResponse::request() const
{
    Q_D(const DescribeBrokerInstanceOptionsResponse);
    return static_cast<const DescribeBrokerInstanceOptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq DescribeBrokerInstanceOptions \a response.
 */
void DescribeBrokerInstanceOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBrokerInstanceOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::DescribeBrokerInstanceOptionsResponsePrivate
 * \brief The DescribeBrokerInstanceOptionsResponsePrivate class provides private implementation for DescribeBrokerInstanceOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeBrokerInstanceOptionsResponsePrivate object with public implementation \a q.
 */
DescribeBrokerInstanceOptionsResponsePrivate::DescribeBrokerInstanceOptionsResponsePrivate(
    DescribeBrokerInstanceOptionsResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq DescribeBrokerInstanceOptions response element from \a xml.
 */
void DescribeBrokerInstanceOptionsResponsePrivate::parseDescribeBrokerInstanceOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBrokerInstanceOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
