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

#include "listconfigurationrevisionsresponse.h"
#include "listconfigurationrevisionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::ListConfigurationRevisionsResponse
 * \brief The ListConfigurationRevisionsResponse class provides an interace for MQ ListConfigurationRevisions responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::listConfigurationRevisions
 */

/*!
 * Constructs a ListConfigurationRevisionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListConfigurationRevisionsResponse::ListConfigurationRevisionsResponse(
        const ListConfigurationRevisionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new ListConfigurationRevisionsResponsePrivate(this), parent)
{
    setRequest(new ListConfigurationRevisionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListConfigurationRevisionsRequest * ListConfigurationRevisionsResponse::request() const
{
    Q_D(const ListConfigurationRevisionsResponse);
    return static_cast<const ListConfigurationRevisionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MQ ListConfigurationRevisions \a response.
 */
void ListConfigurationRevisionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListConfigurationRevisionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::ListConfigurationRevisionsResponsePrivate
 * \brief The ListConfigurationRevisionsResponsePrivate class provides private implementation for ListConfigurationRevisionsResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a ListConfigurationRevisionsResponsePrivate object with public implementation \a q.
 */
ListConfigurationRevisionsResponsePrivate::ListConfigurationRevisionsResponsePrivate(
    ListConfigurationRevisionsResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ ListConfigurationRevisions response element from \a xml.
 */
void ListConfigurationRevisionsResponsePrivate::parseListConfigurationRevisionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListConfigurationRevisionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MQ
} // namespace QtAws
