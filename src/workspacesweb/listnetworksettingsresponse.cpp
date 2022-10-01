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
