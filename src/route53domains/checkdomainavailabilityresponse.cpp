// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "checkdomainavailabilityresponse.h"
#include "checkdomainavailabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::CheckDomainAvailabilityResponse
 * \brief The CheckDomainAvailabilityResponse class provides an interace for Route53Domains CheckDomainAvailability responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::checkDomainAvailability
 */

/*!
 * Constructs a CheckDomainAvailabilityResponse object for \a reply to \a request, with parent \a parent.
 */
CheckDomainAvailabilityResponse::CheckDomainAvailabilityResponse(
        const CheckDomainAvailabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new CheckDomainAvailabilityResponsePrivate(this), parent)
{
    setRequest(new CheckDomainAvailabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CheckDomainAvailabilityRequest * CheckDomainAvailabilityResponse::request() const
{
    Q_D(const CheckDomainAvailabilityResponse);
    return static_cast<const CheckDomainAvailabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains CheckDomainAvailability \a response.
 */
void CheckDomainAvailabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CheckDomainAvailabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::CheckDomainAvailabilityResponsePrivate
 * \brief The CheckDomainAvailabilityResponsePrivate class provides private implementation for CheckDomainAvailabilityResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a CheckDomainAvailabilityResponsePrivate object with public implementation \a q.
 */
CheckDomainAvailabilityResponsePrivate::CheckDomainAvailabilityResponsePrivate(
    CheckDomainAvailabilityResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains CheckDomainAvailability response element from \a xml.
 */
void CheckDomainAvailabilityResponsePrivate::parseCheckDomainAvailabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckDomainAvailabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
