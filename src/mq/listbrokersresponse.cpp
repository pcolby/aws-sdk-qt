/*
    Copyright 2013-2020 Paul Colby

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

#include "listbrokersresponse.h"
#include "listbrokersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::ListBrokersResponse
 * \brief The ListBrokersResponse class provides an interace for MQ ListBrokers responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::listBrokers
 */

/*!
 * Constructs a ListBrokersResponse object for \a reply to \a request, with parent \a parent.
 */
ListBrokersResponse::ListBrokersResponse(
        const ListBrokersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new ListBrokersResponsePrivate(this), parent)
{
    setRequest(new ListBrokersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBrokersRequest * ListBrokersResponse::request() const
{
    Q_D(const ListBrokersResponse);
    return static_cast<const ListBrokersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MQ ListBrokers \a response.
 */
void ListBrokersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBrokersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::ListBrokersResponsePrivate
 * \brief The ListBrokersResponsePrivate class provides private implementation for ListBrokersResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a ListBrokersResponsePrivate object with public implementation \a q.
 */
ListBrokersResponsePrivate::ListBrokersResponsePrivate(
    ListBrokersResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ ListBrokers response element from \a xml.
 */
void ListBrokersResponsePrivate::parseListBrokersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBrokersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MQ
} // namespace QtAws
