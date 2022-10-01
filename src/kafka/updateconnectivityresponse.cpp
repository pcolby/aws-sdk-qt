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

#include "updateconnectivityresponse.h"
#include "updateconnectivityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateConnectivityResponse
 * \brief The UpdateConnectivityResponse class provides an interace for Kafka UpdateConnectivity responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateConnectivity
 */

/*!
 * Constructs a UpdateConnectivityResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectivityResponse::UpdateConnectivityResponse(
        const UpdateConnectivityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateConnectivityResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectivityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectivityRequest * UpdateConnectivityResponse::request() const
{
    Q_D(const UpdateConnectivityResponse);
    return static_cast<const UpdateConnectivityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateConnectivity \a response.
 */
void UpdateConnectivityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectivityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateConnectivityResponsePrivate
 * \brief The UpdateConnectivityResponsePrivate class provides private implementation for UpdateConnectivityResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateConnectivityResponsePrivate object with public implementation \a q.
 */
UpdateConnectivityResponsePrivate::UpdateConnectivityResponsePrivate(
    UpdateConnectivityResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateConnectivity response element from \a xml.
 */
void UpdateConnectivityResponsePrivate::parseUpdateConnectivityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectivityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
