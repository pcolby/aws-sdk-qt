// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateidentityproviderconfigurationresponse.h"
#include "updateidentityproviderconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateIdentityProviderConfigurationResponse
 * \brief The UpdateIdentityProviderConfigurationResponse class provides an interace for WorkLink UpdateIdentityProviderConfiguration responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateIdentityProviderConfiguration
 */

/*!
 * Constructs a UpdateIdentityProviderConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIdentityProviderConfigurationResponse::UpdateIdentityProviderConfigurationResponse(
        const UpdateIdentityProviderConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new UpdateIdentityProviderConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateIdentityProviderConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIdentityProviderConfigurationRequest * UpdateIdentityProviderConfigurationResponse::request() const
{
    Q_D(const UpdateIdentityProviderConfigurationResponse);
    return static_cast<const UpdateIdentityProviderConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink UpdateIdentityProviderConfiguration \a response.
 */
void UpdateIdentityProviderConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIdentityProviderConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::UpdateIdentityProviderConfigurationResponsePrivate
 * \brief The UpdateIdentityProviderConfigurationResponsePrivate class provides private implementation for UpdateIdentityProviderConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateIdentityProviderConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateIdentityProviderConfigurationResponsePrivate::UpdateIdentityProviderConfigurationResponsePrivate(
    UpdateIdentityProviderConfigurationResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink UpdateIdentityProviderConfiguration response element from \a xml.
 */
void UpdateIdentityProviderConfigurationResponsePrivate::parseUpdateIdentityProviderConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIdentityProviderConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
