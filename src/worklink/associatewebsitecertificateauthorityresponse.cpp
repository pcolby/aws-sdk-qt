// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const AssociateWebsiteCertificateAuthorityResponse);
    return static_cast<const AssociateWebsiteCertificateAuthorityRequest *>(d->request);
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
