// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtagsfordomainresponse.h"
#include "listtagsfordomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListTagsForDomainResponse
 * \brief The ListTagsForDomainResponse class provides an interace for Route53Domains ListTagsForDomain responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listTagsForDomain
 */

/*!
 * Constructs a ListTagsForDomainResponse object for \a reply to \a request, with parent \a parent.
 */
ListTagsForDomainResponse::ListTagsForDomainResponse(
        const ListTagsForDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ListTagsForDomainResponsePrivate(this), parent)
{
    setRequest(new ListTagsForDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTagsForDomainRequest * ListTagsForDomainResponse::request() const
{
    Q_D(const ListTagsForDomainResponse);
    return static_cast<const ListTagsForDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains ListTagsForDomain \a response.
 */
void ListTagsForDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTagsForDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::ListTagsForDomainResponsePrivate
 * \brief The ListTagsForDomainResponsePrivate class provides private implementation for ListTagsForDomainResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ListTagsForDomainResponsePrivate object with public implementation \a q.
 */
ListTagsForDomainResponsePrivate::ListTagsForDomainResponsePrivate(
    ListTagsForDomainResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains ListTagsForDomain response element from \a xml.
 */
void ListTagsForDomainResponsePrivate::parseListTagsForDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
