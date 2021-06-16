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

#include "listfailuresforlicenseconfigurationoperationsresponse.h"
#include "listfailuresforlicenseconfigurationoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListFailuresForLicenseConfigurationOperationsResponse
 * \brief The ListFailuresForLicenseConfigurationOperationsResponse class provides an interace for LicenseManager ListFailuresForLicenseConfigurationOperations responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::listFailuresForLicenseConfigurationOperations
 */

/*!
 * Constructs a ListFailuresForLicenseConfigurationOperationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFailuresForLicenseConfigurationOperationsResponse::ListFailuresForLicenseConfigurationOperationsResponse(
        const ListFailuresForLicenseConfigurationOperationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListFailuresForLicenseConfigurationOperationsResponsePrivate(this), parent)
{
    setRequest(new ListFailuresForLicenseConfigurationOperationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFailuresForLicenseConfigurationOperationsRequest * ListFailuresForLicenseConfigurationOperationsResponse::request() const
{
    Q_D(const ListFailuresForLicenseConfigurationOperationsResponse);
    return static_cast<const ListFailuresForLicenseConfigurationOperationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListFailuresForLicenseConfigurationOperations \a response.
 */
void ListFailuresForLicenseConfigurationOperationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFailuresForLicenseConfigurationOperationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListFailuresForLicenseConfigurationOperationsResponsePrivate
 * \brief The ListFailuresForLicenseConfigurationOperationsResponsePrivate class provides private implementation for ListFailuresForLicenseConfigurationOperationsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListFailuresForLicenseConfigurationOperationsResponsePrivate object with public implementation \a q.
 */
ListFailuresForLicenseConfigurationOperationsResponsePrivate::ListFailuresForLicenseConfigurationOperationsResponsePrivate(
    ListFailuresForLicenseConfigurationOperationsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListFailuresForLicenseConfigurationOperations response element from \a xml.
 */
void ListFailuresForLicenseConfigurationOperationsResponsePrivate::parseListFailuresForLicenseConfigurationOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFailuresForLicenseConfigurationOperationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
