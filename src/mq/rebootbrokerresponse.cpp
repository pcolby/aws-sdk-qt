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

#include "rebootbrokerresponse.h"
#include "rebootbrokerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::RebootBrokerResponse
 * \brief The RebootBrokerResponse class provides an interace for Mq RebootBroker responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::rebootBroker
 */

/*!
 * Constructs a RebootBrokerResponse object for \a reply to \a request, with parent \a parent.
 */
RebootBrokerResponse::RebootBrokerResponse(
        const RebootBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new RebootBrokerResponsePrivate(this), parent)
{
    setRequest(new RebootBrokerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootBrokerRequest * RebootBrokerResponse::request() const
{
    Q_D(const RebootBrokerResponse);
    return static_cast<const RebootBrokerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq RebootBroker \a response.
 */
void RebootBrokerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::RebootBrokerResponsePrivate
 * \brief The RebootBrokerResponsePrivate class provides private implementation for RebootBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a RebootBrokerResponsePrivate object with public implementation \a q.
 */
RebootBrokerResponsePrivate::RebootBrokerResponsePrivate(
    RebootBrokerResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq RebootBroker response element from \a xml.
 */
void RebootBrokerResponsePrivate::parseRebootBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootBrokerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
