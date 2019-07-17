/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "associatewebsiteauthorizationproviderresponse.h"
#include "associatewebsiteauthorizationproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::AssociateWebsiteAuthorizationProviderResponse
 * \brief The AssociateWebsiteAuthorizationProviderResponse class provides an interace for WorkLink AssociateWebsiteAuthorizationProvider responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS phones.
 *  In a single step, your users, such as employees, can access internal websites as efficiently as they access any other
 *  public website. They enter a URL in their web browser, or choose a link to an internal website in an email. Amazon
 *  WorkLink authenticates the user's access and securely renders authorized internal web content in a secure rendering
 *  service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::associateWebsiteAuthorizationProvider
 */

/*!
 * Constructs a AssociateWebsiteAuthorizationProviderResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateWebsiteAuthorizationProviderResponse::AssociateWebsiteAuthorizationProviderResponse(
        const AssociateWebsiteAuthorizationProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new AssociateWebsiteAuthorizationProviderResponsePrivate(this), parent)
{
    setRequest(new AssociateWebsiteAuthorizationProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateWebsiteAuthorizationProviderRequest * AssociateWebsiteAuthorizationProviderResponse::request() const
{
    Q_D(const AssociateWebsiteAuthorizationProviderResponse);
    return static_cast<const AssociateWebsiteAuthorizationProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink AssociateWebsiteAuthorizationProvider \a response.
 */
void AssociateWebsiteAuthorizationProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateWebsiteAuthorizationProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::AssociateWebsiteAuthorizationProviderResponsePrivate
 * \brief The AssociateWebsiteAuthorizationProviderResponsePrivate class provides private implementation for AssociateWebsiteAuthorizationProviderResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a AssociateWebsiteAuthorizationProviderResponsePrivate object with public implementation \a q.
 */
AssociateWebsiteAuthorizationProviderResponsePrivate::AssociateWebsiteAuthorizationProviderResponsePrivate(
    AssociateWebsiteAuthorizationProviderResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink AssociateWebsiteAuthorizationProvider response element from \a xml.
 */
void AssociateWebsiteAuthorizationProviderResponsePrivate::parseAssociateWebsiteAuthorizationProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateWebsiteAuthorizationProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
