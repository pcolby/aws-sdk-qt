/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The GetDomainSuggestionsResponse class provides an interace for Route53Domains GetDomainSuggestions responses.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getDomainSuggestions
 */

/*!
 * @brief  Constructs a new GetDomainSuggestionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const GetDomainSuggestionsRequest * GetDomainSuggestionsResponse::request() const
{
    Q_D(const GetDomainSuggestionsResponse);
    return static_cast<const GetDomainSuggestionsRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53Domains GetDomainSuggestions response.
 *
 * @param  response  Response to parse.
 */
void GetDomainSuggestionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDomainSuggestionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetDomainSuggestionsResponsePrivate
 *
 * \brief Private implementation for GetDomainSuggestionsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDomainSuggestionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDomainSuggestionsResponse instance.
 */
GetDomainSuggestionsResponsePrivate::GetDomainSuggestionsResponsePrivate(
    GetDomainSuggestionsResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53Domains GetDomainSuggestionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDomainSuggestionsResponsePrivate::parseGetDomainSuggestionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainSuggestionsResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
