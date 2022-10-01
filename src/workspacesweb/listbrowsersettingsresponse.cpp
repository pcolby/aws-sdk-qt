// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbrowsersettingsresponse.h"
#include "listbrowsersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListBrowserSettingsResponse
 * \brief The ListBrowserSettingsResponse class provides an interace for WorkSpacesWeb ListBrowserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listBrowserSettings
 */

/*!
 * Constructs a ListBrowserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBrowserSettingsResponse::ListBrowserSettingsResponse(
        const ListBrowserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new ListBrowserSettingsResponsePrivate(this), parent)
{
    setRequest(new ListBrowserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBrowserSettingsRequest * ListBrowserSettingsResponse::request() const
{
    Q_D(const ListBrowserSettingsResponse);
    return static_cast<const ListBrowserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb ListBrowserSettings \a response.
 */
void ListBrowserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBrowserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::ListBrowserSettingsResponsePrivate
 * \brief The ListBrowserSettingsResponsePrivate class provides private implementation for ListBrowserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListBrowserSettingsResponsePrivate object with public implementation \a q.
 */
ListBrowserSettingsResponsePrivate::ListBrowserSettingsResponsePrivate(
    ListBrowserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb ListBrowserSettings response element from \a xml.
 */
void ListBrowserSettingsResponsePrivate::parseListBrowserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBrowserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
