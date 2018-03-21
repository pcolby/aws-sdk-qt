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

#include "deletedistributionresponse.h"
#include "deletedistributionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  DeleteDistributionResponse
 *
 * @brief  Handles CloudFront DeleteDistribution responses.
 *
 * @see    CloudFrontClient::deleteDistribution
 */

/**
 * @brief  Constructs a new DeleteDistributionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDistributionResponse::DeleteDistributionResponse(
        const DeleteDistributionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteDistributionResponsePrivate(this), parent)
{
    setRequest(new DeleteDistributionRequest(request));
    setReply(reply);
}

const DeleteDistributionRequest * DeleteDistributionResponse::request() const
{
    Q_D(const DeleteDistributionResponse);
    return static_cast<const DeleteDistributionRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront DeleteDistribution response.
 *
 * @param  response  Response to parse.
 */
void DeleteDistributionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDistributionResponsePrivate
 *
 * @brief  Private implementation for DeleteDistributionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDistributionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDistributionResponse instance.
 */
DeleteDistributionResponsePrivate::DeleteDistributionResponsePrivate(
    DeleteDistributionQueueResponse * const q) : DeleteDistributionPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront DeleteDistributionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDistributionResponsePrivate::DeleteDistributionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDistributionResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
