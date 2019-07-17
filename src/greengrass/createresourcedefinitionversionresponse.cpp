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

#include "createresourcedefinitionversionresponse.h"
#include "createresourcedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionVersionResponse
 * \brief The CreateResourceDefinitionVersionResponse class provides an interace for Greengrass CreateResourceDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createResourceDefinitionVersion
 */

/*!
 * Constructs a CreateResourceDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceDefinitionVersionResponse::CreateResourceDefinitionVersionResponse(
        const CreateResourceDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateResourceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateResourceDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceDefinitionVersionRequest * CreateResourceDefinitionVersionResponse::request() const
{
    Q_D(const CreateResourceDefinitionVersionResponse);
    return static_cast<const CreateResourceDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateResourceDefinitionVersion \a response.
 */
void CreateResourceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateResourceDefinitionVersionResponsePrivate
 * \brief The CreateResourceDefinitionVersionResponsePrivate class provides private implementation for CreateResourceDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateResourceDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateResourceDefinitionVersionResponsePrivate::CreateResourceDefinitionVersionResponsePrivate(
    CreateResourceDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateResourceDefinitionVersion response element from \a xml.
 */
void CreateResourceDefinitionVersionResponsePrivate::parseCreateResourceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
