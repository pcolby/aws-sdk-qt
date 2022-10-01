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

#include "listconnectorsresponse.h"
#include "listconnectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::ListConnectorsResponse
 * \brief The ListConnectorsResponse class provides an interace for KafkaConnect ListConnectors responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::listConnectors
 */

/*!
 * Constructs a ListConnectorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConnectorsResponse::ListConnectorsResponse(
        const ListConnectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new ListConnectorsResponsePrivate(this), parent)
{
    setRequest(new ListConnectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConnectorsRequest * ListConnectorsResponse::request() const
{
    Q_D(const ListConnectorsResponse);
    return static_cast<const ListConnectorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect ListConnectors \a response.
 */
void ListConnectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConnectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::ListConnectorsResponsePrivate
 * \brief The ListConnectorsResponsePrivate class provides private implementation for ListConnectorsResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a ListConnectorsResponsePrivate object with public implementation \a q.
 */
ListConnectorsResponsePrivate::ListConnectorsResponsePrivate(
    ListConnectorsResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect ListConnectors response element from \a xml.
 */
void ListConnectorsResponsePrivate::parseListConnectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConnectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
