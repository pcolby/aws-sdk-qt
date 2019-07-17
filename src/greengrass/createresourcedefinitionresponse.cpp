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

#include "createresourcedefinitionresponse.h"
#include "createresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionResponse
 * \brief The CreateResourceDefinitionResponse class provides an interace for Greengrass CreateResourceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createResourceDefinition
 */

/*!
 * Constructs a CreateResourceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceDefinitionResponse::CreateResourceDefinitionResponse(
        const CreateResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateResourceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceDefinitionRequest * CreateResourceDefinitionResponse::request() const
{
    Q_D(const CreateResourceDefinitionResponse);
    return static_cast<const CreateResourceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateResourceDefinition \a response.
 */
void CreateResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionResponsePrivate
 * \brief The CreateResourceDefinitionResponsePrivate class provides private implementation for CreateResourceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateResourceDefinitionResponsePrivate object with public implementation \a q.
 */
CreateResourceDefinitionResponsePrivate::CreateResourceDefinitionResponsePrivate(
    CreateResourceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateResourceDefinition response element from \a xml.
 */
void CreateResourceDefinitionResponsePrivate::parseCreateResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
