// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const UpdateBrokerTypeResponse);
    return static_cast<const UpdateBrokerTypeRequest *>(d->request);
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
