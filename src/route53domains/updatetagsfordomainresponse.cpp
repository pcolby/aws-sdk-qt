// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetagsfordomainresponse.h"
#include "updatetagsfordomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateTagsForDomainResponse
 * \brief The UpdateTagsForDomainResponse class provides an interace for Route53Domains UpdateTagsForDomain responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateTagsForDomain
 */

/*!
 * Constructs a UpdateTagsForDomainResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTagsForDomainResponse::UpdateTagsForDomainResponse(
        const UpdateTagsForDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateTagsForDomainResponsePrivate(this), parent)
{
    setRequest(new UpdateTagsForDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTagsForDomainRequest * UpdateTagsForDomainResponse::request() const
{
    Q_D(const UpdateTagsForDomainResponse);
    return static_cast<const UpdateTagsForDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains UpdateTagsForDomain \a response.
 */
void UpdateTagsForDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTagsForDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::UpdateTagsForDomainResponsePrivate
 * \brief The UpdateTagsForDomainResponsePrivate class provides private implementation for UpdateTagsForDomainResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateTagsForDomainResponsePrivate object with public implementation \a q.
 */
UpdateTagsForDomainResponsePrivate::UpdateTagsForDomainResponsePrivate(
    UpdateTagsForDomainResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains UpdateTagsForDomain response element from \a xml.
 */
void UpdateTagsForDomainResponsePrivate::parseUpdateTagsForDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTagsForDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
