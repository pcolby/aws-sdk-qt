/*
    Copyright 2013-2021 Paul Colby

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

#include "associatewebsitecertificateauthorityresponse.h"
#include "associatewebsitecertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::AssociateWebsiteCertificateAuthorityResponse
 * \brief The AssociateWebsiteCertificateAuthorityResponse class provides an interace for WorkLink AssociateWebsiteCertificateAuthority responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::associateWebsiteCertificateAuthority
 */

/*!
 * Constructs a AssociateWebsiteCertificateAuthorityResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateWebsiteCertificateAuthorityResponse::AssociateWebsiteCertificateAuthorityResponse(
        const AssociateWebsiteCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new AssociateWebsiteCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new AssociateWebsiteCertificateAuthorityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateWebsiteCertificateAuthorityRequest * AssociateWebsiteCertificateAuthorityResponse::request() const
{
    return static_cast<const AssociateWebsiteCertificateAuthorityRequest *>(WorkLinkResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkLink AssociateWebsiteCertificateAuthority \a response.
 */
void AssociateWebsiteCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateWebsiteCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::AssociateWebsiteCertificateAuthorityResponsePrivate
 * \brief The AssociateWebsiteCertificateAuthorityResponsePrivate class provides private implementation for AssociateWebsiteCertificateAuthorityResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a AssociateWebsiteCertificateAuthorityResponsePrivate object with public implementation \a q.
 */
AssociateWebsiteCertificateAuthorityResponsePrivate::AssociateWebsiteCertificateAuthorityResponsePrivate(
    AssociateWebsiteCertificateAuthorityResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink AssociateWebsiteCertificateAuthority response element from \a xml.
 */
void AssociateWebsiteCertificateAuthorityResponsePrivate::parseAssociateWebsiteCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateWebsiteCertificateAuthorityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
