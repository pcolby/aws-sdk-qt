// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebrokerresponse.h"
#include "describebrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeBrokerResponse
 * \brief The DescribeBrokerResponse class provides an interace for Mq DescribeBroker responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeBroker
 */

/*!
 * Constructs a DescribeBrokerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBrokerResponse::DescribeBrokerResponse(
        const DescribeBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DescribeBrokerResponsePrivate(this), parent)
{
    setRequest(new DescribeBrokerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBrokerRequest * DescribeBrokerResponse::request() const
{
    Q_D(const DescribeBrokerResponse);
    return static_cast<const DescribeBrokerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq DescribeBroker \a response.
 */
void DescribeBrokerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::DescribeBrokerResponsePrivate
 * \brief The DescribeBrokerResponsePrivate class provides private implementation for DescribeBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeBrokerResponsePrivate object with public implementation \a q.
 */
DescribeBrokerResponsePrivate::DescribeBrokerResponsePrivate(
    DescribeBrokerResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq DescribeBroker response element from \a xml.
 */
void DescribeBrokerResponsePrivate::parseDescribeBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBrokerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
