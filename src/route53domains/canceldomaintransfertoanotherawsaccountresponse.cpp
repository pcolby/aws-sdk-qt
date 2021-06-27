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

#include "canceldomaintransfertoanotherawsaccountresponse.h"
#include "canceldomaintransfertoanotherawsaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::CancelDomainTransferToAnotherAwsAccountResponse
 * \brief The CancelDomainTransferToAnotherAwsAccountResponse class provides an interace for Route53Domains CancelDomainTransferToAnotherAwsAccount responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::cancelDomainTransferToAnotherAwsAccount
 */

/*!
 * Constructs a CancelDomainTransferToAnotherAwsAccountResponse object for \a reply to \a request, with parent \a parent.
 */
CancelDomainTransferToAnotherAwsAccountResponse::CancelDomainTransferToAnotherAwsAccountResponse(
        const CancelDomainTransferToAnotherAwsAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new CancelDomainTransferToAnotherAwsAccountResponsePrivate(this), parent)
{
    setRequest(new CancelDomainTransferToAnotherAwsAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelDomainTransferToAnotherAwsAccountRequest * CancelDomainTransferToAnotherAwsAccountResponse::request() const
{
    return static_cast<const CancelDomainTransferToAnotherAwsAccountRequest *>(Route53DomainsResponse::request());
}

/*!
 * \reimp
 * Parses a successful Route53Domains CancelDomainTransferToAnotherAwsAccount \a response.
 */
void CancelDomainTransferToAnotherAwsAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelDomainTransferToAnotherAwsAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::CancelDomainTransferToAnotherAwsAccountResponsePrivate
 * \brief The CancelDomainTransferToAnotherAwsAccountResponsePrivate class provides private implementation for CancelDomainTransferToAnotherAwsAccountResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a CancelDomainTransferToAnotherAwsAccountResponsePrivate object with public implementation \a q.
 */
CancelDomainTransferToAnotherAwsAccountResponsePrivate::CancelDomainTransferToAnotherAwsAccountResponsePrivate(
    CancelDomainTransferToAnotherAwsAccountResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains CancelDomainTransferToAnotherAwsAccount response element from \a xml.
 */
void CancelDomainTransferToAnotherAwsAccountResponsePrivate::parseCancelDomainTransferToAnotherAwsAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelDomainTransferToAnotherAwsAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
