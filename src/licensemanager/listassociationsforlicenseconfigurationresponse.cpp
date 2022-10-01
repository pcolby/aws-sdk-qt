// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassociationsforlicenseconfigurationresponse.h"
#include "listassociationsforlicenseconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListAssociationsForLicenseConfigurationResponse
 * \brief The ListAssociationsForLicenseConfigurationResponse class provides an interace for LicenseManager ListAssociationsForLicenseConfiguration responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listAssociationsForLicenseConfiguration
 */

/*!
 * Constructs a ListAssociationsForLicenseConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssociationsForLicenseConfigurationResponse::ListAssociationsForLicenseConfigurationResponse(
        const ListAssociationsForLicenseConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListAssociationsForLicenseConfigurationResponsePrivate(this), parent)
{
    setRequest(new ListAssociationsForLicenseConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssociationsForLicenseConfigurationRequest * ListAssociationsForLicenseConfigurationResponse::request() const
{
    Q_D(const ListAssociationsForLicenseConfigurationResponse);
    return static_cast<const ListAssociationsForLicenseConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListAssociationsForLicenseConfiguration \a response.
 */
void ListAssociationsForLicenseConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssociationsForLicenseConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListAssociationsForLicenseConfigurationResponsePrivate
 * \brief The ListAssociationsForLicenseConfigurationResponsePrivate class provides private implementation for ListAssociationsForLicenseConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListAssociationsForLicenseConfigurationResponsePrivate object with public implementation \a q.
 */
ListAssociationsForLicenseConfigurationResponsePrivate::ListAssociationsForLicenseConfigurationResponsePrivate(
    ListAssociationsForLicenseConfigurationResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListAssociationsForLicenseConfiguration response element from \a xml.
 */
void ListAssociationsForLicenseConfigurationResponsePrivate::parseListAssociationsForLicenseConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociationsForLicenseConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
