// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enabledomaintransferlockresponse.h"
#include "enabledomaintransferlockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::EnableDomainTransferLockResponse
 * \brief The EnableDomainTransferLockResponse class provides an interace for Route53Domains EnableDomainTransferLock responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::enableDomainTransferLock
 */

/*!
 * Constructs a EnableDomainTransferLockResponse object for \a reply to \a request, with parent \a parent.
 */
EnableDomainTransferLockResponse::EnableDomainTransferLockResponse(
        const EnableDomainTransferLockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new EnableDomainTransferLockResponsePrivate(this), parent)
{
    setRequest(new EnableDomainTransferLockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableDomainTransferLockRequest * EnableDomainTransferLockResponse::request() const
{
    Q_D(const EnableDomainTransferLockResponse);
    return static_cast<const EnableDomainTransferLockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains EnableDomainTransferLock \a response.
 */
void EnableDomainTransferLockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableDomainTransferLockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::EnableDomainTransferLockResponsePrivate
 * \brief The EnableDomainTransferLockResponsePrivate class provides private implementation for EnableDomainTransferLockResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a EnableDomainTransferLockResponsePrivate object with public implementation \a q.
 */
EnableDomainTransferLockResponsePrivate::EnableDomainTransferLockResponsePrivate(
    EnableDomainTransferLockResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains EnableDomainTransferLock response element from \a xml.
 */
void EnableDomainTransferLockResponsePrivate::parseEnableDomainTransferLockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableDomainTransferLockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
