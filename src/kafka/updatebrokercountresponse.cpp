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

#include "updatebrokercountresponse.h"
#include "updatebrokercountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateBrokerCountResponse
 * \brief The UpdateBrokerCountResponse class provides an interace for Kafka UpdateBrokerCount responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateBrokerCount
 */

/*!
 * Constructs a UpdateBrokerCountResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBrokerCountResponse::UpdateBrokerCountResponse(
        const UpdateBrokerCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateBrokerCountResponsePrivate(this), parent)
{
    setRequest(new UpdateBrokerCountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBrokerCountRequest * UpdateBrokerCountResponse::request() const
{
    return static_cast<const UpdateBrokerCountRequest *>(KafkaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateBrokerCount \a response.
 */
void UpdateBrokerCountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBrokerCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateBrokerCountResponsePrivate
 * \brief The UpdateBrokerCountResponsePrivate class provides private implementation for UpdateBrokerCountResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateBrokerCountResponsePrivate object with public implementation \a q.
 */
UpdateBrokerCountResponsePrivate::UpdateBrokerCountResponsePrivate(
    UpdateBrokerCountResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateBrokerCount response element from \a xml.
 */
void UpdateBrokerCountResponsePrivate::parseUpdateBrokerCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBrokerCountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
