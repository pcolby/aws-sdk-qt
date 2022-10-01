/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
