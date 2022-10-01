// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getusersettingsresponse.h"
#include "getusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::GetUserSettingsResponse
 * \brief The GetUserSettingsResponse class provides an interace for WorkSpacesWeb GetUserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::getUserSettings
 */

/*!
 * Constructs a GetUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetUserSettingsResponse::GetUserSettingsResponse(
        const GetUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new GetUserSettingsResponsePrivate(this), parent)
{
    setRequest(new GetUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUserSettingsRequest * GetUserSettingsResponse::request() const
{
    Q_D(const GetUserSettingsResponse);
    return static_cast<const GetUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb GetUserSettings \a response.
 */
void GetUserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::GetUserSettingsResponsePrivate
 * \brief The GetUserSettingsResponsePrivate class provides private implementation for GetUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a GetUserSettingsResponsePrivate object with public implementation \a q.
 */
GetUserSettingsResponsePrivate::GetUserSettingsResponsePrivate(
    GetUserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb GetUserSettings response element from \a xml.
 */
void GetUserSettingsResponsePrivate::parseGetUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
