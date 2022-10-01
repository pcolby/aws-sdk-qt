// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainmetadataresponse.h"
#include "updatedomainmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateDomainMetadataResponse
 * \brief The UpdateDomainMetadataResponse class provides an interace for WorkLink UpdateDomainMetadata responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateDomainMetadata
 */

/*!
 * Constructs a UpdateDomainMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainMetadataResponse::UpdateDomainMetadataResponse(
        const UpdateDomainMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new UpdateDomainMetadataResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainMetadataRequest * UpdateDomainMetadataResponse::request() const
{
    Q_D(const UpdateDomainMetadataResponse);
    return static_cast<const UpdateDomainMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink UpdateDomainMetadata \a response.
 */
void UpdateDomainMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::UpdateDomainMetadataResponsePrivate
 * \brief The UpdateDomainMetadataResponsePrivate class provides private implementation for UpdateDomainMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateDomainMetadataResponsePrivate object with public implementation \a q.
 */
UpdateDomainMetadataResponsePrivate::UpdateDomainMetadataResponsePrivate(
    UpdateDomainMetadataResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink UpdateDomainMetadata response element from \a xml.
 */
void UpdateDomainMetadataResponsePrivate::parseUpdateDomainMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
