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

#include "listclusteroperationsresponse.h"
#include "listclusteroperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::ListClusterOperationsResponse
 * \brief The ListClusterOperationsResponse class provides an interace for Kafka ListClusterOperations responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::listClusterOperations
 */

/*!
 * Constructs a ListClusterOperationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListClusterOperationsResponse::ListClusterOperationsResponse(
        const ListClusterOperationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new ListClusterOperationsResponsePrivate(this), parent)
{
    setRequest(new ListClusterOperationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListClusterOperationsRequest * ListClusterOperationsResponse::request() const
{
    return static_cast<const ListClusterOperationsRequest *>(KafkaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Kafka ListClusterOperations \a response.
 */
void ListClusterOperationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListClusterOperationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::ListClusterOperationsResponsePrivate
 * \brief The ListClusterOperationsResponsePrivate class provides private implementation for ListClusterOperationsResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a ListClusterOperationsResponsePrivate object with public implementation \a q.
 */
ListClusterOperationsResponsePrivate::ListClusterOperationsResponsePrivate(
    ListClusterOperationsResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka ListClusterOperations response element from \a xml.
 */
void ListClusterOperationsResponsePrivate::parseListClusterOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClusterOperationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
