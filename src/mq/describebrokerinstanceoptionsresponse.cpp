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

#include "describebrokerinstanceoptionsresponse.h"
#include "describebrokerinstanceoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeBrokerInstanceOptionsResponse
 * \brief The DescribeBrokerInstanceOptionsResponse class provides an interace for MQ DescribeBrokerInstanceOptions responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
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
 * Parses a successful MQ DescribeBrokerInstanceOptions \a response.
 */
void DescribeBrokerInstanceOptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBrokerInstanceOptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::DescribeBrokerInstanceOptionsResponsePrivate
 * \brief The DescribeBrokerInstanceOptionsResponsePrivate class provides private implementation for DescribeBrokerInstanceOptionsResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DescribeBrokerInstanceOptionsResponsePrivate object with public implementation \a q.
 */
DescribeBrokerInstanceOptionsResponsePrivate::DescribeBrokerInstanceOptionsResponsePrivate(
    DescribeBrokerInstanceOptionsResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ DescribeBrokerInstanceOptions response element from \a xml.
 */
void DescribeBrokerInstanceOptionsResponsePrivate::parseDescribeBrokerInstanceOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBrokerInstanceOptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MQ
} // namespace QtAws
