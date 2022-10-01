// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const UpdateBrokerCountResponse);
    return static_cast<const UpdateBrokerCountRequest *>(d->request);
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
