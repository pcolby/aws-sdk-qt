// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlicenseconfigurationresponse.h"
#include "createlicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::CreateLicenseConfigurationResponse
 * \brief The CreateLicenseConfigurationResponse class provides an interace for LicenseManager CreateLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::createLicenseConfiguration
 */

/*!
 * Constructs a CreateLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLicenseConfigurationResponse::CreateLicenseConfigurationResponse(
        const CreateLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new CreateLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLicenseConfigurationRequest * CreateLicenseConfigurationResponse::request() const
{
    Q_D(const CreateLicenseConfigurationResponse);
    return static_cast<const CreateLicenseConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager CreateLicenseConfiguration \a response.
 */
void CreateLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::CreateLicenseConfigurationResponsePrivate
 * \brief The CreateLicenseConfigurationResponsePrivate class provides private implementation for CreateLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a CreateLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
CreateLicenseConfigurationResponsePrivate::CreateLicenseConfigurationResponsePrivate(
    CreateLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager CreateLicenseConfiguration response element from \a xml.
 */
void CreateLicenseConfigurationResponsePrivate::parseCreateLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
