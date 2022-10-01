// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworksettingsresponse.h"
#include "getnetworksettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::GetNetworkSettingsResponse
 * \brief The GetNetworkSettingsResponse class provides an interace for WorkSpacesWeb GetNetworkSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::getNetworkSettings
 */

/*!
 * Constructs a GetNetworkSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkSettingsResponse::GetNetworkSettingsResponse(
        const GetNetworkSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new GetNetworkSettingsResponsePrivate(this), parent)
{
    setRequest(new GetNetworkSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkSettingsRequest * GetNetworkSettingsResponse::request() const
{
    Q_D(const GetNetworkSettingsResponse);
    return static_cast<const GetNetworkSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb GetNetworkSettings \a response.
 */
void GetNetworkSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::GetNetworkSettingsResponsePrivate
 * \brief The GetNetworkSettingsResponsePrivate class provides private implementation for GetNetworkSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a GetNetworkSettingsResponsePrivate object with public implementation \a q.
 */
GetNetworkSettingsResponsePrivate::GetNetworkSettingsResponsePrivate(
    GetNetworkSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb GetNetworkSettings response element from \a xml.
 */
void GetNetworkSettingsResponsePrivate::parseGetNetworkSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
