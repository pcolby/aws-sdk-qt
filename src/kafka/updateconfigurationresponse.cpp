// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationresponse.h"
#include "updateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateConfigurationResponse
 * \brief The UpdateConfigurationResponse class provides an interace for Kafka UpdateConfiguration responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateConfiguration
 */

/*!
 * Constructs a UpdateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationResponse::UpdateConfigurationResponse(
        const UpdateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigurationRequest * UpdateConfigurationResponse::request() const
{
    Q_D(const UpdateConfigurationResponse);
    return static_cast<const UpdateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateConfiguration \a response.
 */
void UpdateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateConfigurationResponsePrivate
 * \brief The UpdateConfigurationResponsePrivate class provides private implementation for UpdateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationResponsePrivate::UpdateConfigurationResponsePrivate(
    UpdateConfigurationResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateConfiguration response element from \a xml.
 */
void UpdateConfigurationResponsePrivate::parseUpdateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
