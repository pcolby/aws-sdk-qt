// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablehostedzonednssecresponse.h"
#include "enablehostedzonednssecresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::EnableHostedZoneDNSSECResponse
 * \brief The EnableHostedZoneDNSSECResponse class provides an interace for Route53 EnableHostedZoneDNSSEC responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::enableHostedZoneDNSSEC
 */

/*!
 * Constructs a EnableHostedZoneDNSSECResponse object for \a reply to \a request, with parent \a parent.
 */
EnableHostedZoneDNSSECResponse::EnableHostedZoneDNSSECResponse(
        const EnableHostedZoneDNSSECRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new EnableHostedZoneDNSSECResponsePrivate(this), parent)
{
    setRequest(new EnableHostedZoneDNSSECRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableHostedZoneDNSSECRequest * EnableHostedZoneDNSSECResponse::request() const
{
    Q_D(const EnableHostedZoneDNSSECResponse);
    return static_cast<const EnableHostedZoneDNSSECRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 EnableHostedZoneDNSSEC \a response.
 */
void EnableHostedZoneDNSSECResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableHostedZoneDNSSECResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::EnableHostedZoneDNSSECResponsePrivate
 * \brief The EnableHostedZoneDNSSECResponsePrivate class provides private implementation for EnableHostedZoneDNSSECResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a EnableHostedZoneDNSSECResponsePrivate object with public implementation \a q.
 */
EnableHostedZoneDNSSECResponsePrivate::EnableHostedZoneDNSSECResponsePrivate(
    EnableHostedZoneDNSSECResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 EnableHostedZoneDNSSEC response element from \a xml.
 */
void EnableHostedZoneDNSSECResponsePrivate::parseEnableHostedZoneDNSSECResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableHostedZoneDNSSECResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
