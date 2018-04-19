/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listbundlesresponse.h"
#include "listbundlesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ListBundlesResponse
 * \brief The ListBundlesResponse class provides an interace for Mobile ListBundles responses.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::listBundles
 */

/*!
 * Constructs a ListBundlesResponse object for \a reply to \a request, with parent \a parent.
 */
ListBundlesResponse::ListBundlesResponse(
        const ListBundlesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ListBundlesResponsePrivate(this), parent)
{
    setRequest(new ListBundlesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBundlesRequest * ListBundlesResponse::request() const
{
    Q_D(const ListBundlesResponse);
    return static_cast<const ListBundlesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mobile ListBundles \a response.
 */
void ListBundlesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBundlesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mobile::ListBundlesResponsePrivate
 * \brief The ListBundlesResponsePrivate class provides private implementation for ListBundlesResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a ListBundlesResponsePrivate object with public implementation \a q.
 */
ListBundlesResponsePrivate::ListBundlesResponsePrivate(
    ListBundlesResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * Parses a Mobile ListBundles response element from \a xml.
 */
void ListBundlesResponsePrivate::parseListBundlesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBundlesResponse"));
    /// @todo
}

} // namespace Mobile
} // namespace QtAws
