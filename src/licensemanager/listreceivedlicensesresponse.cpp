// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreceivedlicensesresponse.h"
#include "listreceivedlicensesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListReceivedLicensesResponse
 * \brief The ListReceivedLicensesResponse class provides an interace for LicenseManager ListReceivedLicenses responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listReceivedLicenses
 */

/*!
 * Constructs a ListReceivedLicensesResponse object for \a reply to \a request, with parent \a parent.
 */
ListReceivedLicensesResponse::ListReceivedLicensesResponse(
        const ListReceivedLicensesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListReceivedLicensesResponsePrivate(this), parent)
{
    setRequest(new ListReceivedLicensesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReceivedLicensesRequest * ListReceivedLicensesResponse::request() const
{
    Q_D(const ListReceivedLicensesResponse);
    return static_cast<const ListReceivedLicensesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListReceivedLicenses \a response.
 */
void ListReceivedLicensesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReceivedLicensesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListReceivedLicensesResponsePrivate
 * \brief The ListReceivedLicensesResponsePrivate class provides private implementation for ListReceivedLicensesResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListReceivedLicensesResponsePrivate object with public implementation \a q.
 */
ListReceivedLicensesResponsePrivate::ListReceivedLicensesResponsePrivate(
    ListReceivedLicensesResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListReceivedLicenses response element from \a xml.
 */
void ListReceivedLicensesResponsePrivate::parseListReceivedLicensesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReceivedLicensesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
