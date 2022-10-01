// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworksettingsresponse.h"
#include "updatenetworksettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdateNetworkSettingsResponse
 * \brief The UpdateNetworkSettingsResponse class provides an interace for WorkSpacesWeb UpdateNetworkSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updateNetworkSettings
 */

/*!
 * Constructs a UpdateNetworkSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNetworkSettingsResponse::UpdateNetworkSettingsResponse(
        const UpdateNetworkSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new UpdateNetworkSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateNetworkSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNetworkSettingsRequest * UpdateNetworkSettingsResponse::request() const
{
    Q_D(const UpdateNetworkSettingsResponse);
    return static_cast<const UpdateNetworkSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb UpdateNetworkSettings \a response.
 */
void UpdateNetworkSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNetworkSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdateNetworkSettingsResponsePrivate
 * \brief The UpdateNetworkSettingsResponsePrivate class provides private implementation for UpdateNetworkSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdateNetworkSettingsResponsePrivate object with public implementation \a q.
 */
UpdateNetworkSettingsResponsePrivate::UpdateNetworkSettingsResponsePrivate(
    UpdateNetworkSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb UpdateNetworkSettings response element from \a xml.
 */
void UpdateNetworkSettingsResponsePrivate::parseUpdateNetworkSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNetworkSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
