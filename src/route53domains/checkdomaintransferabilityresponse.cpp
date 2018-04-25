/*
    Copyright 2013-2018 Paul Colby

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
    Q_D(CheckDomainTransferabilityResponse);
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
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
