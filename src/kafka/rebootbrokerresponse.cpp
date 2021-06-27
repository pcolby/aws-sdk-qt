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
namespace Kafka {

/*!
 * \class QtAws::Kafka::RebootBrokerResponse
 * \brief The RebootBrokerResponse class provides an interace for Kafka RebootBroker responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::rebootBroker
 */

/*!
 * Constructs a RebootBrokerResponse object for \a reply to \a request, with parent \a parent.
 */
RebootBrokerResponse::RebootBrokerResponse(
        const RebootBrokerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new RebootBrokerResponsePrivate(this), parent)
{
    setRequest(new RebootBrokerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RebootBrokerRequest * RebootBrokerResponse::request() const
{
    return static_cast<const RebootBrokerRequest *>(KafkaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Kafka RebootBroker \a response.
 */
void RebootBrokerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RebootBrokerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::RebootBrokerResponsePrivate
 * \brief The RebootBrokerResponsePrivate class provides private implementation for RebootBrokerResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a RebootBrokerResponsePrivate object with public implementation \a q.
 */
RebootBrokerResponsePrivate::RebootBrokerResponsePrivate(
    RebootBrokerResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka RebootBroker response element from \a xml.
 */
void RebootBrokerResponsePrivate::parseRebootBrokerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootBrokerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
