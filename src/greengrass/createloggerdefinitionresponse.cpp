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

#include "createloggerdefinitionresponse.h"
#include "createloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionResponse
 * \brief The CreateLoggerDefinitionResponse class provides an interace for Greengrass CreateLoggerDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createLoggerDefinition
 */

/*!
 * Constructs a CreateLoggerDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLoggerDefinitionResponse::CreateLoggerDefinitionResponse(
        const CreateLoggerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateLoggerDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLoggerDefinitionRequest * CreateLoggerDefinitionResponse::request() const
{
    return static_cast<const CreateLoggerDefinitionRequest *>(GreengrassResponse::request());
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateLoggerDefinition \a response.
 */
void CreateLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLoggerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionResponsePrivate
 * \brief The CreateLoggerDefinitionResponsePrivate class provides private implementation for CreateLoggerDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateLoggerDefinitionResponsePrivate object with public implementation \a q.
 */
CreateLoggerDefinitionResponsePrivate::CreateLoggerDefinitionResponsePrivate(
    CreateLoggerDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateLoggerDefinition response element from \a xml.
 */
void CreateLoggerDefinitionResponsePrivate::parseCreateLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoggerDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
