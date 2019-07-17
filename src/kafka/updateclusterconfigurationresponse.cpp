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
