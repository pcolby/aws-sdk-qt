// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributedgrantsresponse.h"
#include "listdistributedgrantsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListDistributedGrantsResponse
 * \brief The ListDistributedGrantsResponse class provides an interace for LicenseManager ListDistributedGrants responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listDistributedGrants
 */

/*!
 * Constructs a ListDistributedGrantsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDistributedGrantsResponse::ListDistributedGrantsResponse(
        const ListDistributedGrantsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListDistributedGrantsResponsePrivate(this), parent)
{
    setRequest(new ListDistributedGrantsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDistributedGrantsRequest * ListDistributedGrantsResponse::request() const
{
    Q_D(const ListDistributedGrantsResponse);
    return static_cast<const ListDistributedGrantsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListDistributedGrants \a response.
 */
void ListDistributedGrantsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDistributedGrantsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListDistributedGrantsResponsePrivate
 * \brief The ListDistributedGrantsResponsePrivate class provides private implementation for ListDistributedGrantsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListDistributedGrantsResponsePrivate object with public implementation \a q.
 */
ListDistributedGrantsResponsePrivate::ListDistributedGrantsResponsePrivate(
    ListDistributedGrantsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListDistributedGrants response element from \a xml.
 */
void ListDistributedGrantsResponsePrivate::parseListDistributedGrantsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributedGrantsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
