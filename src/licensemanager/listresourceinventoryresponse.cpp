// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourceinventoryresponse.h"
#include "listresourceinventoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListResourceInventoryResponse
 * \brief The ListResourceInventoryResponse class provides an interace for LicenseManager ListResourceInventory responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listResourceInventory
 */

/*!
 * Constructs a ListResourceInventoryResponse object for \a reply to \a request, with parent \a parent.
 */
ListResourceInventoryResponse::ListResourceInventoryResponse(
        const ListResourceInventoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListResourceInventoryResponsePrivate(this), parent)
{
    setRequest(new ListResourceInventoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListResourceInventoryRequest * ListResourceInventoryResponse::request() const
{
    Q_D(const ListResourceInventoryResponse);
    return static_cast<const ListResourceInventoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListResourceInventory \a response.
 */
void ListResourceInventoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListResourceInventoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListResourceInventoryResponsePrivate
 * \brief The ListResourceInventoryResponsePrivate class provides private implementation for ListResourceInventoryResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListResourceInventoryResponsePrivate object with public implementation \a q.
 */
ListResourceInventoryResponsePrivate::ListResourceInventoryResponsePrivate(
    ListResourceInventoryResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListResourceInventory response element from \a xml.
 */
void ListResourceInventoryResponsePrivate::parseListResourceInventoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceInventoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
