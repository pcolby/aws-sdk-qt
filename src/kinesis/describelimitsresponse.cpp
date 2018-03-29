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

#include "describelimitsresponse.h"
#include "describelimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  DescribeLimitsResponse
 *
 * @brief  Handles Kinesis DescribeLimits responses.
 *
 * @see    KinesisClient::describeLimits
 */

/**
 * @brief  Constructs a new DescribeLimitsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLimitsResponse::DescribeLimitsResponse(
        const DescribeLimitsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DescribeLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeLimitsRequest(request));
    setReply(reply);
}

const DescribeLimitsRequest * DescribeLimitsResponse::request() const
{
    Q_D(const DescribeLimitsResponse);
    return static_cast<const DescribeLimitsRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis DescribeLimits response.
 *
 * @param  response  Response to parse.
 */
void DescribeLimitsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeLimitsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLimitsResponsePrivate
 *
 * @brief  Private implementation for DescribeLimitsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLimitsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLimitsResponse instance.
 */
DescribeLimitsResponsePrivate::DescribeLimitsResponsePrivate(
    DescribeLimitsResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis DescribeLimitsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLimitsResponsePrivate::DescribeLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLimitsResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
