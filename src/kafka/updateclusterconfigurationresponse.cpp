// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterconfigurationresponse.h"
#include "updateclusterconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateClusterConfigurationResponse
 * \brief The UpdateClusterConfigurationResponse class provides an interace for Kafka UpdateClusterConfiguration responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateClusterConfiguration
 */

/*!
 * Constructs a UpdateClusterConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateClusterConfigurationResponse::UpdateClusterConfigurationResponse(
        const UpdateClusterConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateClusterConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateClusterConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateClusterConfigurationRequest * UpdateClusterConfigurationResponse::request() const
{
    Q_D(const UpdateClusterConfigurationResponse);
    return static_cast<const UpdateClusterConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateClusterConfiguration \a response.
 */
void UpdateClusterConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateClusterConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateClusterConfigurationResponsePrivate
 * \brief The UpdateClusterConfigurationResponsePrivate class provides private implementation for UpdateClusterConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateClusterConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateClusterConfigurationResponsePrivate::UpdateClusterConfigurationResponsePrivate(
    UpdateClusterConfigurationResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateClusterConfiguration response element from \a xml.
 */
void UpdateClusterConfigurationResponsePrivate::parseUpdateClusterConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClusterConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
