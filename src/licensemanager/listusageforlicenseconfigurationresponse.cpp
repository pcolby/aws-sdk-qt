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

#include "listusageforlicenseconfigurationresponse.h"
#include "listusageforlicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListUsageForLicenseConfigurationResponse
 * \brief The ListUsageForLicenseConfigurationResponse class provides an interace for LicenseManager ListUsageForLicenseConfiguration responses.
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
 * \sa LicenseManagerClient::listUsageForLicenseConfiguration
 */

/*!
 * Constructs a ListUsageForLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ListUsageForLicenseConfigurationResponse::ListUsageForLicenseConfigurationResponse(
        const ListUsageForLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListUsageForLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new ListUsageForLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUsageForLicenseConfigurationRequest * ListUsageForLicenseConfigurationResponse::request() const
{
    Q_D(const ListUsageForLicenseConfigurationResponse);
    return static_cast<const ListUsageForLicenseConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListUsageForLicenseConfiguration \a response.
 */
void ListUsageForLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUsageForLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListUsageForLicenseConfigurationResponsePrivate
 * \brief The ListUsageForLicenseConfigurationResponsePrivate class provides private implementation for ListUsageForLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListUsageForLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
ListUsageForLicenseConfigurationResponsePrivate::ListUsageForLicenseConfigurationResponsePrivate(
    ListUsageForLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListUsageForLicenseConfiguration response element from \a xml.
 */
void ListUsageForLicenseConfigurationResponsePrivate::parseListUsageForLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsageForLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
