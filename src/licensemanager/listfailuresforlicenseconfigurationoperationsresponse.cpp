// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfailuresforlicenseconfigurationoperationsresponse.h"
#include "listfailuresforlicenseconfigurationoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListFailuresForLicenseConfigurationOperationsResponse
 * \brief The ListFailuresForLicenseConfigurationOperationsResponse class provides an interace for LicenseManager ListFailuresForLicenseConfigurationOperations responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listFailuresForLicenseConfigurationOperations
 */

/*!
 * Constructs a ListFailuresForLicenseConfigurationOperationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFailuresForLicenseConfigurationOperationsResponse::ListFailuresForLicenseConfigurationOperationsResponse(
        const ListFailuresForLicenseConfigurationOperationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListFailuresForLicenseConfigurationOperationsResponsePrivate(this), parent)
{
    setRequest(new ListFailuresForLicenseConfigurationOperationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFailuresForLicenseConfigurationOperationsRequest * ListFailuresForLicenseConfigurationOperationsResponse::request() const
{
    Q_D(const ListFailuresForLicenseConfigurationOperationsResponse);
    return static_cast<const ListFailuresForLicenseConfigurationOperationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListFailuresForLicenseConfigurationOperations \a response.
 */
void ListFailuresForLicenseConfigurationOperationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFailuresForLicenseConfigurationOperationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListFailuresForLicenseConfigurationOperationsResponsePrivate
 * \brief The ListFailuresForLicenseConfigurationOperationsResponsePrivate class provides private implementation for ListFailuresForLicenseConfigurationOperationsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListFailuresForLicenseConfigurationOperationsResponsePrivate object with public implementation \a q.
 */
ListFailuresForLicenseConfigurationOperationsResponsePrivate::ListFailuresForLicenseConfigurationOperationsResponsePrivate(
    ListFailuresForLicenseConfigurationOperationsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListFailuresForLicenseConfigurationOperations response element from \a xml.
 */
void ListFailuresForLicenseConfigurationOperationsResponsePrivate::parseListFailuresForLicenseConfigurationOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFailuresForLicenseConfigurationOperationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
