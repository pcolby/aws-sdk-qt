// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "route53domainsresponse.h"
#include "route53domainsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::Route53DomainsResponse
 * \brief The Route53DomainsResponse class provides an interface for Route53Domains responses.
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a Route53DomainsResponse object with parent \a parent.
 */
Route53DomainsResponse::Route53DomainsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new Route53DomainsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a Route53DomainsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53DomainsResponsePrivate.
 */
Route53DomainsResponse::Route53DomainsResponse(Route53DomainsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void Route53DomainsResponse::parseFailure(QIODevice &response)
{
    //Q_D(Route53DomainsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::Route53Domains::Route53DomainsResponsePrivate
 * \brief The Route53DomainsResponsePrivate class provides private implementation for Route53DomainsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a Route53DomainsResponsePrivate object with public implementation \a q.
 */
Route53DomainsResponsePrivate::Route53DomainsResponsePrivate(
    Route53DomainsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Route53Domains
} // namespace QtAws
