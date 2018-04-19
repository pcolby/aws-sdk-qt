/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createdevicedefinitionresponse.h"
#include "createdevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionResponse
 * \brief The CreateDeviceDefinitionResponse class provides an interace for Greengrass CreateDeviceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createDeviceDefinition
 */

/*!
 * Constructs a CreateDeviceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeviceDefinitionResponse::CreateDeviceDefinitionResponse(
        const CreateDeviceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeviceDefinitionRequest * CreateDeviceDefinitionResponse::request() const
{
    Q_D(const CreateDeviceDefinitionResponse);
    return static_cast<const CreateDeviceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateDeviceDefinition \a response.
 */
void CreateDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDeviceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionResponsePrivate
 * \brief The CreateDeviceDefinitionResponsePrivate class provides private implementation for CreateDeviceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateDeviceDefinitionResponsePrivate object with public implementation \a q.
 */
CreateDeviceDefinitionResponsePrivate::CreateDeviceDefinitionResponsePrivate(
    CreateDeviceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateDeviceDefinition response element from \a xml.
 */
void CreateDeviceDefinitionResponsePrivate::parseCreateDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
