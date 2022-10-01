// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "renewdomainresponse.h"
#include "renewdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RenewDomainResponse
 * \brief The RenewDomainResponse class provides an interace for Route53Domains RenewDomain responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::renewDomain
 */

/*!
 * Constructs a RenewDomainResponse object for \a reply to \a request, with parent \a parent.
 */
RenewDomainResponse::RenewDomainResponse(
        const RenewDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new RenewDomainResponsePrivate(this), parent)
{
    setRequest(new RenewDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RenewDomainRequest * RenewDomainResponse::request() const
{
    Q_D(const RenewDomainResponse);
    return static_cast<const RenewDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains RenewDomain \a response.
 */
void RenewDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RenewDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::RenewDomainResponsePrivate
 * \brief The RenewDomainResponsePrivate class provides private implementation for RenewDomainResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RenewDomainResponsePrivate object with public implementation \a q.
 */
RenewDomainResponsePrivate::RenewDomainResponsePrivate(
    RenewDomainResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains RenewDomain response element from \a xml.
 */
void RenewDomainResponsePrivate::parseRenewDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RenewDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
