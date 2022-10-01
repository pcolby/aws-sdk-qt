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

#include "createconfigurationresponse.h"
#include "createconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::CreateConfigurationResponse
 * \brief The CreateConfigurationResponse class provides an interace for Mq CreateConfiguration responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::createConfiguration
 */

/*!
 * Constructs a CreateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationResponse::CreateConfigurationResponse(
        const CreateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new CreateConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationRequest * CreateConfigurationResponse::request() const
{
    Q_D(const CreateConfigurationResponse);
    return static_cast<const CreateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq CreateConfiguration \a response.
 */
void CreateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::CreateConfigurationResponsePrivate
 * \brief The CreateConfigurationResponsePrivate class provides private implementation for CreateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a CreateConfigurationResponsePrivate object with public implementation \a q.
 */
CreateConfigurationResponsePrivate::CreateConfigurationResponsePrivate(
    CreateConfigurationResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq CreateConfiguration response element from \a xml.
 */
void CreateConfigurationResponsePrivate::parseCreateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
