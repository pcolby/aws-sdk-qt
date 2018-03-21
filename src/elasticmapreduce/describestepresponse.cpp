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

#include "describestepresponse.h"
#include "describestepresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  DescribeStepResponse
 *
 * @brief  Handles EMR DescribeStep responses.
 *
 * @see    EMRClient::describeStep
 */

/**
 * @brief  Constructs a new DescribeStepResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStepResponse::DescribeStepResponse(
        const DescribeStepRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new DescribeStepResponsePrivate(this), parent)
{
    setRequest(new DescribeStepRequest(request));
    setReply(reply);
}

const DescribeStepRequest * DescribeStepResponse::request() const
{
    Q_D(const DescribeStepResponse);
    return static_cast<const DescribeStepRequest *>(d->request);
}

/**
 * @brief  Parse a EMR DescribeStep response.
 *
 * @param  response  Response to parse.
 */
void DescribeStepResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStepResponsePrivate
 *
 * @brief  Private implementation for DescribeStepResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStepResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStepResponse instance.
 */
DescribeStepResponsePrivate::DescribeStepResponsePrivate(
    DescribeStepQueueResponse * const q) : DescribeStepPrivate(q)
{

}

/**
 * @brief  Parse an EMR DescribeStepResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStepResponsePrivate::DescribeStepResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStepResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS
