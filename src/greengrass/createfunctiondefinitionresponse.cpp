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

#include "createfunctiondefinitionresponse.h"
#include "createfunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionResponse
 * \brief The CreateFunctionDefinitionResponse class provides an interace for Greengrass CreateFunctionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createFunctionDefinition
 */

/*!
 * Constructs a CreateFunctionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFunctionDefinitionResponse::CreateFunctionDefinitionResponse(
        const CreateFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFunctionDefinitionRequest * CreateFunctionDefinitionResponse::request() const
{
    Q_D(const CreateFunctionDefinitionResponse);
    return static_cast<const CreateFunctionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateFunctionDefinition \a response.
 */
void CreateFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFunctionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionResponsePrivate
 * \brief The CreateFunctionDefinitionResponsePrivate class provides private implementation for CreateFunctionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateFunctionDefinitionResponsePrivate object with public implementation \a q.
 */
CreateFunctionDefinitionResponsePrivate::CreateFunctionDefinitionResponsePrivate(
    CreateFunctionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateFunctionDefinition response element from \a xml.
 */
void CreateFunctionDefinitionResponsePrivate::parseCreateFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
