/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listincomingtypedlinksresponse.h"
#include "listincomingtypedlinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListIncomingTypedLinksResponse
 *
 * @brief  Handles CloudDirectory ListIncomingTypedLinks responses.
 *
 * @see    CloudDirectoryClient::listIncomingTypedLinks
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIncomingTypedLinksResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListIncomingTypedLinksResponsePrivate(this), parent)
{
    setRequest(new ListIncomingTypedLinksRequest(request));
    setReply(reply);
}

const ListIncomingTypedLinksRequest * ListIncomingTypedLinksResponse::request() const
{
    Q_D(const ListIncomingTypedLinksResponse);
    return static_cast<const ListIncomingTypedLinksRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListIncomingTypedLinks response.
 *
 * @param  response  Response to parse.
 */
void ListIncomingTypedLinksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIncomingTypedLinksResponsePrivate
 *
 * @brief  Private implementation for ListIncomingTypedLinksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIncomingTypedLinksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIncomingTypedLinksResponse instance.
 */
ListIncomingTypedLinksResponsePrivate::ListIncomingTypedLinksResponsePrivate(
    ListIncomingTypedLinksQueueResponse * const q) : ListIncomingTypedLinksPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListIncomingTypedLinksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIncomingTypedLinksResponsePrivate::ListIncomingTypedLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIncomingTypedLinksResponse"));
    /// @todo
}
