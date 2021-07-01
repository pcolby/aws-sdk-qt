/*
    Copyright 2013-2021 Paul Colby

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
