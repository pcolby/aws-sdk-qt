// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateusersettingsresponse.h"
#include "disassociateusersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateUserSettingsResponse
 * \brief The DisassociateUserSettingsResponse class provides an interace for WorkSpacesWeb DisassociateUserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::disassociateUserSettings
 */

/*!
 * Constructs a DisassociateUserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateUserSettingsResponse::DisassociateUserSettingsResponse(
        const DisassociateUserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new DisassociateUserSettingsResponsePrivate(this), parent)
{
    setRequest(new DisassociateUserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateUserSettingsRequest * DisassociateUserSettingsResponse::request() const
{
    Q_D(const DisassociateUserSettingsResponse);
    return static_cast<const DisassociateUserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb DisassociateUserSettings \a response.
 */
void DisassociateUserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateUserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateUserSettingsResponsePrivate
 * \brief The DisassociateUserSettingsResponsePrivate class provides private implementation for DisassociateUserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DisassociateUserSettingsResponsePrivate object with public implementation \a q.
 */
DisassociateUserSettingsResponsePrivate::DisassociateUserSettingsResponsePrivate(
    DisassociateUserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb DisassociateUserSettings response element from \a xml.
 */
void DisassociateUserSettingsResponsePrivate::parseDisassociateUserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateUserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
