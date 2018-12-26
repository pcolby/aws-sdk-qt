/*
    Copyright 2013-2018 Paul Colby

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

#include "createdevicedefinitionversionresponse.h"
#include "createdevicedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionVersionResponse
 * \brief The CreateDeviceDefinitionVersionResponse class provides an interace for Greengrass CreateDeviceDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createDeviceDefinitionVersion
 */

/*!
 * Constructs a CreateDeviceDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeviceDefinitionVersionResponse::CreateDeviceDefinitionVersionResponse(
        const CreateDeviceDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateDeviceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeviceDefinitionVersionRequest * CreateDeviceDefinitionVersionResponse::request() const
{
    Q_D(const CreateDeviceDefinitionVersionResponse);
    return static_cast<const CreateDeviceDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateDeviceDefinitionVersion \a response.
 */
void CreateDeviceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeviceDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateDeviceDefinitionVersionResponsePrivate
 * \brief The CreateDeviceDefinitionVersionResponsePrivate class provides private implementation for CreateDeviceDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateDeviceDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateDeviceDefinitionVersionResponsePrivate::CreateDeviceDefinitionVersionResponsePrivate(
    CreateDeviceDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateDeviceDefinitionVersion response element from \a xml.
 */
void CreateDeviceDefinitionVersionResponsePrivate::parseCreateDeviceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
