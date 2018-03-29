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

#include "describeclustersresponse.h"
#include "describeclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DAX {

/**
 * @class  DescribeClustersResponse
 *
 * @brief  Handles DAX DescribeClusters responses.
 *
 * @see    DAXClient::describeClusters
 */

/**
 * @brief  Constructs a new DescribeClustersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeClustersResponse::DescribeClustersResponse(
        const DescribeClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new DescribeClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeClustersRequest(request));
    setReply(reply);
}

const DescribeClustersRequest * DescribeClustersResponse::request() const
{
    Q_D(const DescribeClustersResponse);
    return static_cast<const DescribeClustersRequest *>(d->request);
}

/**
 * @brief  Parse a DAX DescribeClusters response.
 *
 * @param  response  Response to parse.
 */
void DescribeClustersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeClustersResponsePrivate
 *
 * @brief  Private implementation for DescribeClustersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeClustersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeClustersResponse instance.
 */
DescribeClustersResponsePrivate::DescribeClustersResponsePrivate(
    DescribeClustersQueueResponse * const q) : DescribeClustersPrivate(q)
{

}

/**
 * @brief  Parse an DAX DescribeClustersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeClustersResponsePrivate::DescribeClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClustersResponse"));
    /// @todo
}

} // namespace DAX
} // namespace AWS
