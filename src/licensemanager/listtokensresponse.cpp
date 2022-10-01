// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtokensresponse.h"
#include "listtokensresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LicenseManager {

/*!
 * \class QtAws::LicenseManager::ListTokensResponse
 * \brief The ListTokensResponse class provides an interace for LicenseManager ListTokens responses.
 *
 * \inmodule QtAwsLicenseManager
 *
 *  License Manager makes it easier to manage licenses from software vendors across multiple Amazon Web Services accounts
 *  and on-premises
 *
 * \sa LicenseManagerClient::listTokens
 */

/*!
 * Constructs a ListTokensResponse object for \a reply to \a request, with parent \a parent.
 */
ListTokensResponse::ListTokensResponse(
        const ListTokensRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LicenseManagerResponse(new ListTokensResponsePrivate(this), parent)
{
    setRequest(new ListTokensRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTokensRequest * ListTokensResponse::request() const
{
    Q_D(const ListTokensResponse);
    return static_cast<const ListTokensRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LicenseManager ListTokens \a response.
 */
void ListTokensResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTokensResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LicenseManager::ListTokensResponsePrivate
 * \brief The ListTokensResponsePrivate class provides private implementation for ListTokensResponse.
 * \internal
 *
 * \inmodule QtAwsLicenseManager
 */

/*!
 * Constructs a ListTokensResponsePrivate object with public implementation \a q.
 */
ListTokensResponsePrivate::ListTokensResponsePrivate(
    ListTokensResponse * const q) : LicenseManagerResponsePrivate(q)
{

}

/*!
 * Parses a LicenseManager ListTokens response element from \a xml.
 */
void ListTokensResponsePrivate::parseListTokensResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTokensResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LicenseManager
} // namespace QtAws
