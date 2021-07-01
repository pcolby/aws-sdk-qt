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

#include "deletegrantresponse.h"
#include "deletegrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteGrantResponse
 * \brief The DeleteGrantResponse class provides an interace for LicenseManager DeleteGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  <fullname> AWS License Manager </fullname>
 * 
 *  AWS License Manager makes it easier to manage licenses from software vendors across multiple AWS accounts and
 *  on-premises
 *
 * \sa LicenseManagerClient::deleteGrant
 */

/*!
 * Constructs a DeleteGrantResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteGrantResponse::DeleteGrantResponse(
        const DeleteGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new DeleteGrantResponsePrivate(this), parent)
{
    setRequest(new DeleteGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteGrantRequest * DeleteGrantResponse::request() const
{
    Q_D(const DeleteGrantResponse);
    return static_cast<const DeleteGrantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager DeleteGrant \a response.
 */
void DeleteGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::DeleteGrantResponsePrivate
 * \brief The DeleteGrantResponsePrivate class provides private implementation for DeleteGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteGrantResponsePrivate object with public implementation \a q.
 */
DeleteGrantResponsePrivate::DeleteGrantResponsePrivate(
    DeleteGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager DeleteGrant response element from \a xml.
 */
void DeleteGrantResponsePrivate::parseDeleteGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
