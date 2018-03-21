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

#include "listdetectorsresponse.h"
#include "listdetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  ListDetectorsResponse
 *
 * @brief  Handles GuardDuty ListDetectors responses.
 *
 * @see    GuardDutyClient::listDetectors
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDetectorsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new ListDetectorsResponsePrivate(this), parent)
{
    setRequest(new ListDetectorsRequest(request));
    setReply(reply);
}

const ListDetectorsRequest * ListDetectorsResponse::request() const
{
    Q_D(const ListDetectorsResponse);
    return static_cast<const ListDetectorsRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty ListDetectors response.
 *
 * @param  response  Response to parse.
 */
void ListDetectorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDetectorsResponsePrivate
 *
 * @brief  Private implementation for ListDetectorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDetectorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDetectorsResponse instance.
 */
ListDetectorsResponsePrivate::ListDetectorsResponsePrivate(
    ListDetectorsQueueResponse * const q) : ListDetectorsPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty ListDetectorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDetectorsResponsePrivate::ListDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDetectorsResponse"));
    /// @todo
}
