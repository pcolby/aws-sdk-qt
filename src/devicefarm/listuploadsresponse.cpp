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

#include "listuploadsresponse.h"
#include "listuploadsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ListUploadsResponse
 *
 * @brief  Handles DeviceFarm ListUploads responses.
 *
 * @see    DeviceFarmClient::listUploads
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUploadsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ListUploadsResponsePrivate(this), parent)
{
    setRequest(new ListUploadsRequest(request));
    setReply(reply);
}

const ListUploadsRequest * ListUploadsResponse::request() const
{
    Q_D(const ListUploadsResponse);
    return static_cast<const ListUploadsRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ListUploads response.
 *
 * @param  response  Response to parse.
 */
void ListUploadsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListUploadsResponsePrivate
 *
 * @brief  Private implementation for ListUploadsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUploadsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUploadsResponse instance.
 */
ListUploadsResponsePrivate::ListUploadsResponsePrivate(
    ListUploadsQueueResponse * const q) : ListUploadsPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ListUploadsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUploadsResponsePrivate::ListUploadsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUploadsResponse"));
    /// @todo
}
