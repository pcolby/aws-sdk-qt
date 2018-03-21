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

#include "listhapgsresponse.h"
#include "listhapgsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSM {

/**
 * @class  ListHapgsResponse
 *
 * @brief  Handles CloudHSM ListHapgs responses.
 *
 * @see    CloudHSMClient::listHapgs
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListHapgsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ListHapgsResponsePrivate(this), parent)
{
    setRequest(new ListHapgsRequest(request));
    setReply(reply);
}

const ListHapgsRequest * ListHapgsResponse::request() const
{
    Q_D(const ListHapgsResponse);
    return static_cast<const ListHapgsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM ListHapgs response.
 *
 * @param  response  Response to parse.
 */
void ListHapgsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListHapgsResponsePrivate
 *
 * @brief  Private implementation for ListHapgsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHapgsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListHapgsResponse instance.
 */
ListHapgsResponsePrivate::ListHapgsResponsePrivate(
    ListHapgsQueueResponse * const q) : ListHapgsPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM ListHapgsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListHapgsResponsePrivate::ListHapgsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHapgsResponse"));
    /// @todo
}
