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

#include "rejectdomaintransferfromanotherawsaccountresponse.h"
#include "rejectdomaintransferfromanotherawsaccountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RejectDomainTransferFromAnotherAwsAccountResponse
 * \brief The RejectDomainTransferFromAnotherAwsAccountResponse class provides an interace for Route53Domains RejectDomainTransferFromAnotherAwsAccount responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::rejectDomainTransferFromAnotherAwsAccount
 */

/*!
 * Constructs a RejectDomainTransferFromAnotherAwsAccountResponse object for \a reply to \a request, with parent \a parent.
 */
RejectDomainTransferFromAnotherAwsAccountResponse::RejectDomainTransferFromAnotherAwsAccountResponse(
        const RejectDomainTransferFromAnotherAwsAccountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new RejectDomainTransferFromAnotherAwsAccountResponsePrivate(this), parent)
{
    setRequest(new RejectDomainTransferFromAnotherAwsAccountRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectDomainTransferFromAnotherAwsAccountRequest * RejectDomainTransferFromAnotherAwsAccountResponse::request() const
{
    return static_cast<const RejectDomainTransferFromAnotherAwsAccountRequest *>(Route53DomainsResponse::request());
}

/*!
 * \reimp
 * Parses a successful Route53Domains RejectDomainTransferFromAnotherAwsAccount \a response.
 */
void RejectDomainTransferFromAnotherAwsAccountResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectDomainTransferFromAnotherAwsAccountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::RejectDomainTransferFromAnotherAwsAccountResponsePrivate
 * \brief The RejectDomainTransferFromAnotherAwsAccountResponsePrivate class provides private implementation for RejectDomainTransferFromAnotherAwsAccountResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RejectDomainTransferFromAnotherAwsAccountResponsePrivate object with public implementation \a q.
 */
RejectDomainTransferFromAnotherAwsAccountResponsePrivate::RejectDomainTransferFromAnotherAwsAccountResponsePrivate(
    RejectDomainTransferFromAnotherAwsAccountResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains RejectDomainTransferFromAnotherAwsAccount response element from \a xml.
 */
void RejectDomainTransferFromAnotherAwsAccountResponsePrivate::parseRejectDomainTransferFromAnotherAwsAccountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectDomainTransferFromAnotherAwsAccountResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
