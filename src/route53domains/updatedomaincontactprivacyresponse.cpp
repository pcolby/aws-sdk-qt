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

#include "updatedomaincontactprivacyresponse.h"
#include "updatedomaincontactprivacyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactPrivacyResponse
 * \brief The UpdateDomainContactPrivacyResponse class provides an interace for Route53Domains UpdateDomainContactPrivacy responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateDomainContactPrivacy
 */

/*!
 * Constructs a UpdateDomainContactPrivacyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainContactPrivacyResponse::UpdateDomainContactPrivacyResponse(
        const UpdateDomainContactPrivacyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateDomainContactPrivacyResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainContactPrivacyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainContactPrivacyRequest * UpdateDomainContactPrivacyResponse::request() const
{
    Q_D(const UpdateDomainContactPrivacyResponse);
    return static_cast<const UpdateDomainContactPrivacyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains UpdateDomainContactPrivacy \a response.
 */
void UpdateDomainContactPrivacyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainContactPrivacyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactPrivacyResponsePrivate
 * \brief The UpdateDomainContactPrivacyResponsePrivate class provides private implementation for UpdateDomainContactPrivacyResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateDomainContactPrivacyResponsePrivate object with public implementation \a q.
 */
UpdateDomainContactPrivacyResponsePrivate::UpdateDomainContactPrivacyResponsePrivate(
    UpdateDomainContactPrivacyResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains UpdateDomainContactPrivacy response element from \a xml.
 */
void UpdateDomainContactPrivacyResponsePrivate::parseUpdateDomainContactPrivacyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainContactPrivacyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
