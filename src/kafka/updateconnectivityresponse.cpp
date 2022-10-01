// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectivityresponse.h"
#include "updateconnectivityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateConnectivityResponse
 * \brief The UpdateConnectivityResponse class provides an interace for Kafka UpdateConnectivity responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateConnectivity
 */

/*!
 * Constructs a UpdateConnectivityResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectivityResponse::UpdateConnectivityResponse(
        const UpdateConnectivityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateConnectivityResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectivityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectivityRequest * UpdateConnectivityResponse::request() const
{
    Q_D(const UpdateConnectivityResponse);
    return static_cast<const UpdateConnectivityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateConnectivity \a response.
 */
void UpdateConnectivityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectivityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateConnectivityResponsePrivate
 * \brief The UpdateConnectivityResponsePrivate class provides private implementation for UpdateConnectivityResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateConnectivityResponsePrivate object with public implementation \a q.
 */
UpdateConnectivityResponsePrivate::UpdateConnectivityResponsePrivate(
    UpdateConnectivityResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateConnectivity response element from \a xml.
 */
void UpdateConnectivityResponsePrivate::parseUpdateConnectivityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectivityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
