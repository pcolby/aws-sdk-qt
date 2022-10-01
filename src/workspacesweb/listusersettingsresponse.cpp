// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersettingsresponse.h"
#include "listusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListUserSettingsResponse
 * \brief The ListUserSettingsResponse class provides an interace for WorkSpacesWeb ListUserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listUserSettings
 */

/*!
 * Constructs a ListUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUserSettingsResponse::ListUserSettingsResponse(
        const ListUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new ListUserSettingsResponsePrivate(this), parent)
{
    setRequest(new ListUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUserSettingsRequest * ListUserSettingsResponse::request() const
{
    Q_D(const ListUserSettingsResponse);
    return static_cast<const ListUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb ListUserSettings \a response.
 */
void ListUserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::ListUserSettingsResponsePrivate
 * \brief The ListUserSettingsResponsePrivate class provides private implementation for ListUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListUserSettingsResponsePrivate object with public implementation \a q.
 */
ListUserSettingsResponsePrivate::ListUserSettingsResponsePrivate(
    ListUserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb ListUserSettings response element from \a xml.
 */
void ListUserSettingsResponsePrivate::parseListUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
