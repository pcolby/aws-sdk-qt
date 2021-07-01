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

#include "updatelicensespecificationsforresourceresponse.h"
#include "updatelicensespecificationsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::UpdateLicenseSpecificationsForResourceResponse
 * \brief The UpdateLicenseSpecificationsForResourceResponse class provides an interace for LicenseManager UpdateLicenseSpecificationsForResource responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::updateLicenseSpecificationsForResource
 */

/*!
 * Constructs a UpdateLicenseSpecificationsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLicenseSpecificationsForResourceResponse::UpdateLicenseSpecificationsForResourceResponse(
        const UpdateLicenseSpecificationsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new UpdateLicenseSpecificationsForResourceResponsePrivate(this), parent)
{
    setRequest(new UpdateLicenseSpecificationsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLicenseSpecificationsForResourceRequest * UpdateLicenseSpecificationsForResourceResponse::request() const
{
    Q_D(const UpdateLicenseSpecificationsForResourceResponse);
    return static_cast<const UpdateLicenseSpecificationsForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager UpdateLicenseSpecificationsForResource \a response.
 */
void UpdateLicenseSpecificationsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLicenseSpecificationsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::UpdateLicenseSpecificationsForResourceResponsePrivate
 * \brief The UpdateLicenseSpecificationsForResourceResponsePrivate class provides private implementation for UpdateLicenseSpecificationsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a UpdateLicenseSpecificationsForResourceResponsePrivate object with public implementation \a q.
 */
UpdateLicenseSpecificationsForResourceResponsePrivate::UpdateLicenseSpecificationsForResourceResponsePrivate(
    UpdateLicenseSpecificationsForResourceResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager UpdateLicenseSpecificationsForResource response element from \a xml.
 */
void UpdateLicenseSpecificationsForResourceResponsePrivate::parseUpdateLicenseSpecificationsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLicenseSpecificationsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
