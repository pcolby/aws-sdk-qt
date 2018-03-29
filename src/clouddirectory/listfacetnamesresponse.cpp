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

#include "listfacetnamesresponse.h"
#include "listfacetnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ListFacetNamesResponse
 *
 * @brief  Handles CloudDirectory ListFacetNames responses.
 *
 * @see    CloudDirectoryClient::listFacetNames
 */

/**
 * @brief  Constructs a new ListFacetNamesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFacetNamesResponse::ListFacetNamesResponse(
        const ListFacetNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListFacetNamesResponsePrivate(this), parent)
{
    setRequest(new ListFacetNamesRequest(request));
    setReply(reply);
}

const ListFacetNamesRequest * ListFacetNamesResponse::request() const
{
    Q_D(const ListFacetNamesResponse);
    return static_cast<const ListFacetNamesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListFacetNames response.
 *
 * @param  response  Response to parse.
 */
void ListFacetNamesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListFacetNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFacetNamesResponsePrivate
 *
 * @brief  Private implementation for ListFacetNamesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFacetNamesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFacetNamesResponse instance.
 */
ListFacetNamesResponsePrivate::ListFacetNamesResponsePrivate(
    ListFacetNamesResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListFacetNamesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFacetNamesResponsePrivate::ListFacetNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFacetNamesResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
