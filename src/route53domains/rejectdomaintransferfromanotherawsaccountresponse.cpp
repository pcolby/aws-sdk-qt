// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const RejectDomainTransferFromAnotherAwsAccountResponse);
    return static_cast<const RejectDomainTransferFromAnotherAwsAccountRequest *>(d->request);
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
