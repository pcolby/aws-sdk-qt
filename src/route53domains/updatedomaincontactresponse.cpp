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

#include "updatedomaincontactresponse.h"
#include "updatedomaincontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactResponse
 * \brief The UpdateDomainContactResponse class provides an interace for Route53Domains UpdateDomainContact responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateDomainContact
 */

/*!
 * Constructs a UpdateDomainContactResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainContactResponse::UpdateDomainContactResponse(
        const UpdateDomainContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateDomainContactResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainContactRequest * UpdateDomainContactResponse::request() const
{
    Q_D(const UpdateDomainContactResponse);
    return static_cast<const UpdateDomainContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains UpdateDomainContact \a response.
 */
void UpdateDomainContactResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateDomainContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactResponsePrivate
 * \brief The UpdateDomainContactResponsePrivate class provides private implementation for UpdateDomainContactResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateDomainContactResponsePrivate object with public implementation \a q.
 */
UpdateDomainContactResponsePrivate::UpdateDomainContactResponsePrivate(
    UpdateDomainContactResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains UpdateDomainContact response element from \a xml.
 */
void UpdateDomainContactResponsePrivate::parseUpdateDomainContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainContactResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
