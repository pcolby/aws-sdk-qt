// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
