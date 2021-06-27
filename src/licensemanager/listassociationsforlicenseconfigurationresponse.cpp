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

#include "listassociationsforlicenseconfigurationresponse.h"
#include "listassociationsforlicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListAssociationsForLicenseConfigurationResponse
 * \brief The ListAssociationsForLicenseConfigurationResponse class provides an interace for LicenseManager ListAssociationsForLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listAssociationsForLicenseConfiguration
 */

/*!
 * Constructs a ListAssociationsForLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociationsForLicenseConfigurationResponse::ListAssociationsForLicenseConfigurationResponse(
        const ListAssociationsForLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListAssociationsForLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new ListAssociationsForLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociationsForLicenseConfigurationRequest * ListAssociationsForLicenseConfigurationResponse::request() const
{
    return static_cast<const ListAssociationsForLicenseConfigurationRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListAssociationsForLicenseConfiguration \a response.
 */
void ListAssociationsForLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociationsForLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListAssociationsForLicenseConfigurationResponsePrivate
 * \brief The ListAssociationsForLicenseConfigurationResponsePrivate class provides private implementation for ListAssociationsForLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListAssociationsForLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
ListAssociationsForLicenseConfigurationResponsePrivate::ListAssociationsForLicenseConfigurationResponsePrivate(
    ListAssociationsForLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListAssociationsForLicenseConfiguration response element from \a xml.
 */
void ListAssociationsForLicenseConfigurationResponsePrivate::parseListAssociationsForLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociationsForLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
