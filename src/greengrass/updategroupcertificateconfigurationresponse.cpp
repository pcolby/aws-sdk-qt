/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updategroupcertificateconfigurationresponse.h"
#include "updategroupcertificateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateGroupCertificateConfigurationResponse
 * \brief The UpdateGroupCertificateConfigurationResponse class provides an interace for Greengrass UpdateGroupCertificateConfiguration responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::updateGroupCertificateConfiguration
 */

/*!
 * Constructs a UpdateGroupCertificateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGroupCertificateConfigurationResponse::UpdateGroupCertificateConfigurationResponse(
        const UpdateGroupCertificateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateGroupCertificateConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateGroupCertificateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGroupCertificateConfigurationRequest * UpdateGroupCertificateConfigurationResponse::request() const
{
    Q_D(const UpdateGroupCertificateConfigurationResponse);
    return static_cast<const UpdateGroupCertificateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateGroupCertificateConfiguration \a response.
 */
void UpdateGroupCertificateConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateGroupCertificateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateGroupCertificateConfigurationResponsePrivate
 * \brief The UpdateGroupCertificateConfigurationResponsePrivate class provides private implementation for UpdateGroupCertificateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateGroupCertificateConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateGroupCertificateConfigurationResponsePrivate::UpdateGroupCertificateConfigurationResponsePrivate(
    UpdateGroupCertificateConfigurationResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateGroupCertificateConfiguration response element from \a xml.
 */
void UpdateGroupCertificateConfigurationResponsePrivate::parseUpdateGroupCertificateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGroupCertificateConfigurationResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
