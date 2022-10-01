// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlicenseversionresponse.h"
#include "createlicenseversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseVersionResponse
 * \brief The CreateLicenseVersionResponse class provides an interace for LicenseManager CreateLicenseVersion responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicenseVersion
 */

/*!
 * Constructs a CreateLicenseVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLicenseVersionResponse::CreateLicenseVersionResponse(
        const CreateLicenseVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateLicenseVersionResponsePrivate(this), parent)
{
    setRequest(new CreateLicenseVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLicenseVersionRequest * CreateLicenseVersionResponse::request() const
{
    Q_D(const CreateLicenseVersionResponse);
    return static_cast<const CreateLicenseVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateLicenseVersion \a response.
 */
void CreateLicenseVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLicenseVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseVersionResponsePrivate
 * \brief The CreateLicenseVersionResponsePrivate class provides private implementation for CreateLicenseVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseVersionResponsePrivate object with public implementation \a q.
 */
CreateLicenseVersionResponsePrivate::CreateLicenseVersionResponsePrivate(
    CreateLicenseVersionResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateLicenseVersion response element from \a xml.
 */
void CreateLicenseVersionResponsePrivate::parseCreateLicenseVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLicenseVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
