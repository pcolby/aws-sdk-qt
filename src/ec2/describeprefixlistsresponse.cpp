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

#include "describeprefixlistsresponse.h"
#include "describeprefixlistsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribePrefixListsResponse
 *
 * @brief  Handles EC2 DescribePrefixLists responses.
 *
 * @see    EC2Client::describePrefixLists
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePrefixListsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribePrefixListsResponsePrivate(this), parent)
{
    setRequest(new DescribePrefixListsRequest(request));
    setReply(reply);
}

const DescribePrefixListsRequest * DescribePrefixListsResponse::request() const
{
    Q_D(const DescribePrefixListsResponse);
    return static_cast<const DescribePrefixListsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribePrefixLists response.
 *
 * @param  response  Response to parse.
 */
void DescribePrefixListsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePrefixListsResponsePrivate
 *
 * @brief  Private implementation for DescribePrefixListsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePrefixListsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePrefixListsResponse instance.
 */
DescribePrefixListsResponsePrivate::DescribePrefixListsResponsePrivate(
    DescribePrefixListsQueueResponse * const q) : DescribePrefixListsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribePrefixListsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePrefixListsResponsePrivate::DescribePrefixListsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePrefixListsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
