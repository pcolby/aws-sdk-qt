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

#include "createcoredefinitionresponse.h"
#include "createcoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionResponse
 * \brief The CreateCoreDefinitionResponse class provides an interace for Greengrass CreateCoreDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createCoreDefinition
 */

/*!
 * Constructs a CreateCoreDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCoreDefinitionResponse::CreateCoreDefinitionResponse(
        const CreateCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateCoreDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCoreDefinitionRequest * CreateCoreDefinitionResponse::request() const
{
    return static_cast<const CreateCoreDefinitionRequest *>(GreengrassResponse::request());
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateCoreDefinition \a response.
 */
void CreateCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionResponsePrivate
 * \brief The CreateCoreDefinitionResponsePrivate class provides private implementation for CreateCoreDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateCoreDefinitionResponsePrivate object with public implementation \a q.
 */
CreateCoreDefinitionResponsePrivate::CreateCoreDefinitionResponsePrivate(
    CreateCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateCoreDefinition response element from \a xml.
 */
void CreateCoreDefinitionResponsePrivate::parseCreateCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCoreDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
