// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateusersettingsresponse.h"
#include "associateusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::AssociateUserSettingsResponse
 * \brief The AssociateUserSettingsResponse class provides an interace for WorkSpacesWeb AssociateUserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::associateUserSettings
 */

/*!
 * Constructs a AssociateUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateUserSettingsResponse::AssociateUserSettingsResponse(
        const AssociateUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new AssociateUserSettingsResponsePrivate(this), parent)
{
    setRequest(new AssociateUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateUserSettingsRequest * AssociateUserSettingsResponse::request() const
{
    Q_D(const AssociateUserSettingsResponse);
    return static_cast<const AssociateUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb AssociateUserSettings \a response.
 */
void AssociateUserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::AssociateUserSettingsResponsePrivate
 * \brief The AssociateUserSettingsResponsePrivate class provides private implementation for AssociateUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a AssociateUserSettingsResponsePrivate object with public implementation \a q.
 */
AssociateUserSettingsResponsePrivate::AssociateUserSettingsResponsePrivate(
    AssociateUserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb AssociateUserSettings response element from \a xml.
 */
void AssociateUserSettingsResponsePrivate::parseAssociateUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateUserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
