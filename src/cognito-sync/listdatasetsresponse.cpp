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

#include "listdatasetsresponse.h"
#include "listdatasetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoSync {

/**
 * @class  ListDatasetsResponse
 *
 * @brief  Handles CognitoSync ListDatasets responses.
 *
 * @see    CognitoSyncClient::listDatasets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDatasetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new ListDatasetsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetsRequest(request));
    setReply(reply);
}

const ListDatasetsRequest * ListDatasetsResponse::request() const
{
    Q_D(const ListDatasetsResponse);
    return static_cast<const ListDatasetsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync ListDatasets response.
 *
 * @param  response  Response to parse.
 */
void ListDatasetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDatasetsResponsePrivate
 *
 * @brief  Private implementation for ListDatasetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDatasetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDatasetsResponse instance.
 */
ListDatasetsResponsePrivate::ListDatasetsResponsePrivate(
    ListDatasetsQueueResponse * const q) : ListDatasetsPrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync ListDatasetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDatasetsResponsePrivate::ListDatasetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetsResponse"));
    /// @todo
}
