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

#include "listprincipalthingsresponse.h"
#include "listprincipalthingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListPrincipalThingsResponse
 *
 * @brief  Handles IoT ListPrincipalThings responses.
 *
 * @see    IoTClient::listPrincipalThings
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPrincipalThingsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListPrincipalThingsResponsePrivate(this), parent)
{
    setRequest(new ListPrincipalThingsRequest(request));
    setReply(reply);
}

const ListPrincipalThingsRequest * ListPrincipalThingsResponse::request() const
{
    Q_D(const ListPrincipalThingsResponse);
    return static_cast<const ListPrincipalThingsRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListPrincipalThings response.
 *
 * @param  response  Response to parse.
 */
void ListPrincipalThingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPrincipalThingsResponsePrivate
 *
 * @brief  Private implementation for ListPrincipalThingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPrincipalThingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPrincipalThingsResponse instance.
 */
ListPrincipalThingsResponsePrivate::ListPrincipalThingsResponsePrivate(
    ListPrincipalThingsQueueResponse * const q) : ListPrincipalThingsPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListPrincipalThingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPrincipalThingsResponsePrivate::ListPrincipalThingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPrincipalThingsResponse"));
    /// @todo
}
