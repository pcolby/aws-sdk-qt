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

#include "listassociationversionsresponse.h"
#include "listassociationversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  ListAssociationVersionsResponse
 *
 * @brief  Handles SSM ListAssociationVersions responses.
 *
 * @see    SSMClient::listAssociationVersions
 */

/**
 * @brief  Constructs a new ListAssociationVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssociationVersionsResponse::ListAssociationVersionsResponse(
        const ListAssociationVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ListAssociationVersionsResponsePrivate(this), parent)
{
    setRequest(new ListAssociationVersionsRequest(request));
    setReply(reply);
}

const ListAssociationVersionsRequest * ListAssociationVersionsResponse::request() const
{
    Q_D(const ListAssociationVersionsResponse);
    return static_cast<const ListAssociationVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListAssociationVersions response.
 *
 * @param  response  Response to parse.
 */
void ListAssociationVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAssociationVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAssociationVersionsResponsePrivate
 *
 * @brief  Private implementation for ListAssociationVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociationVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAssociationVersionsResponse instance.
 */
ListAssociationVersionsResponsePrivate::ListAssociationVersionsResponsePrivate(
    ListAssociationVersionsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM ListAssociationVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAssociationVersionsResponsePrivate::ListAssociationVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociationVersionsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
