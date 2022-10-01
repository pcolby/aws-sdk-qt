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

#include "listworkerconfigurationsresponse.h"
#include "listworkerconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::ListWorkerConfigurationsResponse
 * \brief The ListWorkerConfigurationsResponse class provides an interace for KafkaConnect ListWorkerConfigurations responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::listWorkerConfigurations
 */

/*!
 * Constructs a ListWorkerConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkerConfigurationsResponse::ListWorkerConfigurationsResponse(
        const ListWorkerConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new ListWorkerConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListWorkerConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkerConfigurationsRequest * ListWorkerConfigurationsResponse::request() const
{
    Q_D(const ListWorkerConfigurationsResponse);
    return static_cast<const ListWorkerConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect ListWorkerConfigurations \a response.
 */
void ListWorkerConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkerConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::ListWorkerConfigurationsResponsePrivate
 * \brief The ListWorkerConfigurationsResponsePrivate class provides private implementation for ListWorkerConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a ListWorkerConfigurationsResponsePrivate object with public implementation \a q.
 */
ListWorkerConfigurationsResponsePrivate::ListWorkerConfigurationsResponsePrivate(
    ListWorkerConfigurationsResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect ListWorkerConfigurations response element from \a xml.
 */
void ListWorkerConfigurationsResponsePrivate::parseListWorkerConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkerConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
