/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "enabledomainautorenewresponse.h"
#include "enabledomainautorenewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::EnableDomainAutoRenewResponse
 * \brief The EnableDomainAutoRenewResponse class provides an interace for Route53Domains EnableDomainAutoRenew responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::enableDomainAutoRenew
 */

/*!
 * Constructs a EnableDomainAutoRenewResponse object for \a reply to \a request, with parent \a parent.
 */
EnableDomainAutoRenewResponse::EnableDomainAutoRenewResponse(
        const EnableDomainAutoRenewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new EnableDomainAutoRenewResponsePrivate(this), parent)
{
    setRequest(new EnableDomainAutoRenewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableDomainAutoRenewRequest * EnableDomainAutoRenewResponse::request() const
{
    Q_D(const EnableDomainAutoRenewResponse);
    return static_cast<const EnableDomainAutoRenewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains EnableDomainAutoRenew \a response.
 */
void EnableDomainAutoRenewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableDomainAutoRenewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::EnableDomainAutoRenewResponsePrivate
 * \brief The EnableDomainAutoRenewResponsePrivate class provides private implementation for EnableDomainAutoRenewResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a EnableDomainAutoRenewResponsePrivate object with public implementation \a q.
 */
EnableDomainAutoRenewResponsePrivate::EnableDomainAutoRenewResponsePrivate(
    EnableDomainAutoRenewResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains EnableDomainAutoRenew response element from \a xml.
 */
void EnableDomainAutoRenewResponsePrivate::parseEnableDomainAutoRenewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableDomainAutoRenewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
