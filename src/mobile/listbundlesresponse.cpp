// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(ListBundlesResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mobile
} // namespace QtAws
