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

#include "listdistributionsbywebaclidresponse.h"
#include "listdistributionsbywebaclidresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  ListDistributionsByWebACLIdResponse
 *
 * @brief  Handles CloudFront ListDistributionsByWebACLId responses.
 *
 * @see    CloudFrontClient::listDistributionsByWebACLId
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListDistributionsByWebACLIdResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new ListDistributionsByWebACLIdResponsePrivate(this), parent)
{
    setRequest(new ListDistributionsByWebACLIdRequest(request));
    setReply(reply);
}

const ListDistributionsByWebACLIdRequest * ListDistributionsByWebACLIdResponse::request() const
{
    Q_D(const ListDistributionsByWebACLIdResponse);
    return static_cast<const ListDistributionsByWebACLIdRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront ListDistributionsByWebACLId response.
 *
 * @param  response  Response to parse.
 */
void ListDistributionsByWebACLIdResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListDistributionsByWebACLIdResponsePrivate
 *
 * @brief  Private implementation for ListDistributionsByWebACLIdResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDistributionsByWebACLIdResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListDistributionsByWebACLIdResponse instance.
 */
ListDistributionsByWebACLIdResponsePrivate::ListDistributionsByWebACLIdResponsePrivate(
    ListDistributionsByWebACLIdQueueResponse * const q) : ListDistributionsByWebACLIdPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront ListDistributionsByWebACLIdResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListDistributionsByWebACLIdResponsePrivate::ListDistributionsByWebACLIdResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDistributionsByWebACLIdResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
