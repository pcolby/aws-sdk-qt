// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusageforlicenseconfigurationresponse.h"
#include "listusageforlicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListUsageForLicenseConfigurationResponse
 * \brief The ListUsageForLicenseConfigurationResponse class provides an interace for LicenseManager ListUsageForLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listUsageForLicenseConfiguration
 */

/*!
 * Constructs a ListUsageForLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ListUsageForLicenseConfigurationResponse::ListUsageForLicenseConfigurationResponse(
        const ListUsageForLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListUsageForLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new ListUsageForLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUsageForLicenseConfigurationRequest * ListUsageForLicenseConfigurationResponse::request() const
{
    Q_D(const ListUsageForLicenseConfigurationResponse);
    return static_cast<const ListUsageForLicenseConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListUsageForLicenseConfiguration \a response.
 */
void ListUsageForLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUsageForLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListUsageForLicenseConfigurationResponsePrivate
 * \brief The ListUsageForLicenseConfigurationResponsePrivate class provides private implementation for ListUsageForLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListUsageForLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
ListUsageForLicenseConfigurationResponsePrivate::ListUsageForLicenseConfigurationResponsePrivate(
    ListUsageForLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListUsageForLicenseConfiguration response element from \a xml.
 */
void ListUsageForLicenseConfigurationResponsePrivate::parseListUsageForLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsageForLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
