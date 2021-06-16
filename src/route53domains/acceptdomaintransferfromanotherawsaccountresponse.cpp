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

#include "acceptdomaintransferfromanotherawsaccountresponse.h"
#include "acceptdomaintransferfromanotherawsaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::AcceptDomainTransferFromAnotherAwsAccountResponse
 * \brief The AcceptDomainTransferFromAnotherAwsAccountResponse class provides an interace for Route53Domains AcceptDomainTransferFromAnotherAwsAccount responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::acceptDomainTransferFromAnotherAwsAccount
 */

/*!
 * Constructs a AcceptDomainTransferFromAnotherAwsAccountResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptDomainTransferFromAnotherAwsAccountResponse::AcceptDomainTransferFromAnotherAwsAccountResponse(
        const AcceptDomainTransferFromAnotherAwsAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new AcceptDomainTransferFromAnotherAwsAccountResponsePrivate(this), parent)
{
    setRequest(new AcceptDomainTransferFromAnotherAwsAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptDomainTransferFromAnotherAwsAccountRequest * AcceptDomainTransferFromAnotherAwsAccountResponse::request() const
{
    Q_D(const AcceptDomainTransferFromAnotherAwsAccountResponse);
    return static_cast<const AcceptDomainTransferFromAnotherAwsAccountRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains AcceptDomainTransferFromAnotherAwsAccount \a response.
 */
void AcceptDomainTransferFromAnotherAwsAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptDomainTransferFromAnotherAwsAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::AcceptDomainTransferFromAnotherAwsAccountResponsePrivate
 * \brief The AcceptDomainTransferFromAnotherAwsAccountResponsePrivate class provides private implementation for AcceptDomainTransferFromAnotherAwsAccountResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a AcceptDomainTransferFromAnotherAwsAccountResponsePrivate object with public implementation \a q.
 */
AcceptDomainTransferFromAnotherAwsAccountResponsePrivate::AcceptDomainTransferFromAnotherAwsAccountResponsePrivate(
    AcceptDomainTransferFromAnotherAwsAccountResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains AcceptDomainTransferFromAnotherAwsAccount response element from \a xml.
 */
void AcceptDomainTransferFromAnotherAwsAccountResponsePrivate::parseAcceptDomainTransferFromAnotherAwsAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptDomainTransferFromAnotherAwsAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
