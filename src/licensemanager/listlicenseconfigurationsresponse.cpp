// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlicenseconfigurationsresponse.h"
#include "listlicenseconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseConfigurationsResponse
 * \brief The ListLicenseConfigurationsResponse class provides an interace for LicenseManager ListLicenseConfigurations responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenseConfigurations
 */

/*!
 * Constructs a ListLicenseConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLicenseConfigurationsResponse::ListLicenseConfigurationsResponse(
        const ListLicenseConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListLicenseConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListLicenseConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLicenseConfigurationsRequest * ListLicenseConfigurationsResponse::request() const
{
    Q_D(const ListLicenseConfigurationsResponse);
    return static_cast<const ListLicenseConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListLicenseConfigurations \a response.
 */
void ListLicenseConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLicenseConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListLicenseConfigurationsResponsePrivate
 * \brief The ListLicenseConfigurationsResponsePrivate class provides private implementation for ListLicenseConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseConfigurationsResponsePrivate object with public implementation \a q.
 */
ListLicenseConfigurationsResponsePrivate::ListLicenseConfigurationsResponsePrivate(
    ListLicenseConfigurationsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListLicenseConfigurations response element from \a xml.
 */
void ListLicenseConfigurationsResponsePrivate::parseListLicenseConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLicenseConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
