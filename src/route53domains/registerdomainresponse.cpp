// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerdomainresponse.h"
#include "registerdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RegisterDomainResponse
 * \brief The RegisterDomainResponse class provides an interace for Route53Domains RegisterDomain responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::registerDomain
 */

/*!
 * Constructs a RegisterDomainResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterDomainResponse::RegisterDomainResponse(
        const RegisterDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new RegisterDomainResponsePrivate(this), parent)
{
    setRequest(new RegisterDomainRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterDomainRequest * RegisterDomainResponse::request() const
{
    Q_D(const RegisterDomainResponse);
    return static_cast<const RegisterDomainRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains RegisterDomain \a response.
 */
void RegisterDomainResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::RegisterDomainResponsePrivate
 * \brief The RegisterDomainResponsePrivate class provides private implementation for RegisterDomainResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RegisterDomainResponsePrivate object with public implementation \a q.
 */
RegisterDomainResponsePrivate::RegisterDomainResponsePrivate(
    RegisterDomainResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains RegisterDomain response element from \a xml.
 */
void RegisterDomainResponsePrivate::parseRegisterDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterDomainResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
