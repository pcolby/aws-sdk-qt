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

#include "retrievedomainauthcoderesponse.h"
#include "retrievedomainauthcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RetrieveDomainAuthCodeResponse
 * \brief The RetrieveDomainAuthCodeResponse class provides an interace for Route53Domains RetrieveDomainAuthCode responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::retrieveDomainAuthCode
 */

/*!
 * Constructs a RetrieveDomainAuthCodeResponse object for \a reply to \a request, with parent \a parent.
 */
RetrieveDomainAuthCodeResponse::RetrieveDomainAuthCodeResponse(
        const RetrieveDomainAuthCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new RetrieveDomainAuthCodeResponsePrivate(this), parent)
{
    setRequest(new RetrieveDomainAuthCodeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RetrieveDomainAuthCodeRequest * RetrieveDomainAuthCodeResponse::request() const
{
    Q_D(const RetrieveDomainAuthCodeResponse);
    return static_cast<const RetrieveDomainAuthCodeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains RetrieveDomainAuthCode \a response.
 */
void RetrieveDomainAuthCodeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RetrieveDomainAuthCodeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::RetrieveDomainAuthCodeResponsePrivate
 * \brief The RetrieveDomainAuthCodeResponsePrivate class provides private implementation for RetrieveDomainAuthCodeResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RetrieveDomainAuthCodeResponsePrivate object with public implementation \a q.
 */
RetrieveDomainAuthCodeResponsePrivate::RetrieveDomainAuthCodeResponsePrivate(
    RetrieveDomainAuthCodeResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains RetrieveDomainAuthCode response element from \a xml.
 */
void RetrieveDomainAuthCodeResponsePrivate::parseRetrieveDomainAuthCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetrieveDomainAuthCodeResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
