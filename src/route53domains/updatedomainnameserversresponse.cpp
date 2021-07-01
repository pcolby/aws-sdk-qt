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

#include "updatedomainnameserversresponse.h"
#include "updatedomainnameserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateDomainNameserversResponse
 * \brief The UpdateDomainNameserversResponse class provides an interace for Route53Domains UpdateDomainNameservers responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateDomainNameservers
 */

/*!
 * Constructs a UpdateDomainNameserversResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainNameserversResponse::UpdateDomainNameserversResponse(
        const UpdateDomainNameserversRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateDomainNameserversResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainNameserversRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainNameserversRequest * UpdateDomainNameserversResponse::request() const
{
    Q_D(const UpdateDomainNameserversResponse);
    return static_cast<const UpdateDomainNameserversRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains UpdateDomainNameservers \a response.
 */
void UpdateDomainNameserversResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainNameserversResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::UpdateDomainNameserversResponsePrivate
 * \brief The UpdateDomainNameserversResponsePrivate class provides private implementation for UpdateDomainNameserversResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateDomainNameserversResponsePrivate object with public implementation \a q.
 */
UpdateDomainNameserversResponsePrivate::UpdateDomainNameserversResponsePrivate(
    UpdateDomainNameserversResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains UpdateDomainNameservers response element from \a xml.
 */
void UpdateDomainNameserversResponsePrivate::parseUpdateDomainNameserversResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainNameserversResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
