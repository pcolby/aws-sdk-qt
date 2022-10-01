// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatebrowsersettingsresponse.h"
#include "associatebrowsersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::AssociateBrowserSettingsResponse
 * \brief The AssociateBrowserSettingsResponse class provides an interace for WorkSpacesWeb AssociateBrowserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::associateBrowserSettings
 */

/*!
 * Constructs a AssociateBrowserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateBrowserSettingsResponse::AssociateBrowserSettingsResponse(
        const AssociateBrowserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new AssociateBrowserSettingsResponsePrivate(this), parent)
{
    setRequest(new AssociateBrowserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateBrowserSettingsRequest * AssociateBrowserSettingsResponse::request() const
{
    Q_D(const AssociateBrowserSettingsResponse);
    return static_cast<const AssociateBrowserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb AssociateBrowserSettings \a response.
 */
void AssociateBrowserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateBrowserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::AssociateBrowserSettingsResponsePrivate
 * \brief The AssociateBrowserSettingsResponsePrivate class provides private implementation for AssociateBrowserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a AssociateBrowserSettingsResponsePrivate object with public implementation \a q.
 */
AssociateBrowserSettingsResponsePrivate::AssociateBrowserSettingsResponsePrivate(
    AssociateBrowserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb AssociateBrowserSettings response element from \a xml.
 */
void AssociateBrowserSettingsResponsePrivate::parseAssociateBrowserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateBrowserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
