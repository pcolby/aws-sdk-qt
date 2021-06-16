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

#include "listassetsresponse.h"
#include "listassetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::ListAssetsResponse
 * \brief The ListAssetsResponse class provides an interace for MediaPackageVod ListAssets responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::listAssets
 */

/*!
 * Constructs a ListAssetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssetsResponse::ListAssetsResponse(
        const ListAssetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new ListAssetsResponsePrivate(this), parent)
{
    setRequest(new ListAssetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssetsRequest * ListAssetsResponse::request() const
{
    Q_D(const ListAssetsResponse);
    return static_cast<const ListAssetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod ListAssets \a response.
 */
void ListAssetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::ListAssetsResponsePrivate
 * \brief The ListAssetsResponsePrivate class provides private implementation for ListAssetsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a ListAssetsResponsePrivate object with public implementation \a q.
 */
ListAssetsResponsePrivate::ListAssetsResponsePrivate(
    ListAssetsResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod ListAssets response element from \a xml.
 */
void ListAssetsResponsePrivate::parseListAssetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
