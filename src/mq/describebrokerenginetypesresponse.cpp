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

#include "describebrokerenginetypesresponse.h"
#include "describebrokerenginetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeBrokerEngineTypesResponse
 * \brief The DescribeBrokerEngineTypesResponse class provides an interace for Mq DescribeBrokerEngineTypes responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeBrokerEngineTypes
 */

/*!
 * Constructs a DescribeBrokerEngineTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBrokerEngineTypesResponse::DescribeBrokerEngineTypesResponse(
        const DescribeBrokerEngineTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DescribeBrokerEngineTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeBrokerEngineTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBrokerEngineTypesRequest * DescribeBrokerEngineTypesResponse::request() const
{
    Q_D(const DescribeBrokerEngineTypesResponse);
    return static_cast<const DescribeBrokerEngineTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq DescribeBrokerEngineTypes \a response.
 */
void DescribeBrokerEngineTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBrokerEngineTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::DescribeBrokerEngineTypesResponsePrivate
 * \brief The DescribeBrokerEngineTypesResponsePrivate class provides private implementation for DescribeBrokerEngineTypesResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeBrokerEngineTypesResponsePrivate object with public implementation \a q.
 */
DescribeBrokerEngineTypesResponsePrivate::DescribeBrokerEngineTypesResponsePrivate(
    DescribeBrokerEngineTypesResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq DescribeBrokerEngineTypes response element from \a xml.
 */
void DescribeBrokerEngineTypesResponsePrivate::parseDescribeBrokerEngineTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBrokerEngineTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
