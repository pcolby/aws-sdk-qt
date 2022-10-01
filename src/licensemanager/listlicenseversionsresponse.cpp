// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlicenseversionsresponse.h"
#include "listlicenseversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseVersionsResponse
 * \brief The ListLicenseVersionsResponse class provides an interace for LicenseManager ListLicenseVersions responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenseVersions
 */

/*!
 * Constructs a ListLicenseVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLicenseVersionsResponse::ListLicenseVersionsResponse(
        const ListLicenseVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListLicenseVersionsResponsePrivate(this), parent)
{
    setRequest(new ListLicenseVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLicenseVersionsRequest * ListLicenseVersionsResponse::request() const
{
    Q_D(const ListLicenseVersionsResponse);
    return static_cast<const ListLicenseVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListLicenseVersions \a response.
 */
void ListLicenseVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLicenseVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListLicenseVersionsResponsePrivate
 * \brief The ListLicenseVersionsResponsePrivate class provides private implementation for ListLicenseVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseVersionsResponsePrivate object with public implementation \a q.
 */
ListLicenseVersionsResponsePrivate::ListLicenseVersionsResponsePrivate(
    ListLicenseVersionsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListLicenseVersions response element from \a xml.
 */
void ListLicenseVersionsResponsePrivate::parseListLicenseVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLicenseVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
