// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbrowsersettingsresponse.h"
#include "createbrowsersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreateBrowserSettingsResponse
 * \brief The CreateBrowserSettingsResponse class provides an interace for WorkSpacesWeb CreateBrowserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createBrowserSettings
 */

/*!
 * Constructs a CreateBrowserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBrowserSettingsResponse::CreateBrowserSettingsResponse(
        const CreateBrowserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new CreateBrowserSettingsResponsePrivate(this), parent)
{
    setRequest(new CreateBrowserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBrowserSettingsRequest * CreateBrowserSettingsResponse::request() const
{
    Q_D(const CreateBrowserSettingsResponse);
    return static_cast<const CreateBrowserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb CreateBrowserSettings \a response.
 */
void CreateBrowserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBrowserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::CreateBrowserSettingsResponsePrivate
 * \brief The CreateBrowserSettingsResponsePrivate class provides private implementation for CreateBrowserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreateBrowserSettingsResponsePrivate object with public implementation \a q.
 */
CreateBrowserSettingsResponsePrivate::CreateBrowserSettingsResponsePrivate(
    CreateBrowserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb CreateBrowserSettings response element from \a xml.
 */
void CreateBrowserSettingsResponsePrivate::parseCreateBrowserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBrowserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
