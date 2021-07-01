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

#include "getgroupcertificateconfigurationresponse.h"
#include "getgroupcertificateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupCertificateConfigurationResponse
 * \brief The GetGroupCertificateConfigurationResponse class provides an interace for Greengrass GetGroupCertificateConfiguration responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getGroupCertificateConfiguration
 */

/*!
 * Constructs a GetGroupCertificateConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupCertificateConfigurationResponse::GetGroupCertificateConfigurationResponse(
        const GetGroupCertificateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetGroupCertificateConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetGroupCertificateConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupCertificateConfigurationRequest * GetGroupCertificateConfigurationResponse::request() const
{
    Q_D(const GetGroupCertificateConfigurationResponse);
    return static_cast<const GetGroupCertificateConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetGroupCertificateConfiguration \a response.
 */
void GetGroupCertificateConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupCertificateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetGroupCertificateConfigurationResponsePrivate
 * \brief The GetGroupCertificateConfigurationResponsePrivate class provides private implementation for GetGroupCertificateConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetGroupCertificateConfigurationResponsePrivate object with public implementation \a q.
 */
GetGroupCertificateConfigurationResponsePrivate::GetGroupCertificateConfigurationResponsePrivate(
    GetGroupCertificateConfigurationResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetGroupCertificateConfiguration response element from \a xml.
 */
void GetGroupCertificateConfigurationResponsePrivate::parseGetGroupCertificateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupCertificateConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
