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

#include "updatebrokertyperesponse.h"
#include "updatebrokertyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateBrokerTypeResponse
 * \brief The UpdateBrokerTypeResponse class provides an interace for Kafka UpdateBrokerType responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateBrokerType
 */

/*!
 * Constructs a UpdateBrokerTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBrokerTypeResponse::UpdateBrokerTypeResponse(
        const UpdateBrokerTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateBrokerTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateBrokerTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBrokerTypeRequest * UpdateBrokerTypeResponse::request() const
{
    return static_cast<const UpdateBrokerTypeRequest *>(KafkaResponse::request());
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateBrokerType \a response.
 */
void UpdateBrokerTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBrokerTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateBrokerTypeResponsePrivate
 * \brief The UpdateBrokerTypeResponsePrivate class provides private implementation for UpdateBrokerTypeResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateBrokerTypeResponsePrivate object with public implementation \a q.
 */
UpdateBrokerTypeResponsePrivate::UpdateBrokerTypeResponsePrivate(
    UpdateBrokerTypeResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateBrokerType response element from \a xml.
 */
void UpdateBrokerTypeResponsePrivate::parseUpdateBrokerTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBrokerTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
