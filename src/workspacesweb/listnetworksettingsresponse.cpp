// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listnetworksettingsresponse.h"
#include "listnetworksettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListNetworkSettingsResponse
 * \brief The ListNetworkSettingsResponse class provides an interace for WorkSpacesWeb ListNetworkSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listNetworkSettings
 */

/*!
 * Constructs a ListNetworkSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListNetworkSettingsResponse::ListNetworkSettingsResponse(
        const ListNetworkSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new ListNetworkSettingsResponsePrivate(this), parent)
{
    setRequest(new ListNetworkSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListNetworkSettingsRequest * ListNetworkSettingsResponse::request() const
{
    Q_D(const ListNetworkSettingsResponse);
    return static_cast<const ListNetworkSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb ListNetworkSettings \a response.
 */
void ListNetworkSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListNetworkSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::ListNetworkSettingsResponsePrivate
 * \brief The ListNetworkSettingsResponsePrivate class provides private implementation for ListNetworkSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListNetworkSettingsResponsePrivate object with public implementation \a q.
 */
ListNetworkSettingsResponsePrivate::ListNetworkSettingsResponsePrivate(
    ListNetworkSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb ListNetworkSettings response element from \a xml.
 */
void ListNetworkSettingsResponsePrivate::parseListNetworkSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListNetworkSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
