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

#include "listtagsfordomainresponse.h"
#include "listtagsfordomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListTagsForDomainResponse
 *
 * \brief The ListTagsForDomainResponse class encapsulates Route53Domains ListTagsForDomain responses.
 *
 * \ingroup Route53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listTagsForDomain
 */

/*!
 * @brief  Constructs a new ListTagsForDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsForDomainResponse::ListTagsForDomainResponse(
        const ListTagsForDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ListTagsForDomainResponsePrivate(this), parent)
{
    setRequest(new ListTagsForDomainRequest(request));
    setReply(reply);
}

const ListTagsForDomainRequest * ListTagsForDomainResponse::request() const
{
    Q_D(const ListTagsForDomainResponse);
    return static_cast<const ListTagsForDomainRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53Domains ListTagsForDomain response.
 *
 * @param  response  Response to parse.
 */
void ListTagsForDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTagsForDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListTagsForDomainResponsePrivate
 *
 * \brief Private implementation for ListTagsForDomainResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTagsForDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsForDomainResponse instance.
 */
ListTagsForDomainResponsePrivate::ListTagsForDomainResponsePrivate(
    ListTagsForDomainResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53Domains ListTagsForDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsForDomainResponsePrivate::parseListTagsForDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForDomainResponse"));
    /// @todo
}

} // namespace Route53Domains
} // namespace QtAws
