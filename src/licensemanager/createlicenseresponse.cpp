// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlicenseresponse.h"
#include "createlicenseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseResponse
 * \brief The CreateLicenseResponse class provides an interace for LicenseManager CreateLicense responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicense
 */

/*!
 * Constructs a CreateLicenseResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLicenseResponse::CreateLicenseResponse(
        const CreateLicenseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateLicenseResponsePrivate(this), parent)
{
    setRequest(new CreateLicenseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLicenseRequest * CreateLicenseResponse::request() const
{
    Q_D(const CreateLicenseResponse);
    return static_cast<const CreateLicenseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateLicense \a response.
 */
void CreateLicenseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLicenseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseResponsePrivate
 * \brief The CreateLicenseResponsePrivate class provides private implementation for CreateLicenseResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseResponsePrivate object with public implementation \a q.
 */
CreateLicenseResponsePrivate::CreateLicenseResponsePrivate(
    CreateLicenseResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateLicense response element from \a xml.
 */
void CreateLicenseResponsePrivate::parseCreateLicenseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLicenseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
