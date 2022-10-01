// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
