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

#include "disablemetricscollectionresponse.h"
#include "disablemetricscollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DisableMetricsCollectionResponse
 *
 * @brief  Handles AutoScaling DisableMetricsCollection responses.
 *
 * @see    AutoScalingClient::disableMetricsCollection
 */

/**
 * @brief  Constructs a new DisableMetricsCollectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableMetricsCollectionResponse::DisableMetricsCollectionResponse(
        const DisableMetricsCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DisableMetricsCollectionResponsePrivate(this), parent)
{
    setRequest(new DisableMetricsCollectionRequest(request));
    setReply(reply);
}

const DisableMetricsCollectionRequest * DisableMetricsCollectionResponse::request() const
{
    Q_D(const DisableMetricsCollectionResponse);
    return static_cast<const DisableMetricsCollectionRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DisableMetricsCollection response.
 *
 * @param  response  Response to parse.
 */
void DisableMetricsCollectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableMetricsCollectionResponsePrivate
 *
 * @brief  Private implementation for DisableMetricsCollectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableMetricsCollectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableMetricsCollectionResponse instance.
 */
DisableMetricsCollectionResponsePrivate::DisableMetricsCollectionResponsePrivate(
    DisableMetricsCollectionQueueResponse * const q) : DisableMetricsCollectionPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DisableMetricsCollectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableMetricsCollectionResponsePrivate::DisableMetricsCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableMetricsCollectionResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
