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

#include "listvaultsresponse.h"
#include "listvaultsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  ListVaultsResponse
 *
 * @brief  Handles Glacier ListVaults responses.
 *
 * @see    GlacierClient::listVaults
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVaultsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new ListVaultsResponsePrivate(this), parent)
{
    setRequest(new ListVaultsRequest(request));
    setReply(reply);
}

const ListVaultsRequest * ListVaultsResponse::request() const
{
    Q_D(const ListVaultsResponse);
    return static_cast<const ListVaultsRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier ListVaults response.
 *
 * @param  response  Response to parse.
 */
void ListVaultsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListVaultsResponsePrivate
 *
 * @brief  Private implementation for ListVaultsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVaultsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListVaultsResponse instance.
 */
ListVaultsResponsePrivate::ListVaultsResponsePrivate(
    ListVaultsQueueResponse * const q) : ListVaultsPrivate(q)
{

}

/**
 * @brief  Parse an Glacier ListVaultsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListVaultsResponsePrivate::ListVaultsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVaultsResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
