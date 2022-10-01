// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateusersettingsresponse.h"
#include "updateusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdateUserSettingsResponse
 * \brief The UpdateUserSettingsResponse class provides an interace for WorkSpacesWeb UpdateUserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updateUserSettings
 */

/*!
 * Constructs a UpdateUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserSettingsResponse::UpdateUserSettingsResponse(
        const UpdateUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new UpdateUserSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserSettingsRequest * UpdateUserSettingsResponse::request() const
{
    Q_D(const UpdateUserSettingsResponse);
    return static_cast<const UpdateUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb UpdateUserSettings \a response.
 */
void UpdateUserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdateUserSettingsResponsePrivate
 * \brief The UpdateUserSettingsResponsePrivate class provides private implementation for UpdateUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdateUserSettingsResponsePrivate object with public implementation \a q.
 */
UpdateUserSettingsResponsePrivate::UpdateUserSettingsResponsePrivate(
    UpdateUserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb UpdateUserSettings response element from \a xml.
 */
void UpdateUserSettingsResponsePrivate::parseUpdateUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
