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

#include "acceptgrantresponse.h"
#include "acceptgrantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::AcceptGrantResponse
 * \brief The AcceptGrantResponse class provides an interace for LicenseManager AcceptGrant responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::acceptGrant
 */

/*!
 * Constructs a AcceptGrantResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptGrantResponse::AcceptGrantResponse(
        const AcceptGrantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new AcceptGrantResponsePrivate(this), parent)
{
    setRequest(new AcceptGrantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptGrantRequest * AcceptGrantResponse::request() const
{
    Q_D(const AcceptGrantResponse);
    return static_cast<const AcceptGrantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager AcceptGrant \a response.
 */
void AcceptGrantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptGrantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::AcceptGrantResponsePrivate
 * \brief The AcceptGrantResponsePrivate class provides private implementation for AcceptGrantResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a AcceptGrantResponsePrivate object with public implementation \a q.
 */
AcceptGrantResponsePrivate::AcceptGrantResponsePrivate(
    AcceptGrantResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager AcceptGrant response element from \a xml.
 */
void AcceptGrantResponsePrivate::parseAcceptGrantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptGrantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
