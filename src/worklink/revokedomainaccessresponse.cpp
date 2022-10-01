// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revokedomainaccessresponse.h"
#include "revokedomainaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::RevokeDomainAccessResponse
 * \brief The RevokeDomainAccessResponse class provides an interace for WorkLink RevokeDomainAccess responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::revokeDomainAccess
 */

/*!
 * Constructs a RevokeDomainAccessResponse object for \a reply to \a request, with parent \a parent.
 */
RevokeDomainAccessResponse::RevokeDomainAccessResponse(
        const RevokeDomainAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new RevokeDomainAccessResponsePrivate(this), parent)
{
    setRequest(new RevokeDomainAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokeDomainAccessRequest * RevokeDomainAccessResponse::request() const
{
    Q_D(const RevokeDomainAccessResponse);
    return static_cast<const RevokeDomainAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink RevokeDomainAccess \a response.
 */
void RevokeDomainAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokeDomainAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::RevokeDomainAccessResponsePrivate
 * \brief The RevokeDomainAccessResponsePrivate class provides private implementation for RevokeDomainAccessResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a RevokeDomainAccessResponsePrivate object with public implementation \a q.
 */
RevokeDomainAccessResponsePrivate::RevokeDomainAccessResponsePrivate(
    RevokeDomainAccessResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink RevokeDomainAccess response element from \a xml.
 */
void RevokeDomainAccessResponsePrivate::parseRevokeDomainAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeDomainAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
