/*
    Copyright 2013-2019 Paul Colby

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

#include "createconnectordefinitionresponse.h"
#include "createconnectordefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionResponse
 * \brief The CreateConnectorDefinitionResponse class provides an interace for Greengrass CreateConnectorDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createConnectorDefinition
 */

/*!
 * Constructs a CreateConnectorDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectorDefinitionResponse::CreateConnectorDefinitionResponse(
        const CreateConnectorDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateConnectorDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateConnectorDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectorDefinitionRequest * CreateConnectorDefinitionResponse::request() const
{
    Q_D(const CreateConnectorDefinitionResponse);
    return static_cast<const CreateConnectorDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateConnectorDefinition \a response.
 */
void CreateConnectorDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectorDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionResponsePrivate
 * \brief The CreateConnectorDefinitionResponsePrivate class provides private implementation for CreateConnectorDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateConnectorDefinitionResponsePrivate object with public implementation \a q.
 */
CreateConnectorDefinitionResponsePrivate::CreateConnectorDefinitionResponsePrivate(
    CreateConnectorDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateConnectorDefinition response element from \a xml.
 */
void CreateConnectorDefinitionResponsePrivate::parseCreateConnectorDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectorDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
