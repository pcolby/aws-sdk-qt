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

#include "listkafkaversionsresponse.h"
#include "listkafkaversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListKafkaVersionsResponse
 * \brief The ListKafkaVersionsResponse class provides an interace for Kafka ListKafkaVersions responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listKafkaVersions
 */

/*!
 * Constructs a ListKafkaVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListKafkaVersionsResponse::ListKafkaVersionsResponse(
        const ListKafkaVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new ListKafkaVersionsResponsePrivate(this), parent)
{
    setRequest(new ListKafkaVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListKafkaVersionsRequest * ListKafkaVersionsResponse::request() const
{
    Q_D(const ListKafkaVersionsResponse);
    return static_cast<const ListKafkaVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka ListKafkaVersions \a response.
 */
void ListKafkaVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListKafkaVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::ListKafkaVersionsResponsePrivate
 * \brief The ListKafkaVersionsResponsePrivate class provides private implementation for ListKafkaVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListKafkaVersionsResponsePrivate object with public implementation \a q.
 */
ListKafkaVersionsResponsePrivate::ListKafkaVersionsResponsePrivate(
    ListKafkaVersionsResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka ListKafkaVersions response element from \a xml.
 */
void ListKafkaVersionsResponsePrivate::parseListKafkaVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListKafkaVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
