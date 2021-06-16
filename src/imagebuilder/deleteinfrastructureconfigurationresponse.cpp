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

#include "deleteinfrastructureconfigurationresponse.h"
#include "deleteinfrastructureconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::DeleteInfrastructureConfigurationResponse
 * \brief The DeleteInfrastructureConfigurationResponse class provides an interace for imagebuilder DeleteInfrastructureConfiguration responses.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::deleteInfrastructureConfiguration
 */

/*!
 * Constructs a DeleteInfrastructureConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInfrastructureConfigurationResponse::DeleteInfrastructureConfigurationResponse(
        const DeleteInfrastructureConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : imagebuilderResponse(new DeleteInfrastructureConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteInfrastructureConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInfrastructureConfigurationRequest * DeleteInfrastructureConfigurationResponse::request() const
{
    Q_D(const DeleteInfrastructureConfigurationResponse);
    return static_cast<const DeleteInfrastructureConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful imagebuilder DeleteInfrastructureConfiguration \a response.
 */
void DeleteInfrastructureConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInfrastructureConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::imagebuilder::DeleteInfrastructureConfigurationResponsePrivate
 * \brief The DeleteInfrastructureConfigurationResponsePrivate class provides private implementation for DeleteInfrastructureConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a DeleteInfrastructureConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteInfrastructureConfigurationResponsePrivate::DeleteInfrastructureConfigurationResponsePrivate(
    DeleteInfrastructureConfigurationResponse * const q) : imagebuilderResponsePrivate(q)
{

}

/*!
 * Parses a imagebuilder DeleteInfrastructureConfiguration response element from \a xml.
 */
void DeleteInfrastructureConfigurationResponsePrivate::parseDeleteInfrastructureConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInfrastructureConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace imagebuilder
} // namespace QtAws
