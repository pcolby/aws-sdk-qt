// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatenetworksettingsresponse.h"
#include "disassociatenetworksettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateNetworkSettingsResponse
 * \brief The DisassociateNetworkSettingsResponse class provides an interace for WorkSpacesWeb DisassociateNetworkSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::disassociateNetworkSettings
 */

/*!
 * Constructs a DisassociateNetworkSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateNetworkSettingsResponse::DisassociateNetworkSettingsResponse(
        const DisassociateNetworkSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new DisassociateNetworkSettingsResponsePrivate(this), parent)
{
    setRequest(new DisassociateNetworkSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateNetworkSettingsRequest * DisassociateNetworkSettingsResponse::request() const
{
    Q_D(const DisassociateNetworkSettingsResponse);
    return static_cast<const DisassociateNetworkSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb DisassociateNetworkSettings \a response.
 */
void DisassociateNetworkSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateNetworkSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateNetworkSettingsResponsePrivate
 * \brief The DisassociateNetworkSettingsResponsePrivate class provides private implementation for DisassociateNetworkSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DisassociateNetworkSettingsResponsePrivate object with public implementation \a q.
 */
DisassociateNetworkSettingsResponsePrivate::DisassociateNetworkSettingsResponsePrivate(
    DisassociateNetworkSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb DisassociateNetworkSettings response element from \a xml.
 */
void DisassociateNetworkSettingsResponsePrivate::parseDisassociateNetworkSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateNetworkSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
