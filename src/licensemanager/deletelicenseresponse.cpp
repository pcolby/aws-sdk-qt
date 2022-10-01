// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelicenseresponse.h"
#include "deletelicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseResponse
 * \brief The DeleteLicenseResponse class provides an interace for LicenseManager DeleteLicense responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteLicense
 */

/*!
 * Constructs a DeleteLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLicenseResponse::DeleteLicenseResponse(
        const DeleteLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new DeleteLicenseResponsePrivate(this), parent)
{
    setRequest(new DeleteLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLicenseRequest * DeleteLicenseResponse::request() const
{
    Q_D(const DeleteLicenseResponse);
    return static_cast<const DeleteLicenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager DeleteLicense \a response.
 */
void DeleteLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseResponsePrivate
 * \brief The DeleteLicenseResponsePrivate class provides private implementation for DeleteLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseResponsePrivate object with public implementation \a q.
 */
DeleteLicenseResponsePrivate::DeleteLicenseResponsePrivate(
    DeleteLicenseResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager DeleteLicense response element from \a xml.
 */
void DeleteLicenseResponsePrivate::parseDeleteLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
