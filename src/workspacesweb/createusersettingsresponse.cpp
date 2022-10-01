// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createusersettingsresponse.h"
#include "createusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreateUserSettingsResponse
 * \brief The CreateUserSettingsResponse class provides an interace for WorkSpacesWeb CreateUserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createUserSettings
 */

/*!
 * Constructs a CreateUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserSettingsResponse::CreateUserSettingsResponse(
        const CreateUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new CreateUserSettingsResponsePrivate(this), parent)
{
    setRequest(new CreateUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserSettingsRequest * CreateUserSettingsResponse::request() const
{
    Q_D(const CreateUserSettingsResponse);
    return static_cast<const CreateUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb CreateUserSettings \a response.
 */
void CreateUserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::CreateUserSettingsResponsePrivate
 * \brief The CreateUserSettingsResponsePrivate class provides private implementation for CreateUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreateUserSettingsResponsePrivate object with public implementation \a q.
 */
CreateUserSettingsResponsePrivate::CreateUserSettingsResponsePrivate(
    CreateUserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb CreateUserSettings response element from \a xml.
 */
void CreateUserSettingsResponsePrivate::parseCreateUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
