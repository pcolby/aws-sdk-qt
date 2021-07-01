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

#include "createconnectordefinitionversionresponse.h"
#include "createconnectordefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionVersionResponse
 * \brief The CreateConnectorDefinitionVersionResponse class provides an interace for Greengrass CreateConnectorDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createConnectorDefinitionVersion
 */

/*!
 * Constructs a CreateConnectorDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectorDefinitionVersionResponse::CreateConnectorDefinitionVersionResponse(
        const CreateConnectorDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateConnectorDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateConnectorDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectorDefinitionVersionRequest * CreateConnectorDefinitionVersionResponse::request() const
{
    Q_D(const CreateConnectorDefinitionVersionResponse);
    return static_cast<const CreateConnectorDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateConnectorDefinitionVersion \a response.
 */
void CreateConnectorDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectorDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateConnectorDefinitionVersionResponsePrivate
 * \brief The CreateConnectorDefinitionVersionResponsePrivate class provides private implementation for CreateConnectorDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateConnectorDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateConnectorDefinitionVersionResponsePrivate::CreateConnectorDefinitionVersionResponsePrivate(
    CreateConnectorDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateConnectorDefinitionVersion response element from \a xml.
 */
void CreateConnectorDefinitionVersionResponsePrivate::parseCreateConnectorDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectorDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
