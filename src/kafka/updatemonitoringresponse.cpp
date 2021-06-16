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

#include "updatemonitoringresponse.h"
#include "updatemonitoringresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateMonitoringResponse
 * \brief The UpdateMonitoringResponse class provides an interace for Kafka UpdateMonitoring responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateMonitoring
 */

/*!
 * Constructs a UpdateMonitoringResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMonitoringResponse::UpdateMonitoringResponse(
        const UpdateMonitoringRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateMonitoringResponsePrivate(this), parent)
{
    setRequest(new UpdateMonitoringRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMonitoringRequest * UpdateMonitoringResponse::request() const
{
    Q_D(const UpdateMonitoringResponse);
    return static_cast<const UpdateMonitoringRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateMonitoring \a response.
 */
void UpdateMonitoringResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMonitoringResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateMonitoringResponsePrivate
 * \brief The UpdateMonitoringResponsePrivate class provides private implementation for UpdateMonitoringResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateMonitoringResponsePrivate object with public implementation \a q.
 */
UpdateMonitoringResponsePrivate::UpdateMonitoringResponsePrivate(
    UpdateMonitoringResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateMonitoring response element from \a xml.
 */
void UpdateMonitoringResponsePrivate::parseUpdateMonitoringResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMonitoringResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
