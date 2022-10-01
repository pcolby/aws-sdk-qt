// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disabledomainautorenewresponse.h"
#include "disabledomainautorenewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::DisableDomainAutoRenewResponse
 * \brief The DisableDomainAutoRenewResponse class provides an interace for Route53Domains DisableDomainAutoRenew responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::disableDomainAutoRenew
 */

/*!
 * Constructs a DisableDomainAutoRenewResponse object for \a reply to \a request, with parent \a parent.
 */
DisableDomainAutoRenewResponse::DisableDomainAutoRenewResponse(
        const DisableDomainAutoRenewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new DisableDomainAutoRenewResponsePrivate(this), parent)
{
    setRequest(new DisableDomainAutoRenewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableDomainAutoRenewRequest * DisableDomainAutoRenewResponse::request() const
{
    Q_D(const DisableDomainAutoRenewResponse);
    return static_cast<const DisableDomainAutoRenewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains DisableDomainAutoRenew \a response.
 */
void DisableDomainAutoRenewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableDomainAutoRenewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::DisableDomainAutoRenewResponsePrivate
 * \brief The DisableDomainAutoRenewResponsePrivate class provides private implementation for DisableDomainAutoRenewResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a DisableDomainAutoRenewResponsePrivate object with public implementation \a q.
 */
DisableDomainAutoRenewResponsePrivate::DisableDomainAutoRenewResponsePrivate(
    DisableDomainAutoRenewResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains DisableDomainAutoRenew response element from \a xml.
 */
void DisableDomainAutoRenewResponsePrivate::parseDisableDomainAutoRenewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableDomainAutoRenewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
