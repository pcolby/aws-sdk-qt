/*
    Copyright 2013-2019 Paul Colby

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

#include "disabledomaintransferlockresponse.h"
#include "disabledomaintransferlockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::DisableDomainTransferLockResponse
 * \brief The DisableDomainTransferLockResponse class provides an interace for Route53Domains DisableDomainTransferLock responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::disableDomainTransferLock
 */

/*!
 * Constructs a DisableDomainTransferLockResponse object for \a reply to \a request, with parent \a parent.
 */
DisableDomainTransferLockResponse::DisableDomainTransferLockResponse(
        const DisableDomainTransferLockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new DisableDomainTransferLockResponsePrivate(this), parent)
{
    setRequest(new DisableDomainTransferLockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableDomainTransferLockRequest * DisableDomainTransferLockResponse::request() const
{
    Q_D(const DisableDomainTransferLockResponse);
    return static_cast<const DisableDomainTransferLockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains DisableDomainTransferLock \a response.
 */
void DisableDomainTransferLockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableDomainTransferLockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::DisableDomainTransferLockResponsePrivate
 * \brief The DisableDomainTransferLockResponsePrivate class provides private implementation for DisableDomainTransferLockResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a DisableDomainTransferLockResponsePrivate object with public implementation \a q.
 */
DisableDomainTransferLockResponsePrivate::DisableDomainTransferLockResponsePrivate(
    DisableDomainTransferLockResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains DisableDomainTransferLock response element from \a xml.
 */
void DisableDomainTransferLockResponsePrivate::parseDisableDomainTransferLockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableDomainTransferLockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
