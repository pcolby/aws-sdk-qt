// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateidentityproviderresponse.h"
#include "updateidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdateIdentityProviderResponse
 * \brief The UpdateIdentityProviderResponse class provides an interace for WorkSpacesWeb UpdateIdentityProvider responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updateIdentityProvider
 */

/*!
 * Constructs a UpdateIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIdentityProviderResponse::UpdateIdentityProviderResponse(
        const UpdateIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new UpdateIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new UpdateIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIdentityProviderRequest * UpdateIdentityProviderResponse::request() const
{
    Q_D(const UpdateIdentityProviderResponse);
    return static_cast<const UpdateIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb UpdateIdentityProvider \a response.
 */
void UpdateIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdateIdentityProviderResponsePrivate
 * \brief The UpdateIdentityProviderResponsePrivate class provides private implementation for UpdateIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdateIdentityProviderResponsePrivate object with public implementation \a q.
 */
UpdateIdentityProviderResponsePrivate::UpdateIdentityProviderResponsePrivate(
    UpdateIdentityProviderResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb UpdateIdentityProvider response element from \a xml.
 */
void UpdateIdentityProviderResponsePrivate::parseUpdateIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
