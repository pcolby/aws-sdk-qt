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

#include "getdomaindetailresponse.h"
#include "getdomaindetailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetDomainDetailResponse
 * \brief The GetDomainDetailResponse class provides an interace for Route53Domains GetDomainDetail responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getDomainDetail
 */

/*!
 * Constructs a GetDomainDetailResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainDetailResponse::GetDomainDetailResponse(
        const GetDomainDetailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new GetDomainDetailResponsePrivate(this), parent)
{
    setRequest(new GetDomainDetailRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainDetailRequest * GetDomainDetailResponse::request() const
{
    Q_D(const GetDomainDetailResponse);
    return static_cast<const GetDomainDetailRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains GetDomainDetail \a response.
 */
void GetDomainDetailResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDomainDetailResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::GetDomainDetailResponsePrivate
 * \brief The GetDomainDetailResponsePrivate class provides private implementation for GetDomainDetailResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetDomainDetailResponsePrivate object with public implementation \a q.
 */
GetDomainDetailResponsePrivate::GetDomainDetailResponsePrivate(
    GetDomainDetailResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains GetDomainDetail response element from \a xml.
 */
void GetDomainDetailResponsePrivate::parseGetDomainDetailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainDetailResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
