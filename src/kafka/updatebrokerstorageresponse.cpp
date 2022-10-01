// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
