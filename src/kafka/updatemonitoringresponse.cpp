// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
