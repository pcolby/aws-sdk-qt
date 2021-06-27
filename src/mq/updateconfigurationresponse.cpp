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

#include "updateconfigurationresponse.h"
#include "updateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::UpdateConfigurationResponse
 * \brief The UpdateConfigurationResponse class provides an interace for MQ UpdateConfiguration responses.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
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
    return static_cast<const UpdateConfigurationRequest *>(MqResponse::request());
}

/*!
 * \reimp
 * Parses a successful MQ UpdateConfiguration \a response.
 */
void UpdateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MQ::UpdateConfigurationResponsePrivate
 * \brief The UpdateConfigurationResponsePrivate class provides private implementation for UpdateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a UpdateConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationResponsePrivate::UpdateConfigurationResponsePrivate(
    UpdateConfigurationResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a MQ UpdateConfiguration response element from \a xml.
 */
void UpdateConfigurationResponsePrivate::parseUpdateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MQ
} // namespace QtAws
