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

#include "transferdomaintoanotherawsaccountresponse.h"
#include "transferdomaintoanotherawsaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::TransferDomainToAnotherAwsAccountResponse
 * \brief The TransferDomainToAnotherAwsAccountResponse class provides an interace for Route53Domains TransferDomainToAnotherAwsAccount responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::transferDomainToAnotherAwsAccount
 */

/*!
 * Constructs a TransferDomainToAnotherAwsAccountResponse object for \a reply to \a request, with parent \a parent.
 */
TransferDomainToAnotherAwsAccountResponse::TransferDomainToAnotherAwsAccountResponse(
        const TransferDomainToAnotherAwsAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new TransferDomainToAnotherAwsAccountResponsePrivate(this), parent)
{
    setRequest(new TransferDomainToAnotherAwsAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TransferDomainToAnotherAwsAccountRequest * TransferDomainToAnotherAwsAccountResponse::request() const
{
    Q_D(const TransferDomainToAnotherAwsAccountResponse);
    return static_cast<const TransferDomainToAnotherAwsAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains TransferDomainToAnotherAwsAccount \a response.
 */
void TransferDomainToAnotherAwsAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TransferDomainToAnotherAwsAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::TransferDomainToAnotherAwsAccountResponsePrivate
 * \brief The TransferDomainToAnotherAwsAccountResponsePrivate class provides private implementation for TransferDomainToAnotherAwsAccountResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a TransferDomainToAnotherAwsAccountResponsePrivate object with public implementation \a q.
 */
TransferDomainToAnotherAwsAccountResponsePrivate::TransferDomainToAnotherAwsAccountResponsePrivate(
    TransferDomainToAnotherAwsAccountResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains TransferDomainToAnotherAwsAccount response element from \a xml.
 */
void TransferDomainToAnotherAwsAccountResponsePrivate::parseTransferDomainToAnotherAwsAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TransferDomainToAnotherAwsAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
