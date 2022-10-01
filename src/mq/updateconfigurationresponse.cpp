// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationresponse.h"
#include "updateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::UpdateConfigurationResponse
 * \brief The UpdateConfigurationResponse class provides an interace for Mq UpdateConfiguration responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::updateConfiguration
 */

/*!
 * Constructs a UpdateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationResponse::UpdateConfigurationResponse(
        const UpdateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new UpdateConfigurationResponsePrivate(this), parent)
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
 * Parses a successful Mq UpdateConfiguration \a response.
 */
void UpdateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::UpdateConfigurationResponsePrivate
 * \brief The UpdateConfigurationResponsePrivate class provides private implementation for UpdateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a UpdateConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationResponsePrivate::UpdateConfigurationResponsePrivate(
    UpdateConfigurationResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq UpdateConfiguration response element from \a xml.
 */
void UpdateConfigurationResponsePrivate::parseUpdateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
