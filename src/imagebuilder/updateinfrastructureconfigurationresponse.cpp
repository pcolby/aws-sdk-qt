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

#include "updateinfrastructureconfigurationresponse.h"
#include "updateinfrastructureconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::UpdateInfrastructureConfigurationResponse
 * \brief The UpdateInfrastructureConfigurationResponse class provides an interace for ImageBuilder UpdateInfrastructureConfiguration responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::updateInfrastructureConfiguration
 */

/*!
 * Constructs a UpdateInfrastructureConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInfrastructureConfigurationResponse::UpdateInfrastructureConfigurationResponse(
        const UpdateInfrastructureConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new UpdateInfrastructureConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateInfrastructureConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInfrastructureConfigurationRequest * UpdateInfrastructureConfigurationResponse::request() const
{
    Q_D(const UpdateInfrastructureConfigurationResponse);
    return static_cast<const UpdateInfrastructureConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder UpdateInfrastructureConfiguration \a response.
 */
void UpdateInfrastructureConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInfrastructureConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::UpdateInfrastructureConfigurationResponsePrivate
 * \brief The UpdateInfrastructureConfigurationResponsePrivate class provides private implementation for UpdateInfrastructureConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a UpdateInfrastructureConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateInfrastructureConfigurationResponsePrivate::UpdateInfrastructureConfigurationResponsePrivate(
    UpdateInfrastructureConfigurationResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder UpdateInfrastructureConfiguration response element from \a xml.
 */
void UpdateInfrastructureConfigurationResponsePrivate::parseUpdateInfrastructureConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInfrastructureConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
