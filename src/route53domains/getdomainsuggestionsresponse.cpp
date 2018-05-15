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

#include "getdomainsuggestionsresponse.h"
#include "getdomainsuggestionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetDomainSuggestionsResponse
 * \brief The GetDomainSuggestionsResponse class provides an interace for Route53Domains GetDomainSuggestions responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getDomainSuggestions
 */

/*!
 * Constructs a GetDomainSuggestionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainSuggestionsResponse::GetDomainSuggestionsResponse(
        const GetDomainSuggestionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new GetDomainSuggestionsResponsePrivate(this), parent)
{
    setRequest(new GetDomainSuggestionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainSuggestionsRequest * GetDomainSuggestionsResponse::request() const
{
    Q_D(const GetDomainSuggestionsResponse);
    return static_cast<const GetDomainSuggestionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains GetDomainSuggestions \a response.
 */
void GetDomainSuggestionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainSuggestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::GetDomainSuggestionsResponsePrivate
 * \brief The GetDomainSuggestionsResponsePrivate class provides private implementation for GetDomainSuggestionsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetDomainSuggestionsResponsePrivate object with public implementation \a q.
 */
GetDomainSuggestionsResponsePrivate::GetDomainSuggestionsResponsePrivate(
    GetDomainSuggestionsResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains GetDomainSuggestions response element from \a xml.
 */
void GetDomainSuggestionsResponsePrivate::parseGetDomainSuggestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainSuggestionsResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
