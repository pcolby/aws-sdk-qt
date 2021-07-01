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

#include "createinfrastructureconfigurationresponse.h"
#include "createinfrastructureconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CreateInfrastructureConfigurationResponse
 * \brief The CreateInfrastructureConfigurationResponse class provides an interace for imagebuilder CreateInfrastructureConfiguration responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::createInfrastructureConfiguration
 */

/*!
 * Constructs a CreateInfrastructureConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInfrastructureConfigurationResponse::CreateInfrastructureConfigurationResponse(
        const CreateInfrastructureConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new CreateInfrastructureConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateInfrastructureConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInfrastructureConfigurationRequest * CreateInfrastructureConfigurationResponse::request() const
{
    Q_D(const CreateInfrastructureConfigurationResponse);
    return static_cast<const CreateInfrastructureConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder CreateInfrastructureConfiguration \a response.
 */
void CreateInfrastructureConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInfrastructureConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::CreateInfrastructureConfigurationResponsePrivate
 * \brief The CreateInfrastructureConfigurationResponsePrivate class provides private implementation for CreateInfrastructureConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CreateInfrastructureConfigurationResponsePrivate object with public implementation \a q.
 */
CreateInfrastructureConfigurationResponsePrivate::CreateInfrastructureConfigurationResponsePrivate(
    CreateInfrastructureConfigurationResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder CreateInfrastructureConfiguration response element from \a xml.
 */
void CreateInfrastructureConfigurationResponsePrivate::parseCreateInfrastructureConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInfrastructureConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
