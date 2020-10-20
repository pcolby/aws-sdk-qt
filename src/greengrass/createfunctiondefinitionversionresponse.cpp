/*
    Copyright 2013-2020 Paul Colby

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

#include "createfunctiondefinitionversionresponse.h"
#include "createfunctiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionVersionResponse
 * \brief The CreateFunctionDefinitionVersionResponse class provides an interace for Greengrass CreateFunctionDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createFunctionDefinitionVersion
 */

/*!
 * Constructs a CreateFunctionDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFunctionDefinitionVersionResponse::CreateFunctionDefinitionVersionResponse(
        const CreateFunctionDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateFunctionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFunctionDefinitionVersionRequest * CreateFunctionDefinitionVersionResponse::request() const
{
    Q_D(const CreateFunctionDefinitionVersionResponse);
    return static_cast<const CreateFunctionDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateFunctionDefinitionVersion \a response.
 */
void CreateFunctionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFunctionDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateFunctionDefinitionVersionResponsePrivate
 * \brief The CreateFunctionDefinitionVersionResponsePrivate class provides private implementation for CreateFunctionDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateFunctionDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateFunctionDefinitionVersionResponsePrivate::CreateFunctionDefinitionVersionResponsePrivate(
    CreateFunctionDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateFunctionDefinitionVersion response element from \a xml.
 */
void CreateFunctionDefinitionVersionResponsePrivate::parseCreateFunctionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
