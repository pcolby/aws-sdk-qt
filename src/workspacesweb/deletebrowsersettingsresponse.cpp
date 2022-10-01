// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebrowsersettingsresponse.h"
#include "deletebrowsersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DeleteBrowserSettingsResponse
 * \brief The DeleteBrowserSettingsResponse class provides an interace for WorkSpacesWeb DeleteBrowserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::deleteBrowserSettings
 */

/*!
 * Constructs a DeleteBrowserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBrowserSettingsResponse::DeleteBrowserSettingsResponse(
        const DeleteBrowserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new DeleteBrowserSettingsResponsePrivate(this), parent)
{
    setRequest(new DeleteBrowserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBrowserSettingsRequest * DeleteBrowserSettingsResponse::request() const
{
    Q_D(const DeleteBrowserSettingsResponse);
    return static_cast<const DeleteBrowserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb DeleteBrowserSettings \a response.
 */
void DeleteBrowserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBrowserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::DeleteBrowserSettingsResponsePrivate
 * \brief The DeleteBrowserSettingsResponsePrivate class provides private implementation for DeleteBrowserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DeleteBrowserSettingsResponsePrivate object with public implementation \a q.
 */
DeleteBrowserSettingsResponsePrivate::DeleteBrowserSettingsResponsePrivate(
    DeleteBrowserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb DeleteBrowserSettings response element from \a xml.
 */
void DeleteBrowserSettingsResponsePrivate::parseDeleteBrowserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBrowserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
