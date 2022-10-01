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

#include "updatebrowsersettingsresponse.h"
#include "updatebrowsersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdateBrowserSettingsResponse
 * \brief The UpdateBrowserSettingsResponse class provides an interace for WorkSpacesWeb UpdateBrowserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updateBrowserSettings
 */

/*!
 * Constructs a UpdateBrowserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBrowserSettingsResponse::UpdateBrowserSettingsResponse(
        const UpdateBrowserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new UpdateBrowserSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateBrowserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBrowserSettingsRequest * UpdateBrowserSettingsResponse::request() const
{
    Q_D(const UpdateBrowserSettingsResponse);
    return static_cast<const UpdateBrowserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb UpdateBrowserSettings \a response.
 */
void UpdateBrowserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBrowserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdateBrowserSettingsResponsePrivate
 * \brief The UpdateBrowserSettingsResponsePrivate class provides private implementation for UpdateBrowserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdateBrowserSettingsResponsePrivate object with public implementation \a q.
 */
UpdateBrowserSettingsResponsePrivate::UpdateBrowserSettingsResponsePrivate(
    UpdateBrowserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb UpdateBrowserSettings response element from \a xml.
 */
void UpdateBrowserSettingsResponsePrivate::parseUpdateBrowserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBrowserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
