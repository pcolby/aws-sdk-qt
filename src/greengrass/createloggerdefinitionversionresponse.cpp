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

#include "createloggerdefinitionversionresponse.h"
#include "createloggerdefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionVersionResponse
 * \brief The CreateLoggerDefinitionVersionResponse class provides an interace for Greengrass CreateLoggerDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createLoggerDefinitionVersion
 */

/*!
 * Constructs a CreateLoggerDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLoggerDefinitionVersionResponse::CreateLoggerDefinitionVersionResponse(
        const CreateLoggerDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateLoggerDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateLoggerDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLoggerDefinitionVersionRequest * CreateLoggerDefinitionVersionResponse::request() const
{
    Q_D(const CreateLoggerDefinitionVersionResponse);
    return static_cast<const CreateLoggerDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateLoggerDefinitionVersion \a response.
 */
void CreateLoggerDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateLoggerDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateLoggerDefinitionVersionResponsePrivate
 * \brief The CreateLoggerDefinitionVersionResponsePrivate class provides private implementation for CreateLoggerDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateLoggerDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateLoggerDefinitionVersionResponsePrivate::CreateLoggerDefinitionVersionResponsePrivate(
    CreateLoggerDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateLoggerDefinitionVersion response element from \a xml.
 */
void CreateLoggerDefinitionVersionResponsePrivate::parseCreateLoggerDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoggerDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
