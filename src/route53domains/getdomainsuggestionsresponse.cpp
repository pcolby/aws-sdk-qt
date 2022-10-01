// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
