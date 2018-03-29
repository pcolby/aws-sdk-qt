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

#include "listdomainnamesresponse.h"
#include "listdomainnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  ListDomainNamesResponse
 *
 * @brief  Handles CloudSearch ListDomainNames responses.
 *
 * @see    CloudSearchClient::listDomainNames
 */

/**
 * @brief  Constructs a new ListDomainNamesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDomainNamesResponse::ListDomainNamesResponse(
        const ListDomainNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new ListDomainNamesResponsePrivate(this), parent)
{
    setRequest(new ListDomainNamesRequest(request));
    setReply(reply);
}

const ListDomainNamesRequest * ListDomainNamesResponse::request() const
{
    Q_D(const ListDomainNamesResponse);
    return static_cast<const ListDomainNamesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch ListDomainNames response.
 *
 * @param  response  Response to parse.
 */
void ListDomainNamesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDomainNamesResponsePrivate
 *
 * @brief  Private implementation for ListDomainNamesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDomainNamesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDomainNamesResponse instance.
 */
ListDomainNamesResponsePrivate::ListDomainNamesResponsePrivate(
    ListDomainNamesQueueResponse * const q) : ListDomainNamesPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch ListDomainNamesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDomainNamesResponsePrivate::ListDomainNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDomainNamesResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
