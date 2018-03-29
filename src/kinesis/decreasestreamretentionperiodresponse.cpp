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

#include "decreasestreamretentionperiodresponse.h"
#include "decreasestreamretentionperiodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  DecreaseStreamRetentionPeriodResponse
 *
 * @brief  Handles Kinesis DecreaseStreamRetentionPeriod responses.
 *
 * @see    KinesisClient::decreaseStreamRetentionPeriod
 */

/**
 * @brief  Constructs a new DecreaseStreamRetentionPeriodResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DecreaseStreamRetentionPeriodResponse::DecreaseStreamRetentionPeriodResponse(
        const DecreaseStreamRetentionPeriodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DecreaseStreamRetentionPeriodResponsePrivate(this), parent)
{
    setRequest(new DecreaseStreamRetentionPeriodRequest(request));
    setReply(reply);
}

const DecreaseStreamRetentionPeriodRequest * DecreaseStreamRetentionPeriodResponse::request() const
{
    Q_D(const DecreaseStreamRetentionPeriodResponse);
    return static_cast<const DecreaseStreamRetentionPeriodRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis DecreaseStreamRetentionPeriod response.
 *
 * @param  response  Response to parse.
 */
void DecreaseStreamRetentionPeriodResponse::parseSuccess(QIODevice &response)
{
    Q_D(DecreaseStreamRetentionPeriodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DecreaseStreamRetentionPeriodResponsePrivate
 *
 * @brief  Private implementation for DecreaseStreamRetentionPeriodResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DecreaseStreamRetentionPeriodResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DecreaseStreamRetentionPeriodResponse instance.
 */
DecreaseStreamRetentionPeriodResponsePrivate::DecreaseStreamRetentionPeriodResponsePrivate(
    DecreaseStreamRetentionPeriodResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis DecreaseStreamRetentionPeriodResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DecreaseStreamRetentionPeriodResponsePrivate::parseDecreaseStreamRetentionPeriodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecreaseStreamRetentionPeriodResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
