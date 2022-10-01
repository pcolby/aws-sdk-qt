// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatebrowsersettingsresponse.h"
#include "disassociatebrowsersettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateBrowserSettingsResponse
 * \brief The DisassociateBrowserSettingsResponse class provides an interace for WorkSpacesWeb DisassociateBrowserSettings responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::disassociateBrowserSettings
 */

/*!
 * Constructs a DisassociateBrowserSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateBrowserSettingsResponse::DisassociateBrowserSettingsResponse(
        const DisassociateBrowserSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new DisassociateBrowserSettingsResponsePrivate(this), parent)
{
    setRequest(new DisassociateBrowserSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateBrowserSettingsRequest * DisassociateBrowserSettingsResponse::request() const
{
    Q_D(const DisassociateBrowserSettingsResponse);
    return static_cast<const DisassociateBrowserSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb DisassociateBrowserSettings \a response.
 */
void DisassociateBrowserSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateBrowserSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateBrowserSettingsResponsePrivate
 * \brief The DisassociateBrowserSettingsResponsePrivate class provides private implementation for DisassociateBrowserSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DisassociateBrowserSettingsResponsePrivate object with public implementation \a q.
 */
DisassociateBrowserSettingsResponsePrivate::DisassociateBrowserSettingsResponsePrivate(
    DisassociateBrowserSettingsResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb DisassociateBrowserSettings response element from \a xml.
 */
void DisassociateBrowserSettingsResponsePrivate::parseDisassociateBrowserSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateBrowserSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
