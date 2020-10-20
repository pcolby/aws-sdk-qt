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

#include "listconfigurationsresponse.h"
#include "listconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::ListConfigurationsResponse
 * \brief The ListConfigurationsResponse class provides an interace for MQ ListConfigurations responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::listConfigurations
 */

/*!
 * Constructs a ListConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigurationsResponse::ListConfigurationsResponse(
        const ListConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new ListConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConfigurationsRequest * ListConfigurationsResponse::request() const
{
    Q_D(const ListConfigurationsResponse);
    return static_cast<const ListConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MQ ListConfigurations \a response.
 */
void ListConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::ListConfigurationsResponsePrivate
 * \brief The ListConfigurationsResponsePrivate class provides private implementation for ListConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a ListConfigurationsResponsePrivate object with public implementation \a q.
 */
ListConfigurationsResponsePrivate::ListConfigurationsResponsePrivate(
    ListConfigurationsResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ ListConfigurations response element from \a xml.
 */
void ListConfigurationsResponsePrivate::parseListConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MQ
} // namespace QtAws
