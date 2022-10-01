// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelicenseconfigurationresponse.h"
#include "deletelicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::DeleteLicenseConfigurationResponse
 * \brief The DeleteLicenseConfigurationResponse class provides an interace for LicenseManager DeleteLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::deleteLicenseConfiguration
 */

/*!
 * Constructs a DeleteLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLicenseConfigurationResponse::DeleteLicenseConfigurationResponse(
        const DeleteLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new DeleteLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLicenseConfigurationRequest * DeleteLicenseConfigurationResponse::request() const
{
    Q_D(const DeleteLicenseConfigurationResponse);
    return static_cast<const DeleteLicenseConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager DeleteLicenseConfiguration \a response.
 */
void DeleteLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::DeleteLicenseConfigurationResponsePrivate
 * \brief The DeleteLicenseConfigurationResponsePrivate class provides private implementation for DeleteLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a DeleteLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteLicenseConfigurationResponsePrivate::DeleteLicenseConfigurationResponsePrivate(
    DeleteLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager DeleteLicenseConfiguration response element from \a xml.
 */
void DeleteLicenseConfigurationResponsePrivate::parseDeleteLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
