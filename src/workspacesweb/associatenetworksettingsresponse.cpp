// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatenetworksettingsresponse.h"
#include "associatenetworksettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::AssociateNetworkSettingsResponse
 * \brief The AssociateNetworkSettingsResponse class provides an interace for WorkSpacesWeb AssociateNetworkSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::associateNetworkSettings
 */

/*!
 * Constructs a AssociateNetworkSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateNetworkSettingsResponse::AssociateNetworkSettingsResponse(
        const AssociateNetworkSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new AssociateNetworkSettingsResponsePrivate(this), parent)
{
    setRequest(new AssociateNetworkSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateNetworkSettingsRequest * AssociateNetworkSettingsResponse::request() const
{
    Q_D(const AssociateNetworkSettingsResponse);
    return static_cast<const AssociateNetworkSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb AssociateNetworkSettings \a response.
 */
void AssociateNetworkSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateNetworkSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::AssociateNetworkSettingsResponsePrivate
 * \brief The AssociateNetworkSettingsResponsePrivate class provides private implementation for AssociateNetworkSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a AssociateNetworkSettingsResponsePrivate object with public implementation \a q.
 */
AssociateNetworkSettingsResponsePrivate::AssociateNetworkSettingsResponsePrivate(
    AssociateNetworkSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb AssociateNetworkSettings response element from \a xml.
 */
void AssociateNetworkSettingsResponsePrivate::parseAssociateNetworkSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateNetworkSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
