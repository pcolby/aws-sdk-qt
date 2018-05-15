/*
    Copyright 2013-2018 Paul Colby

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

#include "describebrokerresponse.h"
#include "describebrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeBrokerResponse
 * \brief The DescribeBrokerResponse class provides an interace for MQ DescribeBroker responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
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
 * Parses a successful MQ DescribeBroker \a response.
 */
void DescribeBrokerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::DescribeBrokerResponsePrivate
 * \brief The DescribeBrokerResponsePrivate class provides private implementation for DescribeBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a DescribeBrokerResponsePrivate object with public implementation \a q.
 */
DescribeBrokerResponsePrivate::DescribeBrokerResponsePrivate(
    DescribeBrokerResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ DescribeBroker response element from \a xml.
 */
void DescribeBrokerResponsePrivate::parseDescribeBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBrokerResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
