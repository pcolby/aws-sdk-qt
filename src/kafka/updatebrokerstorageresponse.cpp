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

#include "updatebrokerstorageresponse.h"
#include "updatebrokerstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateBrokerStorageResponse
 * \brief The UpdateBrokerStorageResponse class provides an interace for Kafka UpdateBrokerStorage responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateBrokerStorage
 */

/*!
 * Constructs a UpdateBrokerStorageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBrokerStorageResponse::UpdateBrokerStorageResponse(
        const UpdateBrokerStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateBrokerStorageResponsePrivate(this), parent)
{
    setRequest(new UpdateBrokerStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBrokerStorageRequest * UpdateBrokerStorageResponse::request() const
{
    Q_D(const UpdateBrokerStorageResponse);
    return static_cast<const UpdateBrokerStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateBrokerStorage \a response.
 */
void UpdateBrokerStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBrokerStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateBrokerStorageResponsePrivate
 * \brief The UpdateBrokerStorageResponsePrivate class provides private implementation for UpdateBrokerStorageResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateBrokerStorageResponsePrivate object with public implementation \a q.
 */
UpdateBrokerStorageResponsePrivate::UpdateBrokerStorageResponsePrivate(
    UpdateBrokerStorageResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateBrokerStorage response element from \a xml.
 */
void UpdateBrokerStorageResponsePrivate::parseUpdateBrokerStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBrokerStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
