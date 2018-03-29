/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "increasestreamretentionperiodresponse.h"
#include "increasestreamretentionperiodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  IncreaseStreamRetentionPeriodResponse
 *
 * @brief  Handles Kinesis IncreaseStreamRetentionPeriod responses.
 *
 * @see    KinesisClient::increaseStreamRetentionPeriod
 */

/**
 * @brief  Constructs a new IncreaseStreamRetentionPeriodResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
IncreaseStreamRetentionPeriodResponse::IncreaseStreamRetentionPeriodResponse(
        const IncreaseStreamRetentionPeriodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new IncreaseStreamRetentionPeriodResponsePrivate(this), parent)
{
    setRequest(new IncreaseStreamRetentionPeriodRequest(request));
    setReply(reply);
}

const IncreaseStreamRetentionPeriodRequest * IncreaseStreamRetentionPeriodResponse::request() const
{
    Q_D(const IncreaseStreamRetentionPeriodResponse);
    return static_cast<const IncreaseStreamRetentionPeriodRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis IncreaseStreamRetentionPeriod response.
 *
 * @param  response  Response to parse.
 */
void IncreaseStreamRetentionPeriodResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  IncreaseStreamRetentionPeriodResponsePrivate
 *
 * @brief  Private implementation for IncreaseStreamRetentionPeriodResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IncreaseStreamRetentionPeriodResponsePrivate object.
 *
 * @param  q  Pointer to this object's public IncreaseStreamRetentionPeriodResponse instance.
 */
IncreaseStreamRetentionPeriodResponsePrivate::IncreaseStreamRetentionPeriodResponsePrivate(
    IncreaseStreamRetentionPeriodQueueResponse * const q) : IncreaseStreamRetentionPeriodPrivate(q)
{

}

/**
 * @brief  Parse an Kinesis IncreaseStreamRetentionPeriodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void IncreaseStreamRetentionPeriodResponsePrivate::IncreaseStreamRetentionPeriodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IncreaseStreamRetentionPeriodResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
