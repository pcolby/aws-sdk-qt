/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "transferdomainresponse.h"
#include "transferdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::TransferDomainResponse
 * \brief The TransferDomainResponse class provides an interace for Route53Domains TransferDomain responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::transferDomain
 */

/*!
 * Constructs a TransferDomainResponse object for \a reply to \a request, with parent \a parent.
 */
TransferDomainResponse::TransferDomainResponse(
        const TransferDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new TransferDomainResponsePrivate(this), parent)
{
    setRequest(new TransferDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TransferDomainRequest * TransferDomainResponse::request() const
{
    Q_D(const TransferDomainResponse);
    return static_cast<const TransferDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains TransferDomain \a response.
 */
void TransferDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(TransferDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::TransferDomainResponsePrivate
 * \brief The TransferDomainResponsePrivate class provides private implementation for TransferDomainResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a TransferDomainResponsePrivate object with public implementation \a q.
 */
TransferDomainResponsePrivate::TransferDomainResponsePrivate(
    TransferDomainResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains TransferDomain response element from \a xml.
 */
void TransferDomainResponsePrivate::parseTransferDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TransferDomainResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
