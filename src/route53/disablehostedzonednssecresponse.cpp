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

#include "disablehostedzonednssecresponse.h"
#include "disablehostedzonednssecresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DisableHostedZoneDNSSECResponse
 * \brief The DisableHostedZoneDNSSECResponse class provides an interace for Route53 DisableHostedZoneDNSSEC responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::disableHostedZoneDNSSEC
 */

/*!
 * Constructs a DisableHostedZoneDNSSECResponse object for \a reply to \a request, with parent \a parent.
 */
DisableHostedZoneDNSSECResponse::DisableHostedZoneDNSSECResponse(
        const DisableHostedZoneDNSSECRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DisableHostedZoneDNSSECResponsePrivate(this), parent)
{
    setRequest(new DisableHostedZoneDNSSECRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableHostedZoneDNSSECRequest * DisableHostedZoneDNSSECResponse::request() const
{
    Q_D(const DisableHostedZoneDNSSECResponse);
    return static_cast<const DisableHostedZoneDNSSECRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 DisableHostedZoneDNSSEC \a response.
 */
void DisableHostedZoneDNSSECResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableHostedZoneDNSSECResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::DisableHostedZoneDNSSECResponsePrivate
 * \brief The DisableHostedZoneDNSSECResponsePrivate class provides private implementation for DisableHostedZoneDNSSECResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DisableHostedZoneDNSSECResponsePrivate object with public implementation \a q.
 */
DisableHostedZoneDNSSECResponsePrivate::DisableHostedZoneDNSSECResponsePrivate(
    DisableHostedZoneDNSSECResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 DisableHostedZoneDNSSEC response element from \a xml.
 */
void DisableHostedZoneDNSSECResponsePrivate::parseDisableHostedZoneDNSSECResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableHostedZoneDNSSECResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
