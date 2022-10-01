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

#include "createcustompluginresponse.h"
#include "createcustompluginresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::CreateCustomPluginResponse
 * \brief The CreateCustomPluginResponse class provides an interace for KafkaConnect CreateCustomPlugin responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::createCustomPlugin
 */

/*!
 * Constructs a CreateCustomPluginResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCustomPluginResponse::CreateCustomPluginResponse(
        const CreateCustomPluginRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new CreateCustomPluginResponsePrivate(this), parent)
{
    setRequest(new CreateCustomPluginRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCustomPluginRequest * CreateCustomPluginResponse::request() const
{
    Q_D(const CreateCustomPluginResponse);
    return static_cast<const CreateCustomPluginRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect CreateCustomPlugin \a response.
 */
void CreateCustomPluginResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCustomPluginResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::CreateCustomPluginResponsePrivate
 * \brief The CreateCustomPluginResponsePrivate class provides private implementation for CreateCustomPluginResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a CreateCustomPluginResponsePrivate object with public implementation \a q.
 */
CreateCustomPluginResponsePrivate::CreateCustomPluginResponsePrivate(
    CreateCustomPluginResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect CreateCustomPlugin response element from \a xml.
 */
void CreateCustomPluginResponsePrivate::parseCreateCustomPluginResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomPluginResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
