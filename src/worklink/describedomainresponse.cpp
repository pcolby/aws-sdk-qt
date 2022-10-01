// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedomainresponse.h"
#include "describedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DescribeDomainResponse
 * \brief The DescribeDomainResponse class provides an interace for WorkLink DescribeDomain responses.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::describeDomain
 */

/*!
 * Constructs a DescribeDomainResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDomainResponse::DescribeDomainResponse(
        const DescribeDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkLinkResponse(new DescribeDomainResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDomainRequest * DescribeDomainResponse::request() const
{
    Q_D(const DescribeDomainResponse);
    return static_cast<const DescribeDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkLink DescribeDomain \a response.
 */
void DescribeDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkLink::DescribeDomainResponsePrivate
 * \brief The DescribeDomainResponsePrivate class provides private implementation for DescribeDomainResponse.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DescribeDomainResponsePrivate object with public implementation \a q.
 */
DescribeDomainResponsePrivate::DescribeDomainResponsePrivate(
    DescribeDomainResponse * const q) : WorkLinkResponsePrivate(q)
{

}

/*!
 * Parses a WorkLink DescribeDomain response element from \a xml.
 */
void DescribeDomainResponsePrivate::parseDescribeDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkLink
} // namespace QtAws
