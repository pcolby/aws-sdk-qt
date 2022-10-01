// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterkafkaversionresponse.h"
#include "updateclusterkafkaversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateClusterKafkaVersionResponse
 * \brief The UpdateClusterKafkaVersionResponse class provides an interace for Kafka UpdateClusterKafkaVersion responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateClusterKafkaVersion
 */

/*!
 * Constructs a UpdateClusterKafkaVersionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateClusterKafkaVersionResponse::UpdateClusterKafkaVersionResponse(
        const UpdateClusterKafkaVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateClusterKafkaVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateClusterKafkaVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateClusterKafkaVersionRequest * UpdateClusterKafkaVersionResponse::request() const
{
    Q_D(const UpdateClusterKafkaVersionResponse);
    return static_cast<const UpdateClusterKafkaVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateClusterKafkaVersion \a response.
 */
void UpdateClusterKafkaVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClusterKafkaVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateClusterKafkaVersionResponsePrivate
 * \brief The UpdateClusterKafkaVersionResponsePrivate class provides private implementation for UpdateClusterKafkaVersionResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateClusterKafkaVersionResponsePrivate object with public implementation \a q.
 */
UpdateClusterKafkaVersionResponsePrivate::UpdateClusterKafkaVersionResponsePrivate(
    UpdateClusterKafkaVersionResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateClusterKafkaVersion response element from \a xml.
 */
void UpdateClusterKafkaVersionResponsePrivate::parseUpdateClusterKafkaVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClusterKafkaVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
