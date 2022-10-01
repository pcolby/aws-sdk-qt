// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreceivedgrantsresponse.h"
#include "listreceivedgrantsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListReceivedGrantsResponse
 * \brief The ListReceivedGrantsResponse class provides an interace for LicenseManager ListReceivedGrants responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listReceivedGrants
 */

/*!
 * Constructs a ListReceivedGrantsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReceivedGrantsResponse::ListReceivedGrantsResponse(
        const ListReceivedGrantsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListReceivedGrantsResponsePrivate(this), parent)
{
    setRequest(new ListReceivedGrantsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReceivedGrantsRequest * ListReceivedGrantsResponse::request() const
{
    Q_D(const ListReceivedGrantsResponse);
    return static_cast<const ListReceivedGrantsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListReceivedGrants \a response.
 */
void ListReceivedGrantsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReceivedGrantsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListReceivedGrantsResponsePrivate
 * \brief The ListReceivedGrantsResponsePrivate class provides private implementation for ListReceivedGrantsResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListReceivedGrantsResponsePrivate object with public implementation \a q.
 */
ListReceivedGrantsResponsePrivate::ListReceivedGrantsResponsePrivate(
    ListReceivedGrantsResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListReceivedGrants response element from \a xml.
 */
void ListReceivedGrantsResponsePrivate::parseListReceivedGrantsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReceivedGrantsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
