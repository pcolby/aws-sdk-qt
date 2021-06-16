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

#include "getlicenseconfigurationresponse.h"
#include "getlicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::GetLicenseConfigurationResponse
 * \brief The GetLicenseConfigurationResponse class provides an interace for LicenseManager GetLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  <i>This is the AWS License Manager API Reference.</i> It provides descriptions, syntax, and usage examples for each of
 *  the actions and data types for License Manager. The topic for each action shows the Query API request parameters and the
 *  XML response. You can also view the XML request elements in the WSDL.
 * 
 *  </p
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS SDKs</a>.
 *
 * \sa LicenseManagerClient::getLicenseConfiguration
 */

/*!
 * Constructs a GetLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetLicenseConfigurationResponse::GetLicenseConfigurationResponse(
        const GetLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new GetLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLicenseConfigurationRequest * GetLicenseConfigurationResponse::request() const
{
    Q_D(const GetLicenseConfigurationResponse);
    return static_cast<const GetLicenseConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager GetLicenseConfiguration \a response.
 */
void GetLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::GetLicenseConfigurationResponsePrivate
 * \brief The GetLicenseConfigurationResponsePrivate class provides private implementation for GetLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a GetLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
GetLicenseConfigurationResponsePrivate::GetLicenseConfigurationResponsePrivate(
    GetLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager GetLicenseConfiguration response element from \a xml.
 */
void GetLicenseConfigurationResponsePrivate::parseGetLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
