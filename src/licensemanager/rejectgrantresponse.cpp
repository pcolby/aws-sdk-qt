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

#include "rejectgrantresponse.h"
#include "rejectgrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::RejectGrantResponse
 * \brief The RejectGrantResponse class provides an interace for LicenseManager RejectGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::rejectGrant
 */

/*!
 * Constructs a RejectGrantResponse object for \a reply to \a request, with parent \a parent.
 */
RejectGrantResponse::RejectGrantResponse(
        const RejectGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new RejectGrantResponsePrivate(this), parent)
{
    setRequest(new RejectGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectGrantRequest * RejectGrantResponse::request() const
{
    return static_cast<const RejectGrantRequest *>(LicenseManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful LicenseManager RejectGrant \a response.
 */
void RejectGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::RejectGrantResponsePrivate
 * \brief The RejectGrantResponsePrivate class provides private implementation for RejectGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a RejectGrantResponsePrivate object with public implementation \a q.
 */
RejectGrantResponsePrivate::RejectGrantResponsePrivate(
    RejectGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager RejectGrant response element from \a xml.
 */
void RejectGrantResponsePrivate::parseRejectGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
