// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwebsitecertificateauthoritiesresponse.h"
#include "listwebsitecertificateauthoritiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::ListWebsiteCertificateAuthoritiesResponse
 * \brief The ListWebsiteCertificateAuthoritiesResponse class provides an interace for WorkLink ListWebsiteCertificateAuthorities responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::listWebsiteCertificateAuthorities
 */

/*!
 * Constructs a ListWebsiteCertificateAuthoritiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWebsiteCertificateAuthoritiesResponse::ListWebsiteCertificateAuthoritiesResponse(
        const ListWebsiteCertificateAuthoritiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new ListWebsiteCertificateAuthoritiesResponsePrivate(this), parent)
{
    setRequest(new ListWebsiteCertificateAuthoritiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWebsiteCertificateAuthoritiesRequest * ListWebsiteCertificateAuthoritiesResponse::request() const
{
    Q_D(const ListWebsiteCertificateAuthoritiesResponse);
    return static_cast<const ListWebsiteCertificateAuthoritiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink ListWebsiteCertificateAuthorities \a response.
 */
void ListWebsiteCertificateAuthoritiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWebsiteCertificateAuthoritiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::ListWebsiteCertificateAuthoritiesResponsePrivate
 * \brief The ListWebsiteCertificateAuthoritiesResponsePrivate class provides private implementation for ListWebsiteCertificateAuthoritiesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a ListWebsiteCertificateAuthoritiesResponsePrivate object with public implementation \a q.
 */
ListWebsiteCertificateAuthoritiesResponsePrivate::ListWebsiteCertificateAuthoritiesResponsePrivate(
    ListWebsiteCertificateAuthoritiesResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink ListWebsiteCertificateAuthorities response element from \a xml.
 */
void ListWebsiteCertificateAuthoritiesResponsePrivate::parseListWebsiteCertificateAuthoritiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWebsiteCertificateAuthoritiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
