// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "checkdomaintransferabilityresponse.h"
#include "checkdomaintransferabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::CheckDomainTransferabilityResponse
 * \brief The CheckDomainTransferabilityResponse class provides an interace for Route53Domains CheckDomainTransferability responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::checkDomainTransferability
 */

/*!
 * Constructs a CheckDomainTransferabilityResponse object for \a reply to \a request, with parent \a parent.
 */
CheckDomainTransferabilityResponse::CheckDomainTransferabilityResponse(
        const CheckDomainTransferabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new CheckDomainTransferabilityResponsePrivate(this), parent)
{
    setRequest(new CheckDomainTransferabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CheckDomainTransferabilityRequest * CheckDomainTransferabilityResponse::request() const
{
    Q_D(const CheckDomainTransferabilityResponse);
    return static_cast<const CheckDomainTransferabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains CheckDomainTransferability \a response.
 */
void CheckDomainTransferabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CheckDomainTransferabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::CheckDomainTransferabilityResponsePrivate
 * \brief The CheckDomainTransferabilityResponsePrivate class provides private implementation for CheckDomainTransferabilityResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a CheckDomainTransferabilityResponsePrivate object with public implementation \a q.
 */
CheckDomainTransferabilityResponsePrivate::CheckDomainTransferabilityResponsePrivate(
    CheckDomainTransferabilityResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains CheckDomainTransferability response element from \a xml.
 */
void CheckDomainTransferabilityResponsePrivate::parseCheckDomainTransferabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckDomainTransferabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
