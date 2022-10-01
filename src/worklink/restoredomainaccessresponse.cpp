// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoredomainaccessresponse.h"
#include "restoredomainaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::RestoreDomainAccessResponse
 * \brief The RestoreDomainAccessResponse class provides an interace for WorkLink RestoreDomainAccess responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::restoreDomainAccess
 */

/*!
 * Constructs a RestoreDomainAccessResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreDomainAccessResponse::RestoreDomainAccessResponse(
        const RestoreDomainAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new RestoreDomainAccessResponsePrivate(this), parent)
{
    setRequest(new RestoreDomainAccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreDomainAccessRequest * RestoreDomainAccessResponse::request() const
{
    Q_D(const RestoreDomainAccessResponse);
    return static_cast<const RestoreDomainAccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink RestoreDomainAccess \a response.
 */
void RestoreDomainAccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreDomainAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::RestoreDomainAccessResponsePrivate
 * \brief The RestoreDomainAccessResponsePrivate class provides private implementation for RestoreDomainAccessResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a RestoreDomainAccessResponsePrivate object with public implementation \a q.
 */
RestoreDomainAccessResponsePrivate::RestoreDomainAccessResponsePrivate(
    RestoreDomainAccessResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink RestoreDomainAccess response element from \a xml.
 */
void RestoreDomainAccessResponsePrivate::parseRestoreDomainAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDomainAccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
