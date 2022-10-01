// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlicensespecificationsforresourceresponse.h"
#include "listlicensespecificationsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListLicenseSpecificationsForResourceResponse
 * \brief The ListLicenseSpecificationsForResourceResponse class provides an interace for LicenseManager ListLicenseSpecificationsForResource responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listLicenseSpecificationsForResource
 */

/*!
 * Constructs a ListLicenseSpecificationsForResourceResponse object for \a reply to \a request, with parent \a parent.
 */
ListLicenseSpecificationsForResourceResponse::ListLicenseSpecificationsForResourceResponse(
        const ListLicenseSpecificationsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListLicenseSpecificationsForResourceResponsePrivate(this), parent)
{
    setRequest(new ListLicenseSpecificationsForResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLicenseSpecificationsForResourceRequest * ListLicenseSpecificationsForResourceResponse::request() const
{
    Q_D(const ListLicenseSpecificationsForResourceResponse);
    return static_cast<const ListLicenseSpecificationsForResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListLicenseSpecificationsForResource \a response.
 */
void ListLicenseSpecificationsForResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLicenseSpecificationsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListLicenseSpecificationsForResourceResponsePrivate
 * \brief The ListLicenseSpecificationsForResourceResponsePrivate class provides private implementation for ListLicenseSpecificationsForResourceResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListLicenseSpecificationsForResourceResponsePrivate object with public implementation \a q.
 */
ListLicenseSpecificationsForResourceResponsePrivate::ListLicenseSpecificationsForResourceResponsePrivate(
    ListLicenseSpecificationsForResourceResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListLicenseSpecificationsForResource response element from \a xml.
 */
void ListLicenseSpecificationsForResourceResponsePrivate::parseListLicenseSpecificationsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLicenseSpecificationsForResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
