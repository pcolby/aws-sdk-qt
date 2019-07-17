/*
    Copyright 2013-2019 Paul Colby

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

#include "getbootstrapbrokersresponse.h"
#include "getbootstrapbrokersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::GetBootstrapBrokersResponse
 * \brief The GetBootstrapBrokersResponse class provides an interace for Kafka GetBootstrapBrokers responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::getBootstrapBrokers
 */

/*!
 * Constructs a GetBootstrapBrokersResponse object for \a reply to \a request, with parent \a parent.
 */
GetBootstrapBrokersResponse::GetBootstrapBrokersResponse(
        const GetBootstrapBrokersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new GetBootstrapBrokersResponsePrivate(this), parent)
{
    setRequest(new GetBootstrapBrokersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBootstrapBrokersRequest * GetBootstrapBrokersResponse::request() const
{
    Q_D(const GetBootstrapBrokersResponse);
    return static_cast<const GetBootstrapBrokersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka GetBootstrapBrokers \a response.
 */
void GetBootstrapBrokersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBootstrapBrokersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::GetBootstrapBrokersResponsePrivate
 * \brief The GetBootstrapBrokersResponsePrivate class provides private implementation for GetBootstrapBrokersResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a GetBootstrapBrokersResponsePrivate object with public implementation \a q.
 */
GetBootstrapBrokersResponsePrivate::GetBootstrapBrokersResponsePrivate(
    GetBootstrapBrokersResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka GetBootstrapBrokers response element from \a xml.
 */
void GetBootstrapBrokersResponsePrivate::parseGetBootstrapBrokersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBootstrapBrokersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
