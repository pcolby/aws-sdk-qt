// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CancelDomainTransferToAnotherAwsAccountResponse);
    return static_cast<const CancelDomainTransferToAnotherAwsAccountRequest *>(d->request);
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
