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

#include "listclustersv2response.h"
#include "listclustersv2response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListClustersV2Response
 * \brief The ListClustersV2Response class provides an interace for Kafka ListClustersV2 responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listClustersV2
 */

/*!
 * Constructs a ListClustersV2Response object for \a reply to \a request, with parent \a parent.
 */
ListClustersV2Response::ListClustersV2Response(
        const ListClustersV2Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new ListClustersV2ResponsePrivate(this), parent)
{
    setRequest(new ListClustersV2Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListClustersV2Request * ListClustersV2Response::request() const
{
    Q_D(const ListClustersV2Response);
    return static_cast<const ListClustersV2Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka ListClustersV2 \a response.
 */
void ListClustersV2Response::parseSuccess(QIODevice &response)
{
    //Q_D(ListClustersV2Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::ListClustersV2ResponsePrivate
 * \brief The ListClustersV2ResponsePrivate class provides private implementation for ListClustersV2Response.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListClustersV2ResponsePrivate object with public implementation \a q.
 */
ListClustersV2ResponsePrivate::ListClustersV2ResponsePrivate(
    ListClustersV2Response * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka ListClustersV2 response element from \a xml.
 */
void ListClustersV2ResponsePrivate::parseListClustersV2Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClustersV2Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
