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

#include "updatenetworksettingsresponse.h"
#include "updatenetworksettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdateNetworkSettingsResponse
 * \brief The UpdateNetworkSettingsResponse class provides an interace for WorkSpacesWeb UpdateNetworkSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updateNetworkSettings
 */

/*!
 * Constructs a UpdateNetworkSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkSettingsResponse::UpdateNetworkSettingsResponse(
        const UpdateNetworkSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new UpdateNetworkSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkSettingsRequest * UpdateNetworkSettingsResponse::request() const
{
    Q_D(const UpdateNetworkSettingsResponse);
    return static_cast<const UpdateNetworkSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb UpdateNetworkSettings \a response.
 */
void UpdateNetworkSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdateNetworkSettingsResponsePrivate
 * \brief The UpdateNetworkSettingsResponsePrivate class provides private implementation for UpdateNetworkSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdateNetworkSettingsResponsePrivate object with public implementation \a q.
 */
UpdateNetworkSettingsResponsePrivate::UpdateNetworkSettingsResponsePrivate(
    UpdateNetworkSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb UpdateNetworkSettings response element from \a xml.
 */
void UpdateNetworkSettingsResponsePrivate::parseUpdateNetworkSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
