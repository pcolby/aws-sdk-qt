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

#include "createcoredefinitionversionresponse.h"
#include "createcoredefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionVersionResponse
 * \brief The CreateCoreDefinitionVersionResponse class provides an interace for Greengrass CreateCoreDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createCoreDefinitionVersion
 */

/*!
 * Constructs a CreateCoreDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCoreDefinitionVersionResponse::CreateCoreDefinitionVersionResponse(
        const CreateCoreDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateCoreDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateCoreDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCoreDefinitionVersionRequest * CreateCoreDefinitionVersionResponse::request() const
{
    Q_D(const CreateCoreDefinitionVersionResponse);
    return static_cast<const CreateCoreDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateCoreDefinitionVersion \a response.
 */
void CreateCoreDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCoreDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateCoreDefinitionVersionResponsePrivate
 * \brief The CreateCoreDefinitionVersionResponsePrivate class provides private implementation for CreateCoreDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateCoreDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateCoreDefinitionVersionResponsePrivate::CreateCoreDefinitionVersionResponsePrivate(
    CreateCoreDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateCoreDefinitionVersion response element from \a xml.
 */
void CreateCoreDefinitionVersionResponsePrivate::parseCreateCoreDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCoreDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
