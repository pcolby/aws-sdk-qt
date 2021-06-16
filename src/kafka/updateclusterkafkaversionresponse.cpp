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
